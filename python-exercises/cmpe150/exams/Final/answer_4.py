def get_input_4():
    roman_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    return "LXVIII"

def save_solution_4(output):
    file = open(f"output_4.txt", "w")
    file.write(str(output))
    file.close()

roman = get_input_4()
#Your Code Here

#End of Your Code
try:
    save_solution_4(output)
except:
    pass
