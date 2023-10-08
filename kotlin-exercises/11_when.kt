// it is like switch case

fun aa() {
    val name = "bugra"
    when (name) {
        "42" -> println("42 eşit")
        "ahmet" -> println("ahmet eşit")
        else -> println("bugra eşit")
    }
}

// when'in sonucunu bir değişkende de tutabilirsin

fun bb() {
    val name = "bugra"
    var result =
            when (name) {
                "42" -> "42"
                "ahmet" -> "ahmet"
                else -> "bugra"
            }

    println(result)
}

fun main() {
    aa()
    bb()
}
