#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n = 0;

    while(arr[n] != 0){
        cin >> arr[n];
        n++;
    }
    cout << arr[n-1] + arr[n-2] + arr[n-3];
    return 0;
}