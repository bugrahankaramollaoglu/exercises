def get_input_5():
    return "example@example.com"
    #return "example@.com"
    #return "example@com"

def save_solution_5(output):
    file = open(f"output_5.txt", "w")
    file.write(str(output))
    file.close()


email = get_input_5()

#Your Code Here

#End of Your Code

try:
    save_solution_5(output)
except:
    pass
