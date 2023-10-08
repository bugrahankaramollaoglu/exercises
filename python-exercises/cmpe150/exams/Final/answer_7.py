def get_input_7():
    special_chars = "!@#$%^&*()-+"
    return "4eVer&2eTHer"
    #return "1fdaaB+r"
    #return "1fdaB+r"

def save_solution_7(output):
    file = open(f"output_7.txt", "w")
    file.write(str(output))
    file.close()

password = get_input_7()

#Your Code Here

#End of Your Code
try:
    save_solution_7(output)
except:
    pass
