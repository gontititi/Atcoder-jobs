#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int work = 0;
    int count = 0;
    int sum = 0;

    while (N > sum)
    {
        count += 1;

        sum = count * (count + 1) / 2;
    }

    cout << count << endl;
}