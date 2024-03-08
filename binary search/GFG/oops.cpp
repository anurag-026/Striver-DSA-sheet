#include <iostream>

using namespace std;

class Base { };

class Derived:public Base { };

 int main()

{

    Base *p =new Derived;

    Derived *q =new Base;

}