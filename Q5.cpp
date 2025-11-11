#include <iostream>
using namespace std;

class Sum {
public:
    // Overload () operator
    void operator()(int a) {
        cout << "One argument: " << a << endl;
    }

    void operator()(int a, int b) {
        cout << "Sum of two: " << a + b << endl;
    }

    void operator()(int a, int b, int c) {
        cout << "Sum of three: " << a + b + c << endl;
    }
};

int main() {
    Sum obj;

    obj(5);          // one argument
    obj(3, 7);       // two arguments
    obj(1, 2, 3);    // three arguments

    return 0;
}
