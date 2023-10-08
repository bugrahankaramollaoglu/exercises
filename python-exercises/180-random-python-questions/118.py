"""
Stacks are abstract data types that are commonly used
in almost all programming languages. A stack is a data structure that
simulates real-world stacks such as a deck of cards, a stack of plates, etc.
The stack is a data structure that looks like a list in Python where you can add and remove items.
There are a few important terms you will know when implementing stacks with any programming language:
    Removing an item from a stack is called popping.
    Inserting an item into a stack is called pushing.
Stacks follow the principle of Last-in-first-out data structures,
where the last item inserted is the first item out. It generally has five functions:
    is_empty: it returns True if the stacks are empty and return False if the stack is not empty.
    push: it inserts an item to the top of the stack.
    pop: it removes and returns the top item from the stack.
    peep: it returns the top item from the stack but it doesn’t remove it.
    size: it returns an integer that represents the number of items present in the stack.
Some of the applications where the stack data structure is used are:
    language analysis without context
    evaluation of arithmetic expressions
    management of function calls
    traversal of trees and graph algorithms
"""

# Here’s how you can implement a stack data structure using Python:
class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        l = len(self.items) - 1
        return self.items[l]

    def size(self):
        return len(self.items)


# Now let’s add some items into the stacks and initialize some functions of a stack using Python:
stack = Stack()
print(stack.is_empty())

for i in range(0, 10):
    stack.push(i)

print(stack.size())
print(stack.items)
