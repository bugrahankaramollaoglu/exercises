package com.bugrahankaramollaoglu.listview2_java;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.TextView;

import java.util.ArrayList;

public class PersonAdapter extends BaseAdapter {
    ArrayList<String> personsList;
    Context context;

    public PersonAdapter(ArrayList<String> personsList, Context context) {
        this.personsList = personsList;
        this.context = context;
    }

    @Override
    public int getCount() {
        return personsList.size();
    }

    @Override
    public Object getItem(int i) {
        return personsList.get(i);
    }

    @Override
    public long getItemId(int i) {
        return i;
    }

    @Override
    public View getView(int i, View view, ViewGroup viewGroup) {
        if (view == null) {
            LayoutInflater layoutInflater = (LayoutInflater) context.getSystemService(Context.LAYOUT_INFLATER_SERVICE);
            view = layoutInflater.inflate(R.layout.list_row, viewGroup, false);
        }

        TextView textView = view.findViewById(R.id.listViewTextView);
        textView.setText(personsList.get(i));
        return view;
    }
}
