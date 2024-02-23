package com.bugrahankaramollaoglu.recyclerview_java;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.bugrahankaramollaoglu.recyclerview_java.databinding.RecyclerRowBinding;

public class ColorAdapter extends RecyclerView.Adapter<ColorAdapter.ColorHolder> {
    private final String[] colorsList;

    public ColorAdapter(String[] colorsList) {
        this.colorsList = colorsList;
    }

    @NonNull
    @Override
    public ColorHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        RecyclerRowBinding recyclerRowBinding = RecyclerRowBinding.inflate(LayoutInflater.from(parent.getContext()),
                parent, false);
        return new ColorHolder(recyclerRowBinding);
    }

    @Override
    public void onBindViewHolder(@NonNull ColorHolder holder, int position) {
        holder.binding.recyclerViewTextView.setText(colorsList[position]);

        holder.itemView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                int selectedItem = holder.getAdapterPosition();
                String selectedItemName = colorsList[selectedItem];
                Toast.makeText(holder.itemView.getContext(), "you touched: " + selectedItemName, Toast.LENGTH_SHORT).show();
            }
        });
    }


    @Override
    public int getItemCount() {
        return colorsList.length;
    }

    public class ColorHolder extends RecyclerView.ViewHolder {

        private RecyclerRowBinding binding;

        public ColorHolder(RecyclerRowBinding binding) {
            super(binding.getRoot());
            this.binding = binding;
        }
    }

}
