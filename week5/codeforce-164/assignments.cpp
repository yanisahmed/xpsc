#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        int total_marks = (n * 100) + 100;
        int half = total_marks / 2;

        for(int i =0; i<n; i++)
        {
            int a;
            cin>>a;
            ans += a;
        }

        int marks_needed_to_pass;

        if(ans <= half)
        {
             marks_needed_to_pass = half - ans;
             if(marks_needed_to_pass <= 100) cout<<marks_needed_to_pass<<endl;
            else cout<<"-1"<<endl;
        }
        else if(ans > half)
        {
            cout<<"0"<<endl;
        }

    }
    return 0;
}
