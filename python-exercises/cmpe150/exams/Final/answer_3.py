class Node:
    def __init__(self, value, left = None, right = None):
        self.value = value
        self.left = left
        self.right = right

def get_input_3():
    import random
    random.seed(10)
    root = Node(random.randint(1, 10))
    queue = [root]
    counter = 0
    while len(queue) > 0:
        counter += 1
        node = queue.pop(0)
        left_p = random.random()
        random.seed(left_p)
        if left_p > 0.6:
            node.left = Node(random.randint(1, 10))
            queue.append(node.left)
        right_p = random.random()
        random.seed(right_p)
        if right_p > 0.6:
            node.right = Node(random.randint(1, 10))
            queue.append(node.right)
    return root

def save_solution_3(output):
    file = open(f"output_3.txt", "w")
    file.write(str(output))
    file.close()

root = get_input_3()

#Your Code Here

#End of Your Code

try:
    save_solution_3(output)
except:
    pass
