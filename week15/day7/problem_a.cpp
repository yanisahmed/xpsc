#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
        string s, s2;
        cin>>s;
        int len = s.length();
        if(s[len-1] == 's' && s[len-2] == 'u')
        {
            s[len-2] = 'i';
            s[len-1] = '\0';
            s2 = s.substr(0, s.size() - 1);
        }
        cout<<s2<<endl;
    }
    return 0;

}
