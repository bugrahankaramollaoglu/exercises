def get_input_1():
	return 12, [4, 3, 1, 5, 3, 2, 9]


def save_solution_1(output):
	file = open(f"output_1.txt", "w")
	if len(output) > 0:
		for e in output:
			file.write(",".join([str(x) for x in e]) + "\n")
	file.close()


target, nums = get_input_1()





def get_all_subsets(input_list):
	all_subsets = [[]]
	for element in input_list:
		current_subsets = [subset + [element] for subset in all_subsets]
		all_subsets.extend(current_subsets)
	return [tuple(subset) for subset in all_subsets]


def find_sublists(target, nums):
	subs = []
	for i in range(len(nums)):
		pass




target = 12
nums = [4, 3, 1, 5, 3, 2, 9]
output = find_sublists(target, nums)



try:
	save_solution_1(output)
except:
	pass
