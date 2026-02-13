// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void speak() {
//         cout << "Animal sound\n";
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() {
//         cout << "Dog barks\n";
//     }
// };

// int main() {
//     Dog d;
//     d.speak();
// }

#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *b;
    b = &a;
    cout << *b;
}