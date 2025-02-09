
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        string s;
        cin>>s;
        int len = s.length();
        int flag = 0;
        for(int i=0; i<len-1; i++)
        {
            if(s[i] != s[i+1])
            {
                flag = 0;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag){
            cout<<1<<endl;
        }
        else
        {
            cout<<len<<endl;
        }
    }
    return 0;

}
