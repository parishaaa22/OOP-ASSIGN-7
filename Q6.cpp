#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Overload >> for input
    friend istream& operator>>(istream &in, Student &s) {
        cout << "Enter name: ";
        in >> s.name;
        cout << "Enter age: ";
        in >> s.age;
        return in;
    }

    // Overload << for output
    friend ostream& operator<<(ostream &out, const Student &s) {
        out << "Name: " << s.name << ", Age: " << s.age;
        return out;
    }
};

int main() {
    Student s;
    cin >> s;          // input using overloaded >>
    cout << s << endl; // output using overloaded <<
    return 0;
}
