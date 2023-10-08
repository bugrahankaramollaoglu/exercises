#  Write a Python program that takes a list of integers
# as input and returns the maximum sum of any non-adjacent
# elements. For example, if the input list is [2, 4, 6, 2, 5],
# the output should be 13 (which is the sum of 2, 6, and 5).

def max_sum_non_adjacent(arr):
    n = len(arr)
    if n == 0:
        return 0
    elif n == 1:
        return arr[0]
    elif n == 2:
        return max(arr[0], arr[1])
    else:
        # dp[i] stores the maximum sum of any non-adjacent elements
        # up to index i in the input list.
        dp = [0] * n
        dp[0] = arr[0]
        dp[1] = max(arr[0], arr[1])
        for i in range(2, n):
            dp[i] = max(dp[i-1], dp[i-2] + arr[i])
        return dp[n-1]


print(max_sum_non_adjacent([2, 4, 6, 2, 5]))
