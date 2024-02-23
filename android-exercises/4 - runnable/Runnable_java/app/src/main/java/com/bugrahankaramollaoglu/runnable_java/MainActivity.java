package com.bugrahankaramollaoglu.runnable_java;

import android.os.Bundle;
import android.os.Handler;
import android.view.View;

import androidx.appcompat.app.AppCompatActivity;

import com.bugrahankaramollaoglu.runnable_java.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    private ActivityMainBinding binding;

    Runnable runnable1;
    Handler handler1;
    int number1 = 0;

    Runnable runnable2;
    Handler handler2;
    int number2 = 0;

    Runnable runnable3;
    Handler handler3;
    int number3 = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        binding = ActivityMainBinding.inflate(getLayoutInflater());
        View view = binding.getRoot();
        setContentView(view);

        binding.stopButton1.setEnabled(false);
        binding.stopButton2.setEnabled(false);
        binding.stopButton3.setEnabled(false);
    }

    public void start1(View view) {
        binding.textView.setText("Time: " + number1);
        handler1 = new Handler();
        runnable1 = new Runnable() {
            @Override
            public void run() {
                number1++;
                binding.textView.setText("Time: " + number1);
                handler1.postDelayed(runnable1, 1000);
            }
        };

        handler1.post(runnable1);
        binding.startButton1.setEnabled(false);
        binding.stopButton1.setEnabled(true);
    }

    public void stop1(View view) {
        handler1.removeCallbacks(runnable1);
        binding.startButton1.setEnabled(true);
        binding.stopButton1.setEnabled(false);
    }

    public void start2(View view) {
        binding.textView2.setText("Time: " + number2);
        handler2 = new Handler();
        runnable2 = new Runnable() {
            @Override
            public void run() {
                number2++;
                binding.textView2.setText("Time: " + number2);
                handler2.postDelayed(runnable2, 1000);
            }
        };

        handler2.post(runnable2);
        binding.startButton2.setEnabled(false);
        binding.stopButton2.setEnabled(true);
    }

    public void stop2(View view) {
        handler2.removeCallbacks(runnable2);
        binding.startButton2.setEnabled(true);
        binding.stopButton2.setEnabled(false);
    }

    public void start3(View view) {
        binding.textView3.setText("Time: " + number3);
        handler3 = new Handler();
        runnable3 = new Runnable() {
            @Override
            public void run() {
                number3++;
                binding.textView3.setText("Time: " + number3);
                handler3.postDelayed(runnable3, 1000);
            }
        };

        handler3.post(runnable3);
        binding.startButton3.setEnabled(false);
        binding.stopButton3.setEnabled(true);
    }

    public void stop3(View view) {
        handler3.removeCallbacks(runnable3);
        binding.startButton3.setEnabled(true);
        binding.stopButton3.setEnabled(false);
    }
}