#include<bits/stdc++.h>
using namespace std;

int  main()
{
      int t;
      cin>>t;
      while(t--)
      {
          int n, k;
          cin>>n>>k;
          vector<int>v(n);
          for(int i=0; i<n; i++)
            {
                cin>>v[i];
            }


          while(k--)
          {

            int min_v = v[0];
            int max_v = v.back();
            int sum = min_v + max_v;
            v.pop_back();
            v.erase(v.begin());
            v.push_back(sum);

          }

          for(int val : v)
            cout<<val<< " ";

          cout<<endl;
      }

        return 0;
}

