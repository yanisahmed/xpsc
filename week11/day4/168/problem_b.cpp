
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
        int mx = INT_MIN;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if( x > mx){
                mx = x;
                 cout<<1<<" ";
            }
            else cout<<0<<" ";

        }
        cout<<endl;
    }
return 0;
}
