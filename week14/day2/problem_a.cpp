#include<bits/stdc++.h>
using namespace std;

int  main()
{
        int A,B,C;
        cin>>A>>B>>C;

        int X;
        cin>>X;

        long long cuboid_vol = A * B * C;
        long long cube_vol = pow(X, 3);

        if(cuboid_vol > cube_vol)
        {
            cout<<"Cuboid"<<endl;
        }
        else if ( cube_vol > cuboid_vol  )
        {
            cout<< "Cube"<<endl;
        }
        else if( cube_vol == cuboid_vol )
        {
            cout << "Equal" <<endl;
        }

        return 0;
}
