
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
    {
      int n, m;
      cin>>n>>m;
      vector<int>a(n), b(m);
      for(int i=0; i<n; i++)
      {
          cin>>a[i];
      }
      for(int i=0; i<m; i++)
      {
          cin>>b[i];
      }

      for(int i=0; i<n-1; i++)
      {
          if(a[i] > a[i+1])
          {
              a[i] = b[0]-a[i];
          }
      }

      int flag = 1;
      for(int i=0; i<n-1; i++)
      {
          if(a[i] > a[i+1])
          {
              flag = 0;
              break;
          }
      }

      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    return 0;

}

