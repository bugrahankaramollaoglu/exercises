fun main() {
    for (i in 1..10) println(i)

    val letters = listOf("a", "b", "c", "d")
    for (letter in letters) println(letter)

    for ((index, letter) in letters.withIndex()) {
        println("Index $index: $letter")
    }

    val ages = mapOf("ahmet" to 25, "mehmet" to 30, "ayse" to 35)
    for ((name, age) in ages) {
        println("$name is $age years old.")
    }
}
