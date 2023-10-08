"""remove punctuations from a sentence"""

"""
1) define all punctuations
2) write a sentence
3) remove punctuation from the sentence
4) finally print the stripped sentence
"""

punctuations = '''!()-[]{};:'"\,<>./?@#$%^&*_~'''  # 1

my_str = "Hello!!!, he said ---and went."  # 2

no_punct = ""
for char in my_str:
   if char not in punctuations:
       no_punct = no_punct + char  # 3

print(no_punct)  # 4