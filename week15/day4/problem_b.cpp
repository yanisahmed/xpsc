#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;

    if(x == 2050)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        x = x + 25;
        if(x == 2050)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
