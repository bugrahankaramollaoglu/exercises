package com.example.sqlite_java;

import android.content.Intent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.recyclerview.widget.RecyclerView;

import com.example.sqlite_java.databinding.RecyclerRowBinding;

import java.util.ArrayList;

public class PersonAdapter extends RecyclerView.Adapter<PersonAdapter.PersonHolder> {

    ArrayList<Person> personList;

    public PersonAdapter(ArrayList<Person> personList) {
        this.personList = personList;
    }

    @NonNull
    @Override
    public PersonHolder onCreateViewHolder(@NonNull ViewGroup parent, int viewType) {
        RecyclerRowBinding binding = RecyclerRowBinding.inflate(LayoutInflater.from(parent.getContext()), parent, false);
        return new PersonHolder(binding);
    }

    @Override
    public void onBindViewHolder(@NonNull PersonHolder holder, int position) {
        holder.binding.recyclerViewTextView.setText(personList.get(position).name);

        holder.itemView.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(holder.itemView.getContext(), UploadActivity.class);
                intent.putExtra("name", personList.get(holder.getAdapterPosition()).name);
                intent.putExtra("info", "old_log");
                holder.itemView.getContext().startActivity(intent);
            }
        });
    }

    @Override
    public int getItemCount() {

        return personList.size();
    }

    public class PersonHolder extends RecyclerView.ViewHolder {

        private RecyclerRowBinding binding;

        public PersonHolder(RecyclerRowBinding binding) {
            super(binding.getRoot());
            this.binding = binding;
        }
    }
}
