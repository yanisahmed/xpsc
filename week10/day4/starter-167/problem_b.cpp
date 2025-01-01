
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones = 0;
        int zeros = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1') ones++;
            else zeros++;
        }

        if(ones == zeros ) cout<<1<<endl;

        else if( ones == 0 || zeros == 0) cout<< s.length()<<endl;
        else if (ones != zeros)
        {
            cout<<1<<endl;
        }
    }
return 0;
}
