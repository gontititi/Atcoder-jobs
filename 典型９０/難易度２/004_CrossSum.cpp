#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<int>> v(h, vector<int>(w));
    vector<int> tatesum(w);
    vector<int> yokosum(h);

    int work = 0;

    for (int i = 0; i < h; i++)
    {
        work = 0;
        for (int j = 0; j < w; j++)
        {
            cin >> v.at(i).at(j);
            work += v.at(i).at(j);
        }
        yokosum.at(i) = work;
    }

    for (int k = 0; k < w; k++)
    {
        work = 0;
        for (int l = 0; l < h; l++)
        {
            work += v.at(l).at(k);
        }
        tatesum.at(k) = work;
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            work = tatesum.at(j) + yokosum.at(i) - v.at(i).at(j);
            if (j == w - 1)
            {
                cout << work << endl;
            }
            else
            {
                cout << work << " ";
            }
        }
    }
}