#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;   // forward declaration

class Polar {
private:
    float r, theta;      // theta in radians

public:
    Polar(float a, float b) : r(a), theta(b) {}

    // UDT (Polar) → UDT (Cartesian)
    operator Cartesian();
};

class Cartesian {
private:
    float x, y;

public:
    Cartesian(float a = 0, float b = 0) : x(a), y(b) {}

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

// definition of conversion operator
Polar::operator Cartesian() {
    float x = r * cos(theta);
    float y = r * sin(theta);
    return Cartesian(x, y);
}

int main() {
    Polar p(10, 5);      // r = 10, theta = 5 rad
    Cartesian c = p;     // convert one UDT → another
    c.show();

    return 0;
}
