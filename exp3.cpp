// Experiment 3: Mod 3 machine (DFA)
#include <iostream>
#include <string>
using namespace std;

bool mod_3(string input)
{
    int state = 0; // State represents remainder: 0, 1, or 2

    for (char c : input)
    {
        switch (state)
        {
        case 0:
            if (c == '0')
                state = 0;
            else
                state = 1;
            break;

        case 1:
            if (c == '0')
                state = 2;
            else
                state = 0;
            break;

        case 2:
            if (c == '0')
                state = 1;
            else
                state = 2;
            break;
        }
    }

    return state == 0;
}

int main()
{
    cout << "Gaurav Tiwari" << endl;
    cout << "Enrollment No. : 0863CS241069" << endl;

    string input;

    cout << "Enter a binary string : ";
    cin >> input;

    if (mod_3(input))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
