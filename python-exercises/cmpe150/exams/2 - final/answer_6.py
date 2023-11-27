def get_input_6():
    import random
    random.seed(42)
    people = []
    size = random.randint(5, 20)
    for i in range(size):
        people.append((random.randint(140, 220), random.randint(40, 150)))
        random.seed(people[-1][0])
    return people

def save_solution_6(output):
    file = open(f"output_6.txt", "w")
    if len(output) > 0:
        for e in output:
            file.write(",".join([str(x) for x in e]) + "\n")
    file.close()

people = get_input_6()

#Your Code Here

#End of Your Code

try:
    save_solution_6(output)
except:
    pass
