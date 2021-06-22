#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = 0;
    bool A = true;
    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec.at(i);
        if (vec.at(i) % 2 != 0)
        {
            A = false;
        }
    }
    while (A)
    {
        for (int i = 0; i < N; i++)
        {
            vec.at(i) = vec.at(i) / 2;
            if (vec.at(i) % 2 != 0)
            {
                A = false;
            }
        }
        count++;
    }
    cout << count << endl;
}