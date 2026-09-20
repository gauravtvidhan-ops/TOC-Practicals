// Experiment 6: Machine (PDA-style using stack) to count number of 1s and 0s
#include <iostream>
#include <string>
#include <stack>
using namespace std;

class count_0_1
{
public:
    stack<char> pda;

    void count_01(string input)
    {
        for (char c : input)
        {
            pda.push(c);
        }

        int count_0 = 0;
        int count_1 = 0;

        while (!pda.empty())
        {
            char point = pda.top();
            pda.pop();

            if (point == '0')
            {
                count_0++;
            }
            else
            {
                count_1++;
            }
        }

        cout << "Total 0 = " << count_0 << endl;
        cout << "Total 1 = " << count_1 << endl;
    }
};

int main()
{
    count_0_1 c1;

    cout << "Gaurav Tiwari" << endl;
    cout << "Enrollment No. : 0863CS241069" << endl;

    string input;

    cout << "Enter a binary string : ";
    cin >> input;

    c1.count_01(input);

    return 0;
}
