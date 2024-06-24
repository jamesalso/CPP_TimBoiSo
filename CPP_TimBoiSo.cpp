#include <iostream>

using namespace std;

int main() {
    int so;

    cout << "Nhap vao mot so: ";
    cin >> so;

    cout << "Boi so cua " << so << " la: ";
    for (int i = 1; i <= 10; ++i) {
        cout << so * i << " ";
    }
    cout << endl;

    return 0;
}