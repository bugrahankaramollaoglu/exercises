package com.bugrahankaramollaoglu.fragment_java;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

public class FirstFragment extends Fragment {

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {


        ViewGroup viewGroup = (ViewGroup) inflater.inflate(R.layout.fragment_first, container, false);
        // fragment1'deki text view'a viewGroup üzerinden erişirsen üzerinde oynayabilirsin
        TextView textView = viewGroup.findViewById(R.id.textView);
        textView.setText("new first fragment text");

        return viewGroup;
    }

//    onCreateView() içerisinde ViewGroup yaratmak yerine onViewCreated() yaratip içerisinde
//    direkt view üzerinden de işlemler yapabilirdik
//
//    @Override
//    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
//        super.onViewCreated(view, savedInstanceState);
//
//        TextView textView = view.findViewById(R.id.textView);
//        textView.setText("new new first fragment text");
//    }
}
