
/*
 * File:        https://vjudge.net/contest/671238#problem/A
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-11
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
#include <ios>  // Include for std::ios
using namespace std;


int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

  int x, n, m;
  cin>>x>>n>>m;
  if(x + m >= n) cout<<"YES";
  else cout<<"NO"<<endl;


    return 0;
}


