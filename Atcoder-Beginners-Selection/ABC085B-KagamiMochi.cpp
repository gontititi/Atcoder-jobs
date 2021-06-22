#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int work;
    set<int> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> work;
        st.insert(work);
    }
    cout << st.size() << endl;
    ;
}