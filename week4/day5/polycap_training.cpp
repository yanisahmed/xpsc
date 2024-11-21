
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;
    set<int>s;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    int cnt = 0;
    int i = 1;
     // Access elements using iterators
    for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
            if(i >= *it)
            {
                cnt++;
            }
            i++;
        std::cout << *it << " " <<"I: "<<i;
    }
    cout<<endl;
    cout<<cnt<<endl;
    return 0;
}
