#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char text[10];

    for(int i=0; i<10; i++){
        cin >> text[i];
    }
    cout << text[1] << " " << text[4] << " " << text[7];
    return 0;
}