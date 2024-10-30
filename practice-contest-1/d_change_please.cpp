



/*
 * File:        Maximum Coins
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-10- 29
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
        int n;
        cin>>n;

        int driver_got = 100 - n;
        if(driver_got % 10 != 0)
        {
            int rem = driver_got % 10;
            cout<<driver_got - rem<<endl;
        }
        else
        {
             cout<<100 - n<<endl;
        }


    }
    return 0;
}


