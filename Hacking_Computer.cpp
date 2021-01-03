#include<iostream>
#include<stdlib.h>
#include <conio.h>
#include <ctime>

using namespace std;

//global variables
int difficulty = 2;
int maxDifficulty = 4;
int guessA, guessB, guessC;
int hp;
string response;

void start();
void playGame();

int main() {
    start();
    while(difficulty <= maxDifficulty)
    {
        playGame();
        cin.clear();//clears the failbit
        cin.ignore();//discards the buffer  
    }
    cout<<"\nGame Over\n";
    getch();
    return 0;
}
//void to start/restart Game
void start()
{
    difficulty = 1;
    maxDifficulty = 3;
    hp = 3;
    cout<<"---------------------------------------------------------------------------------------------------------\n";
    cout<<"Youre a secret Agent trying to hack the Mafias bank account, ";
    cout<<"go and  decifer each code!\n";
}
//void to execute the Game
void playGame()
{
    srand(time(NULL));
    const int a = rand() % difficulty + difficulty;
    srand(time(NULL));
    const int b = rand() % difficulty + difficulty;
    srand(time(NULL));
    const int c = rand() % difficulty + difficulty;

    const int sum = a + b + c;
    const int mult = a * b * c;
    do
    {
        cout<<"- There are three numbers in the code\n";
        cout<<"- The numbres multiply to give "<<mult<<"\n";
        cout<<"- And the numbers add-up to "<<sum<<"\n";
        cout<<"Enter the three numbres separated by a blank space: \n";//cin will save each value separates by a blank space in each variable

        cin>>guessA;
        cin>>guessB;
        cin>>guessC;
        int guessSum = guessA + guessB + guessC;
        int guessMult = guessA * guessB * guessC;

        if(guessSum == sum && guessMult == mult)
        {
            difficulty++;
            if (difficulty > maxDifficulty)
            {
                cout<<"You did it agent! You robbed all the Mafias money!\n";
                cout<<"Now come back to the headquarters\n";
            }else
            {
                cout<<"Great! you guess the code! But you still have work to do!\n";
            }
            break;
        }else
        {
            hp--;
            if(hp > 0){
                cout<<"Uff that wasnt the code, come on you still have "<< hp << " tries\n";
            }else
            {
                cout<<"You got trapped by the Mafia Bosses, ";
                cout<<"do you want to try again yes/no?\n";
                cin>>response;
                if (response == "yes")
                {
                    start();
                    break;
                }else{
                    difficulty = maxDifficulty + 1;
                }
            }
        }
    } while (hp > 0);
}