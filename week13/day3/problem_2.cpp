#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
   cin>>n;
   int cows = 0;
   int chic = 0;
   if( n >= 4)
   {
      cows = n / 4;
      n = n - (4 * cows);
   }

   if( n == 2)
   {
       chic = n / 2;
   }

   cout<< cows + chic <<endl;
   }


    return 0;
}
