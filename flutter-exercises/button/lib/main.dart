import 'package:flutter/material.dart';

void main() {
  runApp(const ButtonApp());
}

class ButtonApp extends StatelessWidget {
  const ButtonApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      home: Scaffold(
        backgroundColor: Colors.deepPurple,
        appBar: AppBar(
          title: const Center(
            child: Text(
              "button exercise",
              style: TextStyle(fontSize: 20.0, color: Colors.deepPurple),
            ),
          ),
        ),
        floatingActionButton: Padding(
          padding: const EdgeInsets.all(25.0),
          child: FloatingActionButton(
            onPressed: () {
              debugPrint("floating buton clicked.");
            },
            child: const Icon(
              Icons.extension,
            ),
          ),
        ),
        body: Container(
          margin: EdgeInsets.symmetric(horizontal: 50),
          child: Column(
            children: <Widget>[
              const Center(
                child: Text(
                  "Buton türleri",
                  style: TextStyle(fontSize: 20, color: Colors.black),
                ),
              ),
              Padding(
                padding: const EdgeInsets.fromLTRB(0, 40, 0, 0),
                child: Column(
                  crossAxisAlignment: CrossAxisAlignment.stretch,
                  children: <Widget>[
                    ElevatedButton(
                      onPressed: () {
                        // Your onPressed logic goes here
                        debugPrint("elevated button clicked.");
                      },
                      child: const Text("elevated"),
                    ),
                    OutlinedButton(
                      onPressed: () {},
                      style: OutlinedButton.styleFrom(
                        side: const BorderSide(
                            color: Colors.white), // Border color
                        shape: RoundedRectangleBorder(
                          borderRadius: BorderRadius.circular(
                              10.0), // Adjust the value to change the curve
                        ),
                      ),
                      child: const Text(
                        'custom outlined button',
                        style: TextStyle(
                            fontWeight: FontWeight.bold, color: Colors.white),
                      ),
                    ),
                    IconButton(
                      icon: const Icon(
                        Icons.android,
                        color: Colors.white,
                        size: 50,
                      ),
                      onPressed: () {
                        debugPrint("icon button clicked.");
                      },
                    ),
                    TextButton(
                      onPressed: () {
                        debugPrint("text button clicked.");
                      },
                      child: const Text(
                        "Text Button",
                        style: TextStyle(fontSize: 24, color: Colors.white),
                      ),
                    ),
                  ],
                ),
              )
            ],
          ),
        ),
      ),
    );
  }
}
