package com.bugrahankaramollaoglu.okhttp_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import okhttp3.OkHttpClient
import okhttp3.Request
import org.json.JSONArray

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        println("basladi")

        fetch()
    }

    fun fetch() {
        val apiUrl = "https://api.dictionaryapi.dev/api/v2/entries/en/pretty"

        val client = OkHttpClient()
        val request = Request.Builder()
            .url(apiUrl)
            .build()

        try {

            /*making HTTP requests, should not be performed on
            the main thread in Android. Network operations should
            be executed asynchronously to avoid blocking the UI
            thread, which could lead to unresponsiveness or application
            crashes */

            GlobalScope.launch(Dispatchers.IO) {
                // Run network operation in a background thread
                try {
                    val response = client.newCall(request).execute()

                    if (response.isSuccessful) {
                        val responseData = response.body?.string()
                        // Assuming jsonString contains your JSON data
                        val jsonString = responseData
                        // Parse the JSON array
                        val jsonArray = JSONArray(jsonString)

                        // Extracting information
                        val word = jsonArray.getJSONObject(0).getString("word")
                        val phonetic = jsonArray.getJSONObject(0).getString("phonetic")

                        // Example: Print extracted data
                        Log.d("mesaj", "Word: $word")
                        Log.d("fonetik", "Phonetic: $phonetic")

                        // You can similarly extract other information as needed

                    } else {
                        println("Error: ${response.code} - ${response.message}")
                    }
                } catch (e: Exception) {
                    println("Exception: ${e.message}")
                }
            }
        } catch (e: Exception) {
            println("Exception: ${e.message}")
        }
    }
}