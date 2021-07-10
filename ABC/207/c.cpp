#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int flg = 0;
    int count = 0;

    vector<vector<double>> vec(N, vector<double>(2));

    for (int i = 0; i < N; i++)
    {
        flg = 0;
        cin >> flg;

        cin >> vec.at(i).at(0) >> vec.at(i).at(1);

        if (flg == 1)
        {
            // cout << 1 << endl;
        }
        if (flg == 2)
        {
            // cout << 2 << endl;
            vec.at(i).at(1) = vec.at(i).at(1) - 0.5;
        }
        if (flg == 3)
        {
            // cout << 3 << endl;
            vec.at(i).at(0) = vec.at(i).at(0) + 0.5;
        }
        if (flg == 4)
        {
            // cout << 4 << endl;
            vec.at(i).at(0) = vec.at(i).at(0) + 0.5;
            vec.at(i).at(1) = vec.at(i).at(1) - 0.5;
        }
        // cout << "i:" << i << endl;
        // cout << "flg:" << flg << endl;
        // cout << "left;" << vec.at(i).at(0) << endl;
        // cout << "right;" << vec.at(i).at(1) << endl;
        // cout << "next" << endl;
    }

    // sort(vec.begin(), vec.end());

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // cout << "i:" << i << endl;
            // cout << "j;" << j << endl;
            // if (!(vec.at(i).at(0) < vec.at(j).at(1) || vec.at(i).at(1) < vec.at(j).at(0)))
            // {
            //     count += 1;
            // }
            // cout << max(vec.at(i).at(0), vec.at(j).at(0)) << endl;
            // cout << min(vec.at(i).at(1), vec.at(j).at(1)) << endl;
            if (max(vec.at(i).at(0), vec.at(j).at(0)) <= min(vec.at(i).at(1), vec.at(j).at(1)))
            {
                count += 1;
            }
        }
    }

    cout << count << endl;
}
