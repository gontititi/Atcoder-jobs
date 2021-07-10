#include <bits/stdc++.h>
using namespace std;

long N, K;
int A[1010];
int B[1010];
int sum = 0;

int main()
{
    //入力
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int j = 0; j < N; j++)
    {
        cin >> B[j];
    }

    //A[i]とB[i]の差の絶対値をとる。足す。Kより小さく。Kとの差が偶数ならOKな気がする
    for (int i = 0; i < N; i++)
    {
        sum += abs(A[i] - B[i]);
    }
    if (sum <= K && (K - sum) % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}