#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t; cin >> t;    //testcases
    while(t--)
    {
        double price=0;
        map <char,double> list;
        map <char,double>::iterator it;
        
        int k; cin >> k;    // declared values
        for(int i=0;i<k;i++){
            char c; double v;  // character and corresponding value 
            cin >> c >> v;
            list[c] = v;
        }
        int m; cin >> m;    // line count
        cin.ignore();
        string line;
        for(int i=0;i<m;i++){
            getline(cin,line);
            
            int l=line.size();
            for(int j=0;j<l;j++){
                it=list.find(line[j]);
                if(it!=list.end()) price+= it->second;
            }
        }
        printf("%.2lf$\n",price/100);
        
    }
    return 0;
}