#include <iostream>
#include <string>
using namespace std;

class STRING {
private:
    string str;

public:
    STRING(string s = "") { 
        str = s; 
    }

    
    STRING operator+(STRING s2) {
        return STRING(str + s2.str);
    }

   
    bool operator==(STRING s2) {
        return str == s2.str;
    }

    void show() {
        cout << str << endl;
    }
};

int main() {
    STRING s1("Hello "), s2("World"), s3;
    s3 = s1 + s2;        
    s3.show();           

    if (s1 == s2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}
