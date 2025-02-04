#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n, x;
       cin>>n>>x;
       string s;
       cin>>s;
       if(s[0] == '0')
       {
           cout<<"NO"<<endl;
           continue;
       }
       int flag = 0;
       for(int i=0; i<n; i++)
       {
           if(s[i] == '0')
           {
               flag = 0;
               break;
           }else{
            i = i + x;
            //cout<<i<<endl;
            flag = 1;
           }
       }
       (flag) ? cout<< "Yes"<<endl: cout<<"NO"<<endl;
    }
    return 0;
}
