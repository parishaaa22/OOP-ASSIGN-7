#include <iostream>
using namespace std;

class Matrix {
private:
    int a[3][3];   

public:
    void input() {
        cout << "Enter 3x3 matrix elements:\n";
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> a[i][j];
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};


Matrix operator*(Matrix m1, Matrix m2) {
    Matrix temp;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            temp.a[i][j] = 0;
            for (int k = 0; k < 3; k++)
                temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
        }
    }
    return temp;
}

int main() {
    Matrix m1, m2, m3;
    cout << "Enter first matrix:\n";
    m1.input();
    cout << "Enter second matrix:\n";
    m2.input();

    m3 = m1 * m2;  // multiply using overloaded *

    cout << "Resultant matrix:\n";
    m3.display();
    return 0;
}
