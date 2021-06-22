#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int y;
    int work_n, work_y;
    int a = -1, b = -1, c = -1;

    cin >> n >> y;
    for (int i = n; i >= 0; i--)
    {
        for (int j = n - i; j >= 0; j--)
        {
            // cout << "10000円札枚数:" << i << endl;
            // cout << "5000円札枚数:" << j << endl;
            // cout << "1000円札枚数:" << n - i - j << endl;
            // cout << "合計金額:" << 10000 * i + 5000 * j + 1000 * (n - i - j) << endl;
            work_y = y - 10000 * i - 5000 * j - 1000 * (n - i - j);
            if (work_y == 0)
            {
                a = i;
                b = j;
                c = n - i - j;
                break;
            }
        }
        if (work_y == 0)
        {
            break;
        }
    }
    cout << a << " ";
    cout << b << " " << c << endl;
    ;
}