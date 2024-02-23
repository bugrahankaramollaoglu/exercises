package com.bugrahankaramollaoglu.easyapi_kotlin

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class PostAdapter(private val postsList: List<Post>) : RecyclerView.Adapter<PostAdapter.PostHolder>() {
    class PostHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val idNumber = itemView.findViewById<TextView>(R.id.idNumber)
        val bodyText = itemView.findViewById<TextView>(R.id.bodyText)
        val titleText = itemView.findViewById<TextView>(R.id.titleText)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): PostHolder {
        val itemView = LayoutInflater.from(parent.context).inflate(R.layout.post_row, parent, false)
        return PostHolder(itemView)
    }

    override fun getItemCount(): Int {
        return postsList.size
    }

    override fun onBindViewHolder(holder: PostHolder, position: Int) {
        val currentPost = postsList[position]
        holder.idNumber.text = currentPost.id
        holder.titleText.text = currentPost.title
        holder.bodyText.text = currentPost.body
    }
}