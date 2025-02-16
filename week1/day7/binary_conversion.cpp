/*
 * File:        Binary Conversion.cpp
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2025-02-16
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

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string S,T;
        cin>>S>>T;

        int flag = 1;
        for(int i=0; i<n-1; i++)
        {
           if(S[i] != T[i])
           {
               if(k>0)
               {
                   k--;
                   if(S[i] != S[i+1] && S[i+1] == T[i])
                   {
                       S[i]=T[i];
                       if(S==T)
                       {
                           flag = 1;
                           break;
                       }
                   }
                   else
                   {
                       continue;
                   }
               }
               else
               {
                   break;
               }
           }
           else
           {
               continue;
           }
        }

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
