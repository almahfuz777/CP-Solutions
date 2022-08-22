#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++)
        cin >> arr[i][j];
    }
    vector<int> v;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            v.push_back(sum);
        }
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-1] << endl;
    return 0;
}