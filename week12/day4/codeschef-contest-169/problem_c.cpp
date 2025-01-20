#include <bits/stdc++.h>
using namespace std;

int check_kth_bit_on_or_off(int n, int k)
{
    return (n >> k) & 1 ;
}

void print_on_and_off_bits(int n)
{
    for(int k=0; k<30; k++)
    {
        if(check_kth_bit_on_or_off(n, k)){
            cout<< 1 << " ";
        }
        else cout<< 0 << " ";
    }
}

int main() {
	// your code goes here
	print_on_and_off_bits(4);
	return 0;

}
