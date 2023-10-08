""" we'll create a basic quiz game, not like a classical quiz game wherein
user chooses two buttons false or true but answers by typing the answer, according to
which program will print correct or wrong answer
"""


# creating a function that'll hold 2 arguments: guess and answer
def checkAnswer(guess, answer):
    # we want score var to be extant in everywhere, thus name it global
    global score

    # a flag for to determine if user has any rights left
    still_guessing = True

    # a counter to hold the number of attempts
    attempt = 0

    # ikisi de 3'ten küçükse
    while still_guessing and attempt < 3:

        # kullanıcının tahmini ile cevap aynı ise
        if guess.lower() == answer.lower():
            print("correct answer!")
            score += 1

            # bayrağı False'a çevirerek bildiğimiz soruyu tekrar sormasına engel oluyoruz
            still_guessing = False

        # eğer answer ile guess aynı değilse
        else:

            # 2- kere denemişse en az 1 hakkı var demektir o yüzden tekrar deneme şansı veriyoruz
            if attempt < 2:
                guess = input("Sorry wrong answer, try again:")
            attempt += 1

    # 3 kere denemişse hakkı kalmamış demektir
    if attempt == 3:
        print("sorry, you are out of your attempts. Correct answer is ", answer)


# 0 skorla başlıyoruz
score = 0

print("** here begins the quiz. You have 3 attempts **")
guess1 = input("which animal is the tallest on earth?:")
checkAnswer(guess1, "giraffe")
guess2 = input("which animal is biggest on sea? blue ...:")
checkAnswer(guess2, "whale")
guess3 = input("which animal is known for its eager for ocaliptus leaves?:")
checkAnswer(guess3, "koala")

# finalde de puanını yazdırıyoruz
print("Congratulations! Your score is " + str(score))
