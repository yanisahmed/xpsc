
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    string s;
    cin>>s;
    int freq[26] = {0};
    for(int i=0; i<s.length(); i++)
    {
        int val = s[i] - 'a';
        freq[val]++;
    }
    int flag = 0;
    char found;
    for(int i=0; i<26; i++)
    {
        if(freq[i] == 0)
        {
           flag = 1;
           found = 'a' + i;
           break;
        }
    }
    if(flag) cout<<found<<endl;
    else cout<<"None"<<endl;
   return 0;
}

