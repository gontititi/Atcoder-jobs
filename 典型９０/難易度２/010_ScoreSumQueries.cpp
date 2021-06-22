#include <bits/stdc++.h>
using namespace std;

//値定義
int N;
int C[100010], P[100010];

int Q;
int L[100010], R[100010];

int S1[100010];
int S2[100010];

int main()
{
    //標準入力
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> C[i] >> P[i];
    }

    cin >> Q;
    for (int j = 1; j <= Q; j++)
    {
        cin >> L[j] >> R[j];
    }

    //累積和とる
    for (int i = 1; i <= N; i++)
    {
        S1[i] = S1[i - 1];
        S2[i] = S2[i - 1];
        if (C[i] == 1)
        {
            S1[i] += P[i];
        }
        else
        {
            S2[i] += P[i];
        }
    }

    //累積和を利用して出力
    for (int i = 1; i <= Q; i++)
    {
        cout << (S1[R[i]] - S1[L[i] - 1]) << " " << (S2[R[i]] - S2[L[i] - 1]) << endl;
    }
}