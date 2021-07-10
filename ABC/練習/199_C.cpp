#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    //文字列分割
    string S_pre;
    string S_post;
    //入れ替えフラグ
    int rev = 0;

    int Q;
    int T, A, B;

    cin >> N;
    cin >> S;
    cin >> Q;
    //文字分割
    S_pre = S.substr(0, N);
    S_post = S.substr(N, 2 * N);
    // cout << S_pre << endl;
    // cout << S_post << endl;

    vector<vector<int>> vec(Q, vector<int>(3));

    for (int i = 0; i < Q; i++)
    {
        cin >> vec.at(i).at(0) >> vec.at(i).at(1) >> vec.at(i).at(2);
    }

    //処理
    for (int j = 0; j < Q; j++)
    {
        T = vec.at(j).at(0);
        A = vec.at(j).at(1) - 1;
        B = vec.at(j).at(2) - 1;

        //1の処理
        if (T == 1)
        {
            if ((A - N >= 0) ^ (B - N >= 0))
            {
                if (rev % 2 == 0)
                {
                    swap(S_pre.at(A), S_post.at(B - N));
                }
                else
                {
                    swap(S_post.at(A), S_pre.at(B - N));
                }
            }
            else
            {
                if ((A - N >= 0) & (B - N >= 0))
                {
                    if (rev % 2 == 0)
                    {
                        swap(S_post.at(A - N), S_post.at(B - N));
                    }
                    else
                    {
                        swap(S_pre.at(A - N), S_pre.at(B - N));
                    }
                }
                else
                {
                    if (rev % 2 == 0)
                    {
                        swap(S_pre.at(A), S_pre.at(B));
                    }
                    else
                    {
                        swap(S_post.at(A), S_post.at(B));
                    }
                }
            }
        }
        //2の処理
        if (T == 2)
        {
            rev += 1;
        }
    }
    if (rev % 2 == 0)
    {
        cout << S_pre << S_post << endl;
    }
    else
    {
        cout << S_post << S_pre << endl;
    }
}