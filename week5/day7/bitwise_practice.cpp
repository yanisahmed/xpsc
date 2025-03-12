
#include<bits/stdc++.h>
#include <ios>  // Include for std::ios

using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}

void print_on_and_off_bits(int n)
{
    for(int k=30; k>=0; k--)
    {
        if(check_kth_bit_on_or_off(n, k))
        {
            cout << 1 << " ";
        }
        else cout<< 0 << " ";
    }
    cout<<'\n';
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k) );
}

int turn_off_kith_bit(int n, int k)
{
    return (n & (~(1 << k)));
}
int toggle_kth_bit(int n, int k)
{
    return( n ^ ( 1 << k));
}

int main()
{
// Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    //cout<<check_kth_bit_on_or_off(45,1)<<endl;
    //print_on_and_off_bits(45);
    //cout<<turn_on_kth_bit(45, 1);
    //cout<<turn_off_kith_bit(45, 5);
    cout<<toggle_kth_bit(45, 5);

    return 0;
}
