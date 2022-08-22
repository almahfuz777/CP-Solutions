#include <bits/stdc++.h>
using namespace std;

void method1(){
    int k; cin >> k;
    printf("%d:%02d", 21+k/60, k%60);
}
void method2(){
    int k; cin >> k;
    cout << 21+k/60 << ":" << setfill('0') << setw(2) << k%60 << endl;
}
void method3(){
    int k; cin >> k;
    cout.fill('0');
    cout << 21+k/60 << ":" << setw(2) << k%60 << endl;
}
void method4(){  
    /*  Works for C++20
    int k; cin >> k;
    cout << 21+k/60 << format("{:02}", k%60);
*/
}

int main(void)
{
    method1();
    return 0;
}