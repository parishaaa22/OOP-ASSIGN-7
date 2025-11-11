#include <iostream>
using namespace std;

class Test {
private:
    float value;

public:
    Test(float x) {
        value = x;
    }

    // UDT → basic type (float)
    operator float() {
        return value;
    }
};

int main() {
    Test obj(4.5);

    float x = obj;   // calls conversion operator
    cout << "Float = " << x << endl;

    return 0;
}
