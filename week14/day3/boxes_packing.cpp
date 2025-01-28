#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = 1;
    int total_box = n;

    while (i < n && j < n)
    {
        if (v[i] < v[j])
        {
            total_box--;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    cout << total_box << endl;

    return 0;
}
