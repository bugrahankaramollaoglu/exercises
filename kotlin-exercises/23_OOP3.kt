/* data classes
Kotlin has data classes which are particularly useful for
storing data. Data classes have the same functionality as
classes, but they come automatically with
additional member functions. These member functions allow
you to easily print the instance to readable output, compare
instances of a class, copy instances, and more. */

data class User(val name: String = "def", val id: Int = 0) {}

fun main() {
    val user = User()
    println(user) // data class olmasaydı User@36baf30c yazdırırdı
}

/* data classla beraber toString(), copy() ve == metotları gelir.  */
