import pywhatkit as kit
text = input("your text:")
kit.text_to_handwriting(text,"handwriting.png",
                        (0,250,154))
