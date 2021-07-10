#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    const long long INF = 1LL << 60;
    long long max = -1;

    vector<long long> array(N);
    vector<long long> q(Q);

    for (int i = 0; i < N; i++)
    {
        cin >> array.at(i);
    }

    for (int j = 0; j < Q; j++)
    {
        cin >> q.at(j);
        if (max < q.at(j))
        {
            max = q.at(j);
        }
    }

    vector<int> answer(max, -1);
    answer.at(0) = 0;

    //計算
    for (int i = 1; i <= max; i++)
    {
        if (answer.at(i) == -1)
        {
            answer.at(i) = answer.at(i - 1) + 1;

            for (int j = 0; j < Q; j++)
            {
                if (answer.at(i) == q.at(j))
                {
                    answer.at(i) += 1;
                }
            }
        }
    }

    for (int l = 0; l < Q; l++)
    {
        cout << answer.at(l) << endl;
    }
}
