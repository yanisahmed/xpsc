

/*
 * File:        Problem a Quintomania
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11- 2
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
        int cnt = 0;
        for(int i = 2; i<= n; i= i + 7)
        {
            cnt++;
        }

        cout<<cnt<<endl;


    }

    return 0;
}



