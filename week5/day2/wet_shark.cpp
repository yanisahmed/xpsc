#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t;
    cin>>s>>t;

    long long cnt = 0;
    for(int i=0; i<=s; i++)
    {
        for(int j=0; j<=s; j++ )
        {
            for(int k=0; k<= s; k++)
            {
                if(i + j + k <= s && i * j * k <= t) cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
