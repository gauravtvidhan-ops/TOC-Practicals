// Experiment 1: DFA to accept strings containing three consecutive 1s
#include <iostream>
#include <string>
using namespace std;

bool check_111(string input)
{
    int state = 0;

    for (char c : input)
    {
        switch (state)
        {
        case 0:
            if (c == '1')
                state = 1;
            else
                state = 0;
            break;

        case 1:
            if (c == '1')
                state = 2;
            else
                state = 0;
            break;

        case 2:
            if (c == '1')
                state = 3;
            else
                state = 0;
            break;

        case 3:
            state = 3;
            break;
        }
    }

    return state == 3;
}

int main()
{
    cout << "Gaurav Tiwari" << endl;
    cout << "Enrollment No. : 0863CS241069" << endl;
    string input;
    cout << "Enter a binary string : ";
    cin >> input;

    if (check_111(input))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
