#include<iostream>
#include<stdlib.h>

using namespace std;

//global variables
int difficulty = 2;
int maxDifficulty = 6;
int guessA, guessB, guessC;
int hp;

void start();
void playGame();

int main() {
    start();
    while(difficulty <= maxDifficulty)
    {
        playGame();
        cin.clear();//clears the failbit
        cin.ignore();//discards the buffer
        ++difficulty; 
    }
    cout<<"\n";
    cout<<"You succesfully hacked the bank";
    return 0;
}
//void to start/restart Game
void start()
{
    difficulty = 2;
    maxDifficulty = 2;
    vidas = 3;
    cout<<"Youre a secret Agent trying to hack the Mafias bank account, ";
    cout<<"go and  decifer each number of the codes!\n";
}
//void to execute the Game
void playGame()
{
    const int a = rand() % difficulty * difficulty;
    const int b = rand() % difficulty * difficulty;
    const int c = rand() % difficulty * difficulty;

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
            cout<<"Great! you guess the code!";
            break;
        }else
        {
            hp--;
            if(hp > 60){
                cout<<"Uff that wasnt the code, come on you still have "<< hp << " tries\n";
            }
        }
    } while (hp > 0);
}