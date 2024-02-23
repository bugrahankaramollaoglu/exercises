package com.bugrahankaramollaoglu.easyapi_kotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.lifecycle.lifecycleScope
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.bugrahankaramollaoglu.easyapi_kotlin.databinding.ActivityMainBinding
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import okhttp3.OkHttpClient
import okhttp3.Request
import org.json.JSONArray

// https://jsonplaceholder.typicode.com/

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private lateinit var postAdapter: PostAdapter

    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        postAdapter = PostAdapter(emptyList())
        binding.recyclerView.adapter = postAdapter
        binding.recyclerView.layoutManager = LinearLayoutManager(this)

        binding.fetchButton.setOnClickListener {
            Log.d("mesaj", "clicked")
            fetchData()
        }
    }

    private fun fetchData() {
        GlobalScope.launch(Dispatchers.IO) {
            try {
                val apiUrl = "https://jsonplaceholder.typicode.com/posts"
                val client = OkHttpClient()
                val request = Request.Builder().url(apiUrl).build()
                val response = client.newCall(request).execute()

                if (response.isSuccessful) {
                    val posts = parse_json(response.body!!.string())
                    addRecycler(posts)
//                    for (i in 0 until 5) {
//                        val post = posts.getJSONObject(i)
//                        val id = post.getString("id")
//                        val title = post.getString("title")
//                        val body = post.getString("body")
//                        Log.d("mesaj", "$id-Title: $title\nBody: $body\n")
//                    }
                } else {
                    Log.e("mesaj", "Error: ${response.code} - ${response.message}")
                }
            } catch (e: Exception) {
                Log.e("mesaj", "Error: ${e.message}")
            }
        }
    }

    private fun parse_json(json: String): List<Post> {

        val posts = mutableListOf<Post>()
        val jsonArray = JSONArray(json)

        for (i in 0 until jsonArray.length()) {
            val post = jsonArray.getJSONObject(i)
            val id = post.getString("id")
            val title = post.getString("title")
            val body = post.getString("body")
            posts.add(Post(id, title, body))
        }
        return posts

    }

    private fun addRecycler(posts: List<Post>) {

        runOnUiThread {
            postAdapter = PostAdapter(posts)
            findViewById<RecyclerView>(R.id.recyclerView).adapter = postAdapter
        }
    }
}