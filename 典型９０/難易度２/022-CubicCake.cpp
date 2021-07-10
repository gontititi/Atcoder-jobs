#include <bits/stdc++.h>
using namespace std;

long A, B, C;
long side;
long cut;

int main()
{
    cin >> A >> B >> C;

    //ユークリッドの互助ほうを用いて最小の辺の長さを求める
    side = gcd(gcd(A, B), C);

    //切る回数
    cut = (A / side - 1) + (B / side - 1) + (C / side - 1);
    cout << cut << endl;
}
