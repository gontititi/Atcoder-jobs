#include <bits/stdc++.h>
using namespace std;

int main()
{

    int A, B, C, D;
    int work1 = 0;
    int work2 = 0;
    cin >> A >> B >> C >> D;

    if (C * D - B <= 0)
    {
        cout << -1 << endl;
    }
    else
    {
        work1 = A / (C * D - B);
        work2 = A % (C * D - B);

        if (work2 != 0)
        {
            work1 += 1;
        }

        cout << work1 << endl;
    }
}