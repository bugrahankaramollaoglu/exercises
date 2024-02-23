package com.bugrahankaramollaoglu.optionsmenu_java;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class MainActivity2 extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
    }

    public void goBack2(View view) {
        Intent intent = new Intent(this, MainActivity.class);
        startActivity(intent);
    }
}