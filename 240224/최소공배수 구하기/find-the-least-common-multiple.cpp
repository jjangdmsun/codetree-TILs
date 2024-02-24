#include <iostream>
using namespace std;

void lcm(int n, int m){
    int temp;
    if(n>m){
        temp = n;
        n=m;
        m=temp;
    }
    temp = 1;
    for(int i=2; i<=n; i++){
        if(n%i==0 && m%i==0){
            temp *= i;
            n /= i;
            m /= i;
        }
    }
    cout << temp*n*m;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    lcm(n,m);
    return 0;
}