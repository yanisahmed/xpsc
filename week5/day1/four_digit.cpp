
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   cin>>n;
    stack<int>s;
    while(n)
    {
        int tmp = n % 10;
        s.push(tmp);
        n = n / 10;
    }
    string str;
    while (!s.empty()) {
       str += s.top() + '0';
        s.pop();
    }
    int len = str.length();
    int print_zero = 4-len;
    for(int i=0; i<print_zero; i++)
    {
        str = '0' + str;
    }
    cout<<str;
   return 0;
}
