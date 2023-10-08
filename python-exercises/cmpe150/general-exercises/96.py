lets = ["a", "b", "c"]
print(lets[0], lets[1], lets[2], lets[-1], lets[-2], lets[-3])  # a b c c b a

# bir listenin -1. indisi sonuncu elemanına denk gelir

even_numbers = [i for i in range(10)]
for i in range(len(even_numbers)):
    print('i', i)
    if even_numbers[i] % 2 == 1:
        even_numbers.pop(i)
        print(even_numbers[i], ' is popped')
print(even_numbers)
