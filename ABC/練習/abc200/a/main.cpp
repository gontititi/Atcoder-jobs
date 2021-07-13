#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    bool check = false;
    int out = 0;

    for (int i = 1; i <= N; i++)
    {
        cout << i << endl;

        if ((i - 1) * 100 <= N && N < i * 100)
        {
            cout << i << endl;
            break;
        }
    }
}