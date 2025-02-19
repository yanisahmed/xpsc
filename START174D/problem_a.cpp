#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y;
	cin>>x>>y;

	int tmp_ans = y * 10;
	int ans = x + tmp_ans;
	if(ans >= 100) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;

}
