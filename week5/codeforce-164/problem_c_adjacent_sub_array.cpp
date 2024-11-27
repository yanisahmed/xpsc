#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "0\n";
            continue;
        }

        vector < int > B(n - 1), A;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> B[i];
        }

        sort(B.begin(), B.end());
        A.push_back(B[0] / 2);

        for (int i = 0; i < n - 1; i++) {
            A.push_back(B[i] - A[i]);
        }

        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << (i == A.size() - 1 ? "\n" : " ");
        }

    }

}
