#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    vector<int> v(N + 1, -1);
    vector<bool> f(N + 1, false);

    int work = 1;
    int count = 0;

    for (int i = 1; i < N + 1; i++)
    {
        cin >> v.at(i);
    }

    while (f.at(work) == false || work != 2)
    {
        f.at(work) = true;
        work = v.at(work);
        count += 1;
    }

    if (work == 2)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}