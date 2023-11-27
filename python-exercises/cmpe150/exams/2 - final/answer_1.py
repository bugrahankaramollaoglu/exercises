def get_input_1():
    return 12, [4, 3, 1, 5, 3, 2, 9]


def save_solution_1(output):
    file = open(f"output_1.txt", "w")
    if len(output) > 0:
        for e in output:
            file.write(",".join([str(x) for x in e]) + "\n")
    file.close()


target, nums = get_input_1()


# Your Code Here
def find_sublists(target, nums):
    def backtrack(start, curr_sum, curr_list):
        if curr_sum == target:
            result.append(curr_list[:])
            return
        elif curr_sum > target:
            return

        for i in range(start, len(nums)):
            num = nums[i]
            curr_list.append(num)
            backtrack(i + 1, curr_sum + num, curr_list)
            curr_list.pop()

    result = []
    backtrack(0, 0, [])
    return result


a = find_sublists(12, [4, 3, 1, 5, 3, 2, 9])
print(a)

# Example usage
target = 10
nums = [1, 2, 3, 4, 5]
output = find_sublists(target, nums)

# End of Your Code

try:
    save_solution_1(output)
except:
    pass
