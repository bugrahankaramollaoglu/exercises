class Node:
    def __init__(self, val, next=None):
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

# Your Code Here


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self) -> None:
        self.head = None

    def addNode(self, newData):
        newNode = Node(newData)
        if not self.head:
            self.head = newNode
            return
        current = self.head
        while current.next:
            current = current.next
        current.next = newNode

    def printList(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("NULL")


myList = LinkedList()
myList.addNode(10)
myList.addNode(20)
myList.addNode(30)
myList.addNode(40)
myList.addNode(50)
myList.printList()


# End of Your Code

# save_solution_2(output)
