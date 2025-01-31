#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        string s1 = "ADVITIYA";
        string s;
        cin>>s;

        int ans = 0;
        for(int i=0; i<8; i++)
        {
            int val = (s1[i] - s[i]);
            if(val < 0) val += 26;
            ans += val;
        }
        cout<<ans<<endl;

    }
    return 0;
}

