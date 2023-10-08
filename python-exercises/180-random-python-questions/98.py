"""matrix with choices"""

name = str(input("Enter Your Name: "))

print(f"welcome Mr.{name}. This is a most-basic game played with choices. You start as Neo in his office...")
print("You stayed late working and suddenly you saw two men in black looking for you.. Now you have two options:")
print("1.Go meet them. 2.Climb to the window")

user = int(input("Choose 1 or 2: "))

if user == 1:
    print(f"They say Mr. {name.capitalize()}, you have to come with us...")
    print("1.Obey. 2.Resist.")

    user2 = int(input("Choose 1 or 2: "))

    if user2 == 1:
        print("they take you to a car and knock you out on the way. You wake up next morning in a different body")
        print("remembering nothing... This is your new life. END")
    elif user2 == 2:
        print("You refuse to go but they easily capture you. When security tries to intervene, guns explode...")
        print("You die in the turmoil with a bullet in your temple.")
        print("Agents take your body and vanish into thin air. END")
        
elif user == 2:
    print("you climb to the window without anyone noticing..")
    print("You are outside the building now.. At the 56th floor with the city beneath your feet.")
    print("You can still hear them asking your name. When your colleagues say you were just there, agents get suspicious")
    print("Since you are not apanaged, you fall in your second attempt.. Death by fall-off. Only thing that remains from")
    print("You now is parts of your intestine in the sewer. END")
else:
    print("Please Check your input")