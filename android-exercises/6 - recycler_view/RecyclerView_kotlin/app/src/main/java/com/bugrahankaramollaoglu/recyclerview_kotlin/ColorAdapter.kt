package com.bugrahankaramollaoglu.recyclerview_kotlin

import android.view.LayoutInflater
import android.view.ViewGroup
import android.widget.Toast
import androidx.recyclerview.widget.RecyclerView
import com.bugrahankaramollaoglu.recyclerview_kotlin.databinding.RecycleRowBinding

class ColorAdapter(val color_list: ArrayList<String>) :
    RecyclerView.Adapter<ColorAdapter.ColorHolder>() {

    class ColorHolder(val binding: RecycleRowBinding) : RecyclerView.ViewHolder(binding.root) {

    }

    // ColorHolder ilk oluşturulduğunda ne olacak
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ColorHolder {
        val binding = RecycleRowBinding.inflate(LayoutInflater.from(parent.context), parent, false)
        return ColorHolder(binding)
    }

    // bağlanacak ColorHolder sayısı
    override fun getItemCount(): Int {
        return color_list.size
    }

    override fun onBindViewHolder(holder: ColorHolder, position: Int) {
        holder.binding.recycleViewTextView.text = color_list[position]

        holder.itemView.setOnClickListener {
            Toast.makeText(
                holder.itemView.context,
                "you chose ${color_list[position]}",
                Toast.LENGTH_SHORT
            ).show()
        }
    }
}