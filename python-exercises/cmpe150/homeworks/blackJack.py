import random

def generate_deck(_suits, _cards):
	random.seed(0)
	n = 0
	deck = [(i, j) for i in _suits for j in _cards]
	random.shuffle(deck)
	while True:
		yield deck[n]
		n += 1
		if n == 52:
			random.shuffle(deck)
			n = 0

suits = ["Spades", "Hearts", "Clubs", "Diamonds"]
cards = ['A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K']
shuffled_deck = generate_deck(suits, cards)


def get_next_card():
	return next(shuffled_deck)


# DO NOT EDIT ABOVE THIS LINE
# BELOW THIS LINE WILL BE YOUR SOLUTION

"""
purpose of the game is to get as close to 21 as possible without going over

every time sage wins, he takes 50 golds from king
every time king wins, he takes 50 golds from sage

hearts, spades, clubs, diamonds
spades and clubs are black-colored
heart and diamonds are red-colored

"""

# bu fonksiyon kartın değerini hesaplar
def valueCalc(tup):
	if tup[1] in ['A', 'J', 'Q']:
		return 10
	elif tup[1] == 'K':
		if tup[0] == 'Spades' or tup[0] == 'Clubs': # blacks
			return 11
		elif tup[0] == 'Hearts' or tup[0] == 'Diamonds': # reds
			return 1
	else:
		return int(tup[1])

sageMoney = int(input('Sage\'s money:\n'))
numGames = int(input('Number of games:\n'))

sageVal = 0
kingVal = 0
kingFirstVal = 0

sageCards = []
kingCards = []

i = 1


def sage():
	global sageCards, kingCards, sageVal, kingVal, sageMoney, kingFirstVal
	if sageVal == 21:
		print('It is Blackking! You won!')
		sageMoney += 50
	elif sageVal > 21:
		print('You busted! You lost!')
		sageMoney -= 50
	elif sageVal < 21:
		reply = input('Do you want to hit or stand? [H/S]\n')
		if reply == 'H':
			sageCards += [get_next_card()]
			sageVal += valueCalc(sageCards[-1])
			print(f'Sage\'s cards: {"".join(str(i) for i in sageCards)}')
			print(f'Total value: {sageVal}')
			if sageVal == 21:
				king()
			elif sageVal > 21:
				print('You busted! You lost!')
				sageMoney -= 50
			elif sageVal < 21:
				sage()
		elif reply == 'S':
			king()

def king():
	global sageCards, kingCards, sageVal, kingVal, sageMoney
	print(f'King\'s cards: {"".join(str(i) for i in kingCards)}')
	if (len(kingCards) == 2):
		kingVal += valueCalc(kingCards[0]) + valueCalc(kingCards[1])
	print(f'Total value: {kingVal}')
	if (kingVal > 21):
		print('King busted! You won!')
		sageMoney += 50
	elif (kingVal >= 17):
		if (kingVal > sageVal):
			print('King has higher value. You lost!')
			sageMoney -= 50
		elif (kingVal == sageVal):
			print('It is a tie!')
		elif (kingVal < sageVal):
			print('You have higher value. You won!')
			sageMoney += 50
	elif (kingVal < 17):
		kingCards += [get_next_card()]
		kingVal += valueCalc(kingCards[-1])
		king()

while (i <= numGames):
	# GAME[i] STARTS
	print(f'Game {i}')
	# get cards for sage
	sageCards += [get_next_card()]
	sageCards += [get_next_card()]
	# get cards for king
	kingCards += [get_next_card()]
	kingCards += [get_next_card()]
	# calculate values
	sageVal += valueCalc(sageCards[0]) + valueCalc(sageCards[1])
	kingFirstVal += valueCalc(kingCards[1])
	# print cards and values
	print(f'King\'s cards: (*){kingCards[1]}')
	print(f'Total value: {kingFirstVal}')
	print(f'Sage\'s cards: {"".join(str(i) for i in sageCards)}')
	print(f'Total value: {sageVal}')
	# game
	sage()
	# sıfırla
	sageVal = 0
	kingVal = 0
	kingFirstVal = 0
	sageCards = []
	kingCards = []
	# incrementation
	i += 1

print(f'Final money is {sageMoney}')
