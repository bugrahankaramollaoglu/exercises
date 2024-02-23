package com.example.sqlite_kotlin

import android.content.Intent
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.example.sqlite_kotlin.databinding.RecyclerRowBinding

class PersonAdapter(var personList: ArrayList<Person>) :
    RecyclerView.Adapter<PersonAdapter.PersonHolder>() {
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): PersonHolder {
        val binding = RecyclerRowBinding.inflate(LayoutInflater.from(parent.context), parent, false)
        return PersonHolder(binding)
    }

    override fun onBindViewHolder(holder: PersonHolder, position: Int) {
        holder.binding.recyclerViewTextView.text = personList[position].name
        holder.itemView.setOnClickListener {
            val intent = Intent(holder.itemView.context, UploadActivity::class.java)
            intent.putExtra("name", personList[holder.adapterPosition].name)
            intent.putExtra("info", "old_log")
            holder.itemView.context.startActivity(intent)
        }
    }

    override fun getItemCount(): Int {
        return personList.size
    }

    inner class PersonHolder(public val binding: RecyclerRowBinding) : RecyclerView.ViewHolder(
        binding.root
    )
}
