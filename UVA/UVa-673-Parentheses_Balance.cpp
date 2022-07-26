#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n; cin.ignore();
    while(n--)
    {
        stack <char> str;
        string s;
        getline(cin, s);

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='[')
                str.push(s[i]);
            else if(s[i]==')' && !str.empty() && str.top()=='(')
                str.pop();
            else if(s[i]==']' && !str.empty() && str.top()=='[')
                str.pop();
            else {
                str.push('f');
                break;
            }
        }
        if(str.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}