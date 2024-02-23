package com.bugrahankaramollaoglu.intent_java;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity2 extends AppCompatActivity {

    private String receivedName;
    private String receivedAge;
    private Button changeBackButton;
    private TextView receivedNameText;
    private TextView receivedAgeText;
    private Intent intent;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);

        changeBackButton = findViewById(R.id.button2);
        receivedNameText = findViewById(R.id.receivedNameText);
        receivedAgeText = findViewById(R.id.receivedAgeText);

        // intentle A2'de verileri alırken ilklendirmeyi unutma, yoksa cöküyor
        intent = getIntent();

        // bu anahtarlarla vermiştik, yine aynı anahtarla aliyoruz
        receivedName = intent.getStringExtra("namekey");
        receivedAge = intent.getStringExtra("agekey");


        receivedNameText.setText("received name: " + receivedName);
        receivedAgeText.setText("received age: " + receivedAge);
    }

    public void change2(View view) {
        Intent intent = new Intent(this, MainActivity.class);
        startActivity(intent);
    }
}
