#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin>>t;
   while(t--)
   {
       int h, x, y;
       cin>>h>>x>>y;

       int cnt = 0;
       while(h > 0)
       {
           if(cnt == 0)
           {
               h = h - y;
               cnt++;
               ////cout<<"h: "<<h<<" "<<"cnt"<<" "<<cnt<<endl;
           }
           else
           {
               h = h - x;
               cnt++;
               //cout<<"h: "<<h<<" "<<"cnt"<<" "<<cnt<<endl;
           }
       }

       cout<<cnt<<endl;

   }


   return 0;
}
