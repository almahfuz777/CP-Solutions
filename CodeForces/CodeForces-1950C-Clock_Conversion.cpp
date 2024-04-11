#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define all(v) v.begin(), v.end()

int main() {
fast;
testcase{
    string s; cin >> s;
    int hr, min;
    char colon;
    stringstream ss(s);
    ss >> hr >> colon >> min;

    string period = (hr < 12) ? "AM" : "PM";
    if (hr == 0)
        hr = 12;
    else if (hr > 12)
        hr -= 12;

    stringstream result;
    result << (hr < 10 ? "0" : "") << hr << ":" << (min < 10 ? "0" : "") << min << " " << period;
    cout << result.str() << endl;

}

    return 0;
}