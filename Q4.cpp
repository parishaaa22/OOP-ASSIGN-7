#include <iostream>
using namespace std;

class Array {
private:
    int a[5];

public:
    Array() {
        for (int i = 0; i < 5; i++)
            a[i] = 0;
    }

    // Overload [] operator
    int& operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Error: Index out of bounds!" << endl;
            exit(0);  // stop the program
        }
        return a[index];
    }

    void show() {
        for (int i = 0; i < 5; i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main() {
    Array arr;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    arr.show();

    cout << arr[2] << endl;  // valid access
    cout << arr[7] << endl;  // invalid -> will show error

    return 0;
}
