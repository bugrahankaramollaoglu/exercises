// ignore_for_file: prefer_const_constructors

import 'package:dices/HomeScreen.dart';
import 'package:flutter/material.dart';

void main() {
  runApp(
    const MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        // body: HomeScreen.purple()
        body: HomeScreen(Colors.pink,Colors.green)

      ),
    ),
  );
}
