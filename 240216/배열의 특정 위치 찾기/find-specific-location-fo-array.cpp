#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // 2 5 8
    int num[10];
    int sum = 0;
    double average = 0;
    for(int i=0; i<10; i++){
        cin >> num[i];
        if(i%2 == 1){
            sum += num[i];
        }
    }
    average = num[2] + num[5] + num[8];
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << average/3;
    return 0;
}