#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int weight = 13;
    double proportion = 0.165;

    cout << fixed;
    cout.precision(6);
    cout << weight << " * " << proportion << " = " << weight*proportion;

    return 0;
}