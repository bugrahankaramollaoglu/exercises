import 'package:dices/DiceRoller.dart';
import 'package:flutter/material.dart';

class HomeScreen extends StatelessWidget {
  const HomeScreen(this.color1, this.color2, {super.key});

  // it is a named-constructor named purple
  const HomeScreen.purple({super.key})
      : color1 = Colors.brown,
        color2 = Colors.deepOrange;

  final Color color1;
  final Color color2;

  @override
  Widget build(context) {
    return Container(
      decoration: BoxDecoration(
        gradient: LinearGradient(
          colors: [color1, color2],
          begin: Alignment.topLeft,
          end: Alignment.bottomRight,
        ),
      ),
      child: const Center(
        child: DiceRoller(),
      ),
    );
  }
}
