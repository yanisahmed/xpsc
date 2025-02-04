#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<char>v(6);
        for(int i=0; i<6; i++)
        {
            char ch;
            cin>>ch;
            v.push_back(ch);
        }

        int flag = 1, hat = 0;
        for(auto val : v)
        {
            if(val == 'W')
            {
               hat++;
               if(hat >= 3) break;
            }
            else
            {
                hat = 0;
            }
        }
        (hat >= 3) ? cout<< "Yes"<<endl : cout<< "No"<<endl;
    }
    return 0;
}
