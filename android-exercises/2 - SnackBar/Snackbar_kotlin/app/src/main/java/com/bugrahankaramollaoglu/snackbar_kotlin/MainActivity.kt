package com.bugrahankaramollaoglu.snackbar_kotlin

import android.os.Bundle
import android.view.View
import android.widget.Button
import androidx.appcompat.app.AppCompatActivity
import androidx.constraintlayout.widget.ConstraintLayout
import com.google.android.material.snackbar.Snackbar

class MainActivity : AppCompatActivity() {

    private lateinit var button: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        button = findViewById<Button>(R.id.button)

    }

    fun snack(view: View) {
        val parentLayout = findViewById<ConstraintLayout>(R.id.parentLayout)
        val snackbar = Snackbar.make(parentLayout, "this is snackbar", Snackbar.LENGTH_SHORT).setAction("change") {
            button.setText("bbb")
        }.show()
    }
}