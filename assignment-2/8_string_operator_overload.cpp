#include <iostream>
using namespace std;

class String {
    string str;
public:
    String(string s) { str = s; }

    String operator + (String s2) {
        return String(str + s2.str);
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello "), s2("World");
    String s3 = s1 + s2;
    s3.display();
    return 0;
}
