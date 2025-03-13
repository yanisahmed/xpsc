#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;

    // Generate Mask
    for(int mask = 0; mask < (1 << n); mask++)
    {
        cout<<mask<< " -> ";
        for(int k=0; k<n; k++)
        {
            if( (mask >> k) & 1)
            {
                cout<<1<< " ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<'\n';
    }
    return 0;
}



