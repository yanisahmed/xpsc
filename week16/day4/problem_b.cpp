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
        vector<int>a(n);
        vector<int>dup;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());


        for(int i=0; i<n-1; i++)
        {
          if(a[i] == a[i+1])
          {
              dup.push_back(a[i]);
          }
        }

        if(dup.size()>=1)
        {
            cout<<dup.size()<<endl;
            for(auto val: dup)
                cout<<val<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
	return 0;

}

