#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    string work;
    int out = 0;

    cin >> S;

    for (int i = 0; i < 4; i++)
    {
        work = S.at(i);
        if (work == "+")
        {
            out += 1;
        }
        else
        {
            out += -1;
        }
    }

    cout << out << endl;
}