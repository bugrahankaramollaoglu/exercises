/* tıpkı list gibi, const türden bir collection yaratmak için
SetOf(), mutable için MutableSetOf() kullanıyoruz */

fun main() {
    val constNames = setOf("ahmet", "mehmet", "murat", "mehmet", "mehmet")

    val names: MutableSet<String> = mutableSetOf("ahmet", "mehmet", "murat", "mehmet", "mehmet")
    println(names) // [ahmet, mehmet, murat] -> sets can only have unique elements

    println("this set has ${names.count()} items.")

	println("ahmet" in names)

	names.add("ali")
	names.remove("ali")
}

// As sets are unordered, you can't access an item at a particular index.
