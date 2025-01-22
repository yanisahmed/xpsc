
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin>>N>>X;
        vector<int>v(N);

        int sum = 0;
        for(int i=0; i<N; i++)
        {
            cin>>v[i];
            sum += v[i];
        }


        int bottles = (sum + X - 1) / X;
        cout<<bottles<<endl;


    }
	return 0;
}

