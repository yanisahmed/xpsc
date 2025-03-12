#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n, XOR = 0, total=0;
        cin>>n;
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            XOR ^= a[i];
            total += a[i];
        }

        if(XOR == 0)
        {
            cout<<0<<'\n';
        }
        else
        {
            for(int i=0; i<=XOR; i++)
            {
               for(j=0; j<n; j++)
               {
                   b[j] ^=
               }
            }
        }

    }
}


