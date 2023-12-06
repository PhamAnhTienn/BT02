#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    for(int i = n-1; i >= 0; --i) {

        for (int j = 0; j < n-i-1; ++j) {
            cout << " ";
        }

        // In ra các dấu '*' trong tam giác
        for (int k = 2 * i + 1; k > 0; --k) {
            cout << "*";
        }

        // Xuống dòng sau khi in xong mỗi dòng
        cout << endl;
    }

    return 0;
}