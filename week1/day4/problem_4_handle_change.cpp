#include <bits/stdc++.h>
#include <ios>  // Include for std::ios
using namespace std;

int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<pair<string, string>> v;
    int q;
    cin >> q;
    while (q--)
    {
        string oldPass, newPass;
        cin >> oldPass >> newPass;
        if (v.empty())
        {
            v.push_back({oldPass, newPass});
        }
        else
        {
            bool found = false;
            int pos = 0;
            for (auto& it : v)
            {
                if (it.second == oldPass)
                {
                    found = true;
                    break;
                }
                pos++;
            }

            if (!found)
                v.push_back({oldPass, newPass});
            else
                v[pos].second = newPass;
        }
    }

    cout<<v.size()<<endl;

    for (const auto& it : v)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
