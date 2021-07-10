#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int work;

    work = N * 1.08;
    if (work < 206)
    {
        cout << "Yay!" << endl;
    }
    else if (work == 206)
    {
        cout << "so-so" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }
}