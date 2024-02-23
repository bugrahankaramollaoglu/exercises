package com.bugrahankaramollaoglu.coroutines_kotlin

import android.os.Bundle
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    private val apiService = ApiService()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val textView = findViewById<TextView>(R.id.textView)

        // Using CoroutineScope to launch a coroutine on the IO dispatcher
        CoroutineScope(Dispatchers.IO).launch {
            try {
                // Fetch data from the API using the suspend function
                val users = apiService.getUsers()

                // Update the UI on the main thread
                CoroutineScope(Dispatchers.Main).launch {
                    textView.text = "\nUsers: $users"
                }
            } catch (e: Exception) {
                // Handle errors
                e.printStackTrace()
            }
        }
    }
}
