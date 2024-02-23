package com.bugrahankaramollaoglu.runnable_kotlin

import android.os.Bundle
import android.os.Handler
import android.view.View
import androidx.appcompat.app.AppCompatActivity
import com.bugrahankaramollaoglu.runnable_kotlin.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    lateinit var runnable1: Runnable
    lateinit var handler1: Handler
    var number1 = 0

    lateinit var runnable2: Runnable
    lateinit var handler2: Handler
    var number2 = 0

    lateinit var runnable3: Runnable
    lateinit var handler3: Handler
    var number3 = 0

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        val view = binding.root
        setContentView(view)

        handler1 = Handler()
        handler2 = Handler()
        handler3 = Handler()

        binding.stopButton1.isEnabled = false
        binding.stopButton2.isEnabled = false
        binding.stopButton3.isEnabled = false
    }

    fun start1(view: View) {
        binding.textView.text = "Time: $number1"
        runnable1 = object : Runnable {
            override fun run() {
                number1++;
                binding.textView.text = "Time: ${number1}"
                handler1.postDelayed(this, 100)
            }
        }
        handler1.post(runnable1)
        binding.startButton1.isEnabled = false
        binding.stopButton1.isEnabled = true
    }


    fun stop1(view: View) {
        handler1.removeCallbacks(runnable1)
        binding.startButton1.isEnabled = true
        binding.stopButton1.isEnabled = false
    }

    fun start2(view: View) {
        binding.textView2.text = "Time: $number2"

        runnable2 = object : Runnable {
            override fun run() {
                number2++;
                binding.textView2.text = "Time: ${number2}"
                handler2.postDelayed(this, 100)
            }
        }
        handler2.post(runnable2)
        binding.startButton2.isEnabled = false
        binding.stopButton2.isEnabled = true
    }

    fun stop2(view: View) {
        handler2.removeCallbacks(runnable2)
        binding.startButton2.isEnabled = true
        binding.stopButton2.isEnabled = false
    }

    fun start3(view: View) {
        binding.textView3.text = "Time: $number3"

        runnable3 = object : Runnable {
            override fun run() {
                number3++;
                binding.textView3.text = "Time: ${number3}"
                handler3.postDelayed(this, 100)
            }
        }
        handler3.post(runnable3)
        binding.startButton3.isEnabled = false
        binding.stopButton3.isEnabled = true
    }

    fun stop3(view: View) {
        handler3.removeCallbacks(runnable3)
        binding.startButton3.isEnabled = true
        binding.stopButton3.isEnabled = false
    }
}