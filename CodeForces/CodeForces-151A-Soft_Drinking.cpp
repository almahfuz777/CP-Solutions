#include <bits/stdc++.h>
using namespace std;

int main()
{
    int 
    n,  // number of friends
    k,  // bottles of drink 
    l,  // ml of drink
    c,  // number of limes
    d,  // slices of limes
    p,  // grams of salt
    //requirement to make a toast per person
    nl, // ml of drink
    np; // grams of salt

    cin >>n>>k>>l>>c>>d>>p>>nl>>np;

    int min= (c*d < k*l/nl)? 
    (c*d < p/np)? c*d : p/np :
    (k*l/nl < p/np)? k*l/nl : p/np;
    
    cout << min/n << endl;
    
    return 0;
}
