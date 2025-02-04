#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int limit = (n / 2) + 1;
        cout<<"limit " <<limit<<endl;
        int ans = 0;
        for(int i=2; i<limit; i++)
        {
            for(int j=2; j<limit; j++)
            {
                int width  = 2 * i;
                int breadth = 2 * j;

                int total = width + breadth;
                if(total > n) break;
                ans = i * j;

            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
