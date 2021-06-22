#include <bits/stdc++.h>
using namespace std;

string check(int timediff, int distancediff)
{
    //判定
    //時間差が偶数なら機数距離進めない
    if (timediff % 2 == 0 && distancediff % 2 != 0)
    {
        //終了
        return "No";
    }
    //時間差が奇数なら偶数距離進めない
    if (timediff % 2 != 0 && distancediff % 2 == 0)
    {
        //終了
        return "No";
    }

    //時間差より距離の方が大きい場合進めない
    if (timediff < distancediff)
    {
        //終了
        return "No";
    }
    return "Yes";
}

int main()
{
    int n;
    int t, x, y;
    int distancediff;
    int timediff;
    string out = "Yes";

    vector<tuple<int, int, int>> a;
    cin >> n;

    //初期位置
    a.push_back(make_tuple(0, 0, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> t >> x >> y;
        a.push_back(make_tuple(t, x, y));
    }
    for (int j = 0; j <= n - 1; j++)
    {
        //次の目的地までの移動距離差
        distancediff = abs(get<1>(a.at(j + 1)) - get<1>(a.at(j))) + abs(get<2>(a.at(j + 1)) - get<2>(a.at(j)));
        //次の目的地までの時間差
        timediff = get<0>(a.at(j + 1)) - get<0>(a.at(j));

        out = check(timediff, distancediff);

        if (out == "No")
        {
            break;
        }
    }
    cout << out << endl;
}