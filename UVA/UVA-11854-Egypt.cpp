#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int x,y,z;
    while(cin >> x >> y >> z){
        if(x==0&&y==0&&z==0)break;
        else if((x*x)+(y*y)==(z*z)||(x*x)+(z*z)==(y*y)||(y*y)+(z*z)==(x*x))
        cout << "right" << endl;
        else cout << "wrong" << endl;
    } 
    return 0;
}