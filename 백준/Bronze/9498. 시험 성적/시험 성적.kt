fun main() {
    val num = readLine()!!.toInt()
    if (num <= 100 && num >= 90) print("A")
    else if (num >= 80) print("B")
    else if (num >= 70) print("C")
    else if (num >= 60) print("D")
    else print("F")
}