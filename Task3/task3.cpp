#include <iostream>
#include <vector>
using namespace std;

void userboardview(vector<string> arr)
{
    cout << endl;
    cout << " " << arr[1] << "  |  " << arr[2] << "  |  " << arr[3] << " " << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << arr[4] << "  |  " << arr[5] << "  |  " << arr[6] << " " << endl;
    cout << "____|____|____" << endl;
    cout << "    |    |    " << endl;
    cout << " " << arr[7] << "  |  " << arr[8] << "  |  " << arr[9] << " " << endl;
    cout << endl;
}

bool checkMove(int m, vector<string> arr)
{
    if (m <= 0 && m >= 10)
    {
        return false;
    }

    if (arr[m] == "X" || arr[m] == "O")
    {
        return false;
    }
    return true;
}

void validMove(int move, string s, vector<string> &arr)
{
    arr[move] = s;
}

string wincheck(string s, vector<string> arr)
{
    if ((arr[1] == s && arr[2] == s && arr[3] == s) || (arr[4] == s && arr[5] == s && arr[6] == s) || (arr[7] == s && arr[8] == s && arr[9] == s))
    {
        return s;
    }
    return "0";
}

int main()
{
    vector<string> arr(10);
    for (int i = 1; i < 10; i++)
    {
        arr[i] = to_string(i);
    }

    char game;
    cout << "Press any key to start the game or q to quit" << endl;
    cin >> game;

    while (game != 'q')
    {
        userboardview(arr);

        int x = 0, Player1 = 0, Player2 = 0;
        while (x < 10)
        {
            int move;
            cout << "Player 1 turn..." << endl;
            cout << "Enter move: " << endl;
            cin >> move;

            while (!checkMove(move, arr))
            {
                cout << "Wrong move, Player 1, Try Again..." << endl;
                cin >> move;
            }

            validMove(move, "X", arr);

            if (wincheck("X", arr) == "X")
            {
                Player1 = 1;
                break;
            }

            x += 1;
            if (x == 9)
            {
                break;
            }

            userboardview(arr);

            cout << "Player 2 turn..." << endl;
            cout << "Enter move: " << endl;
            cin >> move;

            while (!checkMove(move, arr))
            {
                cout << "Wrong move, Player 2, Try Again..." << endl;
                cin >> move;
            }

            validMove(move, "O", arr);

            if (wincheck("O", arr) == "O")
            {
                Player2 = 1;
                break;
            }

            x += 1;
            userboardview(arr);
        }

        userboardview(arr);
        if (Player1 == 1)
        {
            cout << "Player 1 won..." << endl;
        }
        else if (Player2 == 1)
        {
            cout << "Player 2 won..." << endl;
        }
        else
        {
            cout << "Game draw!!!" << endl;
        }

        for (int i = 1; i < 10; i++)
        {
            arr[i] = to_string(i);
        }

        cout << "Press any key to play again or q to Quit" << endl;
        cin >> game;
    }
    return 0;
}