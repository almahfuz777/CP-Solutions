#include <bits/stdc++.h>
using namespace std;

int main() {
int t; cin >> t;
for(int i=1;i<=t;i++){
    cout << "Case " << i << ":" << endl; 

    deque<int>dq;
    int n, m; cin >> n >> m;

    while(m--){
        string s; cin >> s;
        if(s=="pushLeft"||s=="pushRight"){
            int x; cin >> x;
            if(dq.size()==n) cout << "The queue is full" << endl;
            else{
                if(s=="pushLeft"){
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }
                else if(s=="pushRight"){
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }
            }
        }
        else{
            if(dq.empty()) cout << "The queue is empty" << endl;
            else{
                if(s=="popLeft"){
                    cout << "Popped from left: " << dq.front() << endl;
                    dq.pop_front();
                }
                else if(s=="popRight"){
                    cout << "Popped from right: " << dq.back() << endl;
                    dq.pop_back();
                }
            }
        }
        
    }
}

    return 0;
}