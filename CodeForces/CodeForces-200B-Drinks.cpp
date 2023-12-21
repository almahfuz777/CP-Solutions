#include <iostream>
using namespace std;

int main() {
    int n; cin >> n; double arr[n];
    double sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=(arr[i]/100);
    } 
    cout << sum/n*100 << endl;
    return 0;
}