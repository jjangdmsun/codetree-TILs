#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n, count=0;


    do{
        cin >> arr[count];
        if(arr[count]==0){
            n=count;
        }
        count++;
    }while(arr[count-1] != 0);

    cout << arr[n-1] + arr[n-2] + arr[n-3];



    return 0;
}