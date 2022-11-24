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
/* Another Method

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s; int cnt=0;
    while(cin >> s && s!="*"){
        if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n",++cnt);
        else if(s=="Umrah") printf("Case %d: Hajj-e-Asghar\n",++cnt);
    }   
    return 0;
}

*/