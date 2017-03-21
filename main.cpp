#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;

class Base {
    virtual void method() {std::cout << "from Base" << std::endl;}
public:
    virtual ~Base() {method();}
    void baseMethod() {method();}
};

class A : public Base {
    void method() {std::cout << "from A" << std::endl;}
public:
    ~A() {method();}
};

void f(int arr[]){
    sort(arr, arr + 5);
}

int main(void) {

    string s = "(2, 2) (3, 3)";
    string t = regex_replace(s, regex("[\\(\\),]"), " ");
    cout << t;
    return 0;
}