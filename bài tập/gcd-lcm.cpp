#include <iostream>
using namespace std;

int gcd(int a, int b) {
    /*while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;*/
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int main() {
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
    cout << "LCM IS: " << a*b/gcd(a,b);
}