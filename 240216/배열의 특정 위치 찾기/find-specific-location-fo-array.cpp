#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[10];
    double sum = 0;
    for(int i=0; i<10; i++){
        cin >> num[i];
        if(i%2 == 1){
            sum += num[i];
        }
    }
    cout << fixed;
    cout.precision(0);
    cout << sum << " ";
    cout.precision(1);
    cout << sum/5;
    return 0;
}