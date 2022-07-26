#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    map <string,int> m;
    int t; cin>>t;  //number of queries
    int type, marks; string name;
    while(t--){
        cin>>type;
        if(type==1){
            cin>>name>>marks;
            m[name]=m[name]+marks;
        }
        else{
            cin>>name;
            if(type==3){
                if(m.find(name)==m.end())
                cout<<'0'<<endl;
                else cout<<m[name]<<endl;
            }
            else if(type==2 && m.find(name)!=m.end()){
                m.erase(m.find(name));
            }
        }
        
    }
    return 0;
}