# Write a Python program that takes a list of
# integers as input and returns the sum of the
# largest contiguous subarray. For example, if
# the input list is [-2, 1, -3, 4, -1, 2, 1, -5, 4],
# the output should be 6 (which is the sum of the
# subarray [4, -1, 2, 1]).

# this is called Kadane's algorithm
def max_subarray_sum(nums):
    max_sum = float('-inf')  # bu sayi min float'tır. minimumlugu garantiler
    current_sum = 0
    for num in nums:
        current_sum += num
        max_sum = max(max_sum, current_sum)
        if current_sum < 0:
            current_sum = 0
    return max_sum


