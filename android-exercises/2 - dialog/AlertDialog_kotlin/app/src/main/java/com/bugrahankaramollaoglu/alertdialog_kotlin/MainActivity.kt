package com.bugrahankaramollaoglu.alertdialog_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.Toast
import androidx.appcompat.app.AlertDialog

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val button = findViewById<Button>(R.id.button)
    }

    fun clicked(view: View) {
        alertDialog()
    }

    private fun alertDialog() {
        val builder = AlertDialog.Builder(this)
        builder.setTitle("alert dialog")
        builder.setMessage("this is deneme")

        // positive
        builder.setPositiveButton("Yes") { dialog, which ->
            Toast.makeText(this, "you said yes", Toast.LENGTH_SHORT).show()
        }

        // negative
        builder.setNegativeButton("No") { dialog, which ->
            Toast.makeText(this, "you said no", Toast.LENGTH_SHORT).show()
        }

        val dialog: AlertDialog = builder.create()
        dialog.show()
    }
}

