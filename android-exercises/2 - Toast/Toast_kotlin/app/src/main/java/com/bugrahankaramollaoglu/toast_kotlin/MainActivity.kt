package com.bugrahankaramollaoglu.toast_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val button1 = findViewById<Button>(R.id.button1)
        val button2 = findViewById<Button>(R.id.button2)
    }

    fun button(view : View) {
        Toast.makeText(this, "button clicked", Toast.LENGTH_SHORT).show()
        Toast.makeText(this, "button clicked", Toast.LENGTH_LONG).show()
    }

}
