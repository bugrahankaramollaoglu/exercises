package com.bugrahankaramollaoglu.retrofit_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import retrofit2.Call
import retrofit2.Callback
import retrofit2.Response

class MainActivity : AppCompatActivity() {

    private lateinit var recyclerView: RecyclerView


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


        recyclerView = findViewById(R.id.recyclerView)
        recyclerView.layoutManager = LinearLayoutManager(this)

        fetchSentences()

    }

    private fun fetchSentences() {
        val call: Call<ApiResponse> = ApiClient.apiService.getSentences()

        call.enqueue(object : Callback<ApiResponse> {
            override fun onResponse(call: Call<ApiResponse>, response: Response<ApiResponse>) {

                if (response.isSuccessful) {
                    val sentences: List<Sentence> = response.body()?.sentences ?: emptyList()

                    if (sentences.isNotEmpty()) {
                        println("deneme_girdi")
                        displaySentences(sentences)

//                        for (sentence in sentences) {
//                            val id = sentence.id
//                            val sentenceText = sentence.sentence
//                            val toTurkish = sentence.toTurkish
//                            val level = sentence.level
//
//                            println("Sentence ID: $id")
//                            println("Sentence Text: $sentenceText")
//                            println("Translation to Turkish: $toTurkish")
//                            println("Level: $level")
//                        }
                    } else {
                        println("No sentences found")
                    }


                } else {
                    Log.e("API", "Failed to fetch sentences. Error code: ${response.code()}")
                }
            }

            override fun onFailure(call: Call<ApiResponse>, t: Throwable) {

                Log.e("API", "Failed to fetch sentences. Error: ${t.message}")
            }
        })
    }

    private fun displaySentences(sentences: List<Sentence>) {
        val adapter = SentenceAdapter(sentences)
        recyclerView.adapter = adapter
    }


}