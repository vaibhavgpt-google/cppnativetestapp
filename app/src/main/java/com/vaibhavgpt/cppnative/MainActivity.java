package com.vaibhavgpt.cppnative;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.widget.Toast;
import android.os.Bundle;
import android.util.Log;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("cppnative");
    }

    private String clientId = "389806356374-ce93appjrsvgtv016b013j28qr6jr262.apps.googleusercontent.com";

    private String achId = "CgkIlu-TkqwLEAIQBA";
    private boolean forcetoken = false;

    private static final int RC_ACHIEVEMENTS = 9002;

    private TextView tv;
    private Button btnGetPlayerId, btnRequestAccess, btnIsAuthenticated, btnAchUi, btnUnlockAchUi;

    // Native method declarations
    public native String stringFromJNI();
    public native void getPlayerIdNative(Object callback);
    public native void requestServerSideAccessNative(String clientId, boolean forceRefresh, Object callback);
    public native void isAuthenticatedNative(Object callback);

    private native void showAchievementsNative();

    private native void unlockAchievementNative(String id);


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize Views
        tv = findViewById(R.id.sample_text);
        btnGetPlayerId = findViewById(R.id.btn_get_player_id);
        btnRequestAccess = findViewById(R.id.btn_request_access);
        btnIsAuthenticated = findViewById(R.id.btn_is_authenticated);
        btnAchUi = findViewById(R.id.btn_ach_ui);
        btnUnlockAchUi = findViewById(R.id.btn_unlock_ach_ui);

        // Set initial text from a simple JNI call
        tv.setText(stringFromJNI());

        // --- Set OnClick Listeners for the buttons ---

        btnGetPlayerId.setOnClickListener(v -> {
            tv.setText("Fetching Player ID...");
            getPlayerIdNative(this);
        });

        btnRequestAccess.setOnClickListener(v -> {
            tv.setText("Requesting Server Side Access...");
            requestServerSideAccessNative(clientId, forcetoken, this);
        });

        btnIsAuthenticated.setOnClickListener(v -> {
            tv.setText("Checking Authentication Status...");
            isAuthenticatedNative(this);
        });

        btnAchUi.setOnClickListener(v -> {
            tv.setText("Showing UI");
            showAchievementsNative();
        });

        btnUnlockAchUi.setOnClickListener(v -> {
            String achievementId = achId.trim();
            tv.setText("unLocking " + achievementId);
            if (!achievementId.isEmpty()) {
                Log.d("vaibhavgpt", "Attempting to unlock achievement: " + achievementId);
                unlockAchievementNative(achievementId);
                Toast.makeText(this, "Unlock requested for: " + achievementId, Toast.LENGTH_SHORT).show();
            } else {
                Toast.makeText(this, "Please enter an Achievement ID", Toast.LENGTH_SHORT).show();
            }
        });
    }

    // --- These methods will be called from your native C++ code ---

    public void onPlayerIdReceived(String playerId) {
        Log.i("vaibhavgpt's function", "Player ID from native: " + playerId);
        // Update UI on the main thread
        runOnUiThread(() -> tv.setText("Player ID: " + playerId));
    }

    public void onServerSideAccessResult(String authCode, String error) {
        if (authCode != null) {
            Log.d("vaibhavgpt", "Server Side Access Success: " + authCode);
            runOnUiThread(() -> tv.setText("Auth Code Received!: " + authCode));
        } else {
            Log.e("vaibhavgpt", "Server Side Access Error: " + error);
            runOnUiThread(() -> tv.setText("Server Access Error: " + error));
        }
    }

    public void onIsAuthenticatedResult(boolean isAuthenticated) {
        Log.d("vaibhavgpt", "Is Authenticated: " + isAuthenticated);
        runOnUiThread(() -> tv.setText("Is Authenticated: " + isAuthenticated));
        if (!isAuthenticated) {
            Log.w("vaibhavgpt", "User is not authenticated with PGS.");
        }
    }

    /**
     * Called from Native code (JNI) to launch an Intent.
     * This method ensures that startActivityForResult is called on the UI thread.
     */
    public void launchIntent(Intent intent) {
        Log.d("vaibhavgpt", "launchIntent called from JNI");
        if (intent != null) {
            runOnUiThread(() -> {
                try {
                    startActivityForResult(intent, RC_ACHIEVEMENTS);
                } catch (Exception e) {
                    Log.e("vaibhavgpt", "Failed to launch intent: " + e.getMessage(), e);
                }
            });
        } else {
            Log.e("vaibhavgpt", "Cannot launch null intent!");
        }
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        Log.d("vaibhavgpt", "onActivityResult: requestCode=" + requestCode + ", resultCode=" + resultCode);
        if (requestCode == RC_ACHIEVEMENTS) {
            // Handle the result from the Achievements screen
            // resultCode is typically Activity.RESULT_OK or Activity.RESULT_CANCELED
            Log.d("vaibhavgpt", "Returned from Achievements UI");
        }
    }
}
