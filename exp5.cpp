// Experiment 5: Machine to accept strings with equal number of 1s and 0s
#include <iostream>
#include <string>
using namespace std;

bool equal01(string input)
{
    int count0 = 0;
    int count1 = 0;

    for (char c : input)
    {
        if (c == '0')
            count0++;
        else if (c == '1')
            count1++;
    }

    return count0 == count1;
}

int main()
{
    cout << "Gaurav Tiwari" << endl;
    cout << "Enrollment No. : 0863CS241069" << endl;

    string input;

    cout << "Enter a binary string : ";
    cin >> input;

    if (equal01(input))
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}
