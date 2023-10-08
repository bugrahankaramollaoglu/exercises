""" Write a program to compute the frequency of the words from the input. The
output should output after sorting the key alphanumerically. """


inp = input().split()

freq = {}

for i in inp:
    # This part calculates the updated frequency
    # of the current word i. If the word is already
    # present in the freq dictionary, it retrieves its
    # current frequency using get() and adds 1 to it to
    # indicate that another occurrence of the word has been
    # found. If the word is not yet in the dictionary,
    # freq.get(i, 0) will return 0, and then we
    # add 1 to initialize its frequency to 1.
    freq[i] = freq.get(i, 0) + 1

for i, freq in freq.items():
    print(f"{i}: {freq}")
