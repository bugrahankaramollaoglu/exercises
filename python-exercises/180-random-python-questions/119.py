import random, sys

# sayaç
wins = 0
losses = 0
ties = 0

# main game loop
while True:
    print('%s Wins, %s Losses, %s Ties' % (wins, losses, ties))
    # player input loop
    while True:
        print("Enter your move: (r)ock (p)aper (s)cissors or (q)uit")
        playerMove = input()
        if playerMove == "q":
            # exits from the system
            sys.exit()
        if playerMove == "r" or playerMove == "p" or playerMove == "s":
            break
        print("type one of r, p, s or q.")

    # display what player chose
    if playerMove == "r":
        print("Rock versus...")
    elif playerMove == "p":
        print("Paper versus...")
    elif playerMove == "s":
        print("Scissors versus...")

    # display what computer chose
    randomNumber = random.randint(1,3)
    if randomNumber == 1:
        computerMove = "r"
        print("Rock")
    elif randomNumber == 2:
        computerMove = "p"
        print("Paper")
    elif randomNumber == 3:
        computerMove = "s"
        print("Scissors")

    # display record win/loss/tie
    if playerMove == computerMove:
        print("It's a Tie!")
        ties += 1
    elif playerMove == "r" and computerMove == "s":
        print("player win!")
        wins += 1
    elif playerMove == "r" and computerMove == "p":
        print("computer win!")
        losses += 1
    elif playerMove == "s" and computerMove == "r":
        print("computer win!")
        losses += 1
    elif playerMove == "s" and computerMove == "p":
        print("player win!")
        wins += 1
    elif playerMove == "p" and computerMove == "r":
        print("player win!")
        wins += 1
    elif playerMove == "p" and computerMove == "s":
        print("computer win!")
        losses += 1







