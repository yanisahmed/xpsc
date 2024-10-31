#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;

	while(t--)
	{
	    int odd = 0;
	int even = 0;
	    int n;
	    cin>>n;
	    for(int i=1; i<=n; i++)
	    {
	        if(n % i == 0)
	        {
	            if(i % 2 == 0) even++;
	            else odd++;
	        }
	    }

	    if(even > odd) cout<<"1"<<endl;
	    else if (even == odd) cout<<"0"<<endl;
	    else cout<<"-1"<<endl;
	}
return 0;
}
