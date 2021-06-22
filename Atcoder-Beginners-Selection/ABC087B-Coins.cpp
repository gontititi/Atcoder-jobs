#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int work = x;
    int count = 0;
    //cout << work << endl;
    for (int i = 0; i <= a; i++)
    {

        for (int j = 0; j <= b; j++)
        {
            for (int k = 0; k <= c; k++)
            {
                work = x - 500 * i - 100 * j - 50 * k;

                if (work == 0)
                {
                    count++;
                    // cout << "moziretu" << endl;
                    // cout << i << "_" << i * 500 << endl;
                    // cout << j << "_" << j * 100 << endl;
                    // cout << k << "_" << k * 50 << endl;
                    // cout << "moziretu" << endl;
                }
            }
        }
    }
    cout << count << endl;
}