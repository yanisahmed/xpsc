#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;

	    int ans = INT_MAX;

	    for(int i=1; i<=n; i++)
	    {
	        for(int j=1; j<=m; j++)
	        {
	            int tmp = 2 * (i + j);

	            if(tmp)
	            {
	                int tmp_abs = abs(k - tmp);
	                ans = min(ans, tmp_abs);
	            }
	        }
	    }
	    cout<<ans<<endl;
	}

}
