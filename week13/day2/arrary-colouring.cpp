#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        int odd_ans = 0;
        int even_ans = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] %2 == 0) even_ans += a[i];
            else odd_ans += a[i];
        }

        if(odd_ans % 2 == 0 && even_ans % 2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
