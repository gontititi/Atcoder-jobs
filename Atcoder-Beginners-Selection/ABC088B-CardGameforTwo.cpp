#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, out;
    cin >> n;
    int Alice = 0, Bob = 0;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }
    sort(vec.rbegin(), vec.rend());

    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            Alice += vec.at(j);
        }
        else
        {
            Bob += vec.at(j);
        }
    }
    out = Alice - Bob;
    cout << out << endl;
}