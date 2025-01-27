#include<bits/stdc++.h>
using namespace std;

int  main()
{
      int t;
      cin>>t;
      while(t--)
      {
          int n,d;
          cin>>n>>d;

          vector<int>v(n);
          int num_of_switch = 0;
          int flag = 1;
          for(int i=0; i<n; i++)
          {

             cin>>v[i];
          }

          for(int val : v)
          {
              if(val > d && flag ==1)
                {
                    num_of_switch++; flag=0;
                }
              if(val <= d && flag == 0)
              {
                  num_of_switch++; flag = 1;
              }

          }
          cout<<num_of_switch<<endl;
      }

        return 0;
}
