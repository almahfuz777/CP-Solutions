#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> dic;
    string word, sword;
    //dictionary setup
    while(cin >> word && word!="XXXXXX"){
        sword=word;
        sort(sword.begin(),sword.end());
        dic.insert(make_pair(word,sword));
    }
    //query and output
    while(cin >> word && word!="XXXXXX"){
        sort(word.begin(),word.end());
        int flag=0;
        for(auto &it: dic){
            if(it.second==word){
                cout << it.first << endl;
                flag=1;
            }
        }
        if(flag==0) cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }
 
    return 0;
}