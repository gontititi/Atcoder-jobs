#include <bits/stdc++.h>
using namespace std;

string q_function(string s)
{
    queue<string> q;
    string a = "";
    q.push("");
    //
    while (!q.empty())
    {
        //キューから取得
        a = q.front();
        q.pop();
        //取得した文字列が目的のものの場合、Yesを戻す
        if (a == s)
        {
            return "Yes";
        }
        //取得した文字列の長さが目的の文字列より長い場合、次
        if (a.size() < s.size())
        {
            //取得値に文字列連結１_queueに入れる
            q.push(a + "dream");
            //取得値に文字列連結2_queueに入れる
            q.push(a + "dreams");
            //取得値に文字列連結3_queueに入れる
            q.push(a + "erase");
            //取得値に文字列連結4_queueに入れる
            q.push(a + "eraser");
        }
    }
    return "No";
}

int main()
{
    string s;
    string out;
    cin >> s;

    out = q_function(s);

    cout << out << endl;
}