package com.bugrahankaramollaoglu.optionsmenu_kotlin

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View

class MainActivity3 : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main3)
    }

    fun goBack3(view : View) {
        val intent : Intent = Intent(this@MainActivity3, MainActivity::class.java)
        startActivity(intent)
    }
}