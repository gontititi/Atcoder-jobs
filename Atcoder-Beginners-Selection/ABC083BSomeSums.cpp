#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    if (n < 10)
        return n;
    return digit_sum(n / 10) + n % 10;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    int work = 0;

    for (int i = 0; i <= n; i++)
    {
        work = digit_sum(i);
        if (work >= a && work <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}