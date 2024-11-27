/*
 * File:        https://vjudge.net/contest/669017#problem/A
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-27
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   string s, t;
   cin>>s>>t;
   int s_index =0;
   int cnt = 0;
   while(s_index < s.length())
   {
       if(s[s_index] != t[s_index])
       {
           s[s_index] = t[s_index];
           cnt++;
       }
       s_index++;
   }
   cout<<cnt<<endl;

    return 0;
}



