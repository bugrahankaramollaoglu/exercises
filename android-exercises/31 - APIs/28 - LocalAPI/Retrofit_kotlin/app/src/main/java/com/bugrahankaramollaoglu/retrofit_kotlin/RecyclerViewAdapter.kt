package com.bugrahankaramollaoglu.retrofit_kotlin

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.recyclerview.widget.RecyclerView

class CryptoAdapter(private val cryptoCoins: List<Crypto>) : RecyclerView.Adapter<CryptoAdapter.ViewHolder>() {

    class ViewHolder(itemView: View) : RecyclerView.ViewHolder(itemView) {
        // ViewHolder setup here
    }

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        // Inflate your item layout and return a new ViewHolder
        val view = LayoutInflater.from(parent.context).inflate(R.layout.recycler_row, parent, false)
        return ViewHolder(view)
    }

    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        // Bind data to your ViewHolder here
        val cryptoCoin = cryptoCoins[position]

        

        // Update your ViewHolder UI with cryptoCoin data
        holder.itemView.findViewById<TextView>(R.id.currencyTextView).text = cryptoCoin.currency
        holder.itemView.findViewById<TextView>(R.id.priceTextView).text = cryptoCoin.price
    }


    override fun getItemCount(): Int {
        return cryptoCoins.size
    }
}
