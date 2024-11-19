#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //map<int, int>mp;
    map<vector<int>, int>mp;

    vector<int>a;
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);
    a.push_back(2);

    mp[a] = 5;
    for(auto[x,y] : mp)
    {
        vector<int> v = x;
        for(auto value : v)
        {
            cout<<value<< " ";
        }
        cout<< '\n';
    }

    }

    return 0;
}
