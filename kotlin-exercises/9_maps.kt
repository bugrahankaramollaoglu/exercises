/* aynı şekilde, const için MapOf(), mutable için mutableMapOf() */

fun main() {
    // val namesAgesConst = mapOf(1 to 100, 2 to 200)

    val namesAges: MutableMap<String, Int> = mutableMapOf("ahmet" to 12, "mehmet" to 23)

    println("first person is: ${namesAges["ahmet"]} years old.")

    println("there are ${namesAges.count()} key-value pairs.")

    namesAges.put("ali", 42)
    namesAges.remove("ali")

    println(namesAges.containsKey("bugra"))

    println(namesAges)
    println(namesAges.keys)
    println(namesAges.values)
}
