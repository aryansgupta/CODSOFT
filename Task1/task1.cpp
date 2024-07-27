#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Welcome to Number Guessing Game" << endl;
    cout << "You will have to guess a number between 1 to 100" << endl;

    srand(time(0));
    int num = (rand() % 100) + 1;
    cout << "You will have 5 chances to guess the correct number" << endl;
    int remainChance = 5;
    int inputPlayer;

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter the Number:" << endl;
        cin >> inputPlayer;

        if (inputPlayer == num)
        {
            cout << "Congratulations!! You will guess the correct number" << endl;
            break;
        }
        else
        {
            if (inputPlayer > num)
            {
                cout << "\nGuess smaller Number!" << endl;
            }
            else
            {
                cout << "\nGuess larger Number!" << endl;
            }
        }

        remainChance--;
        cout << "Remaining Chances: " << remainChance << endl;

        if (remainChance == 0)
        {
            cout << "Sorry, Your chance has been finished to guess the ramdom number" << endl;
            cout << "The ramdom number was: " << num << endl;
            cout << "Thanks for playing!!" << endl;
        }
    }
    return 0;
}