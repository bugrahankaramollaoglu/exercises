package com.bugrahankaramollaoglu.fragment_java;

import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

public class SecondFragment extends Fragment {
    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {

        ViewGroup viewGroup = (ViewGroup) inflater.inflate(R.layout.fragment_second, container, false);
        // fragment1'deki text view'a viewGroup üzerinden erişirsen üzerinde oynayabilirsin
        TextView textView2 = viewGroup.findViewById(R.id.textView2);
        textView2.setText("new second fragment text");

        return viewGroup;
    }
}
