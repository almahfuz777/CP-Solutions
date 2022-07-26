#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,q;
    string lead,chorus;
    map<string,string> slogan;
    scanf("%d\n",&n);
    while(n--){
        getline(cin,lead);
        getline(cin,chorus);
        slogan[lead]=chorus;
    } 
    scanf("%d\n",&q);
    while(q--){
        getline(cin,lead);
        cout<<slogan[lead]<<endl;
    }
    return 0;
}