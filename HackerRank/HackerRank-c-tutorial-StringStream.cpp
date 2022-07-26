#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string str; cin >>str;
    stringstream ss(str);
    int num; char ch;
    while(ss >> num){
        cout << num << endl;
        ss >> ch;
    }
    return 0;
}