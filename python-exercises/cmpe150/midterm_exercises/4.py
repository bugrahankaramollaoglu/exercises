# Write a Python program that takes a string as input and
# returns the length of the longest substring that contains
# no repeating characters. For example, if the input
# string is "abcabcbb", the output should be 3 (which is
# the length of the substring "abc").

def longest_nonrepeating_substring(s):
    n = len(s)
    max_len = 0
    start = 0
    char_dict = {}

    for end in range(n):
        if s[end] in char_dict:
            start = max(start, char_dict[s[end]] + 1)
        char_dict[s[end]] = end
        max_len = max(max_len, end - start + 1)
    return max_len


print(longest_nonrepeating_substring("abcabcbbst"))
