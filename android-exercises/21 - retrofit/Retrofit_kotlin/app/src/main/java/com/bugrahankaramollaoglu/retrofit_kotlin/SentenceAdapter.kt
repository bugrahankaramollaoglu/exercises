package com.bugrahankaramollaoglu.retrofit_kotlin

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class SentenceAdapter(val sentenceList: List<Sentence>) :
    RecyclerView.Adapter<SentenceAdapter.SentenceHolder>() {

    class SentenceHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        val textViewSentence: TextView = itemView.findViewById(R.id.rv_TextView)
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): SentenceHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.recycler_row, parent, false)
        return SentenceHolder(view)
    }

    override fun getItemCount(): Int {
        return sentenceList.size
    }

    override fun onBindViewHolder(holder: SentenceHolder, position: Int) {
        val sentence = sentenceList[position]
        holder.textViewSentence.text = sentence.sentence
    }
}