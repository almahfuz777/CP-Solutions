#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    map <string,string> m;
    m["Hajj"]="Hajj-e-Akbar";
    m["Umrah"]="Hajj-e-Asghar";

    string s; int count=0;
    while(cin >> s && s!="*"){
        cout << "Case " << ++count << ": " << m[s] << endl;
    }
    return 0;
}