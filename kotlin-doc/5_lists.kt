/* collections in kotlin are
lists, sets and maps.
each can be either mutable or non-mutable. */

/* to create a constant list, use -> listOf() */
/* to create a mutable list, use -> mutableListOf() */

fun main() {
	// normalde verdigin elemanlardan kotlin <dataType> cıkarır ama
	// explicitly göstermek istiyorsan ekleyebilirsin
    val names: MutableList<String> = mutableListOf("ayse", "eda", "irem")

    println("first name is: ${names[0]}")

    println("first name is: ${names.first()}")

    println("last name is: ${names.last()}")

    println("list has: ${names.count()} items. ")

    if ("meltem" !in names) {
        println("meltem listede yok.")
    } else {
        println("var")
    }

    // add from the back
    names.add("merve")

    // add from the index
    names.add(0, "pınar")

    // removes the first occurence of ayse
    names.remove("ayse")

    println(names)
}
