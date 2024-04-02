#include <iostream>
using namespace std;
int main()
{
    string input;
    int map[2][8],row = 1;
    cin >> input;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            map[i][j] = 0;
        }
    }
    map[1][0] = 1;
    try
    {
        for (int i = 0; i < 7; i++)
        {   
            switch (input[i])
            {
            case 'L':
                map[row - 1][i + 1] = 1;
                row -= 1;
                break;
            case 'F':
                map[row][i + 1] = 1;
                break;
            case 'R':
                map[row + 1][i + 1] = 1;
                row += 1;
                break;
            default:
                break;
            }
        }
        if (row < 0 || row > 1)
        {
            throw new exception;
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << map[i][j];
            }
            cout << endl;
        }
    }
    catch (...)
    {
        cout << "DEATH";
    }
    return 0;
}
