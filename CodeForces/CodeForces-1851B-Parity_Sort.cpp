#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define testcase int t; cin >> t; while(t--)
#define ll long long

void sortEvenNumbers(int arr[], int n) {
    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }

    int* evenArr = new int[evenCount];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[index++] = arr[i];
        }
    }

    sort(evenArr, evenArr + evenCount);

    index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = evenArr[index++];
        }
    }

    delete[] evenArr;
}
void sortOddNumbers(int arr[], int n) {
    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            oddCount++;
        }
    }

    int* oddArr = new int[oddCount];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            oddArr[index++] = arr[i];
        }
    }

    sort(oddArr, oddArr + oddCount);

    index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            arr[i] = oddArr[index++];
        }
    }

    delete[] oddArr;
}
int main() {
fast;
testcase{
    int n; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortEvenNumbers(arr, n);
    sortOddNumbers(arr, n);

    int flag = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = 1;
            break;
        }
    }
    if(flag==1) cout << "NO" << endl;
    else cout << "YES" << endl;

    delete[] arr;
}
    return 0;
}
