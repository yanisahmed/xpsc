#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // Generate Mask
    bool ok = false;
    for(int mask = 0; mask < (1 << n); mask++)
    {
        //cout<<mask<< " -> ";
        int sum = 0;
        for(int k=0; k<n; k++)
        {
            if( (mask >> k) & 1)
            {
                //cout<<1<< " ";
                sum += a[k];
            }
            else
            {
                //cout<<0<<" ";
                sum -= a[k];
            }
        }
        if(sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if(ok) cout<<"Yes"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}




