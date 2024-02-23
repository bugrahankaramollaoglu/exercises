package com.bugrahankaramollaoglu.progressbar_kotlin

import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.view.View
import android.widget.Button
import android.widget.ProgressBar
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {

    private lateinit var progressBar: ProgressBar
    private lateinit var counterText: TextView
    private lateinit var startButton: Button
    private var myVar: Int = 0

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        progressBar = findViewById(R.id.progressBar)
        startButton = findViewById(R.id.button)
        counterText = findViewById(R.id.counterText)

        startButton.setOnClickListener {
            startButton.isEnabled = false
            progressBar.visibility = View.VISIBLE
            incrementVariable()
        }
    }

    fun incrementVariable() {

        val handler = Handler(Looper.getMainLooper())
        val targetValue = 20_000
        var currentValue = 0

        val startTime = System.currentTimeMillis()

        Thread {

            // burada threade giriyor

            while (currentValue < targetValue) {
                currentValue++
                handler.post {
                    counterText.setText("variable: $currentValue")
                    progressBar.progress =
                        (currentValue.toDouble() / targetValue.toDouble() * 100).toInt()
                }
            }

            // burada çıkıyor

            val endTime = System.currentTimeMillis()
            val elapsedTimeSeconds = ((endTime - startTime) / 1000).toInt()

            handler.post {
                progressBar.visibility = View.INVISIBLE
                startButton.isEnabled = true
                counterText.text = "Elapsed Time: $elapsedTimeSeconds seconds"
            }

        }.start()

    }
}