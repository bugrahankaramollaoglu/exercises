def filter_numbers(numbers, n):
    results = []
    for number in numbers:
        if not number % n:
            results.append(number)
    return results


for i, v in enumerate(filter_numbers(range(0, 10), 4)):
    print(i, v)
