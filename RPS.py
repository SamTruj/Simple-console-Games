#class to save the information of the computer and player
import random

class player:
    def __init__(self, wins, lost, choice):
        self.wins = wins
        self.lost = lost
        self.choice = choice
    def play(self):
        print(self.choice)
#p1 = player(0, 1, rock)
"""
    def play(player):
        print("Hello my name is " + abc.name)
"""
#n = random.randint(0,22)

computer = player(0, 0, 0)
player = player(0, 0, 0)
computer.play()

"""
def  computer(choice) as c:
    if c.choice(0):
        print("Rock")
    if c.choice(1):
        print("Paper")
    if c.choice(2):
        print("Scissors")

with switch(dia) as s:
	if s.case(1):
		print('lunes')
	if s.case(2):
		print('martes')
	if s.case(3):
		print('miércoles')
	if s.case(4):
		print('jueves')
	if s.case(5):
		print('viernes')
	if s.case(6):
		print('sábado')
	if s.case(7):
		print('domingo')
	if s.default():
		print('error')
    
    def computer(int){
    #if(compurer)
    print(" ___________      \n")
    print("|           |     compurer chooses...\n")
    print("|___________|         ROCK!!!\n")
    print("    |  |     \n")
"""