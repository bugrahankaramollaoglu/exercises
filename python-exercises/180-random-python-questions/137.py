""" how to sort a list of tuples first according to their 1st, 3rd, 2nd
parameters respectively """


def main():
    students = [
        ("John", 25, 85.5),
        ("Alice", 30, 78.9),
        ("Bob", 22, 92.0),
        ("Alice", 28, 95.0),
        ("John", 22, 89.2),
        ("Bob", 25, 80.5)
    ]

	# here is how
    sorted_students = sorted(students, key=lambda x: (x[0], x[2], x[1]))

    print("Sorted students:")
    for name, age, score in sorted_students:
        print(f"{name}, {age}, {score}")


if __name__ == "__main__":
    main()
