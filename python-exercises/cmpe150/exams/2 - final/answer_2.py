class Node:
    def __init__(self, val, next = None):
        self.value = val
        self.next = next
def get_input_2():
    import random
    random.seed(42)
    size = random.randint(4, 10)
    last = Node(random.randint(0, 20))
    for i in range(size):
        new_node = Node(random.randint(0, 20), last)
        last, new_node = new_node, last
    return last

def save_solution_2(output):
    file = open(f"output_2.txt", "w")
    file.write(str(output))
    file.close()

start = get_input_2()

#Your Code Here


#End of Your Code

save_solution_2(output)
