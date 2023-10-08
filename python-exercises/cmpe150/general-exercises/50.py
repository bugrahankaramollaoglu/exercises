def isListPalindrome(n):
    return n == n[::-1]

a = isListPalindrome([1, 2, 3, 3, 2, 1])
print(a)
