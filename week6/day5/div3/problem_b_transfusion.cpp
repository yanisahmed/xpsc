#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin>>n;
      vector<long long>vec(n), vec_total;
      long long ans = 0;
      for(int i=0; i<n; i++)
      {
          cin>>vec[i];
          ans += vec[i];
      }

      int flag = 1;
      for(int i=1; i<n-1; i++)
      {
          if(vec[i-1] - vec[i] == 1 || vec[i+1] - vec[i] == 1 || vec[i] - vec[i-1] == 1 || vec[i] - vec[i+1] == 1 )
          {
              continue;
          }
          else
          {
              flag = 0;
              break;
          }
      }
      flag ? cout << "Yes"<<endl : cout<<"No"<<endl;

    }
}

int main() {
    fastread();
    solve();
    return 0;
}

