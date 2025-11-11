#include <iostream>
using namespace std;

class Test {
private:
    float value;        // user-defined data

public:
    // conversion constructor : float → Test
    Test(float x) {
        value = x;
    }

    void show() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    float f = 3.14;

    Test obj = f;       // basic type (float) → object
    obj.show();

    return 0;
}
