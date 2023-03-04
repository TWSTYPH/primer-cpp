#include <iostream>
int a = 0, b = 1;

int *p1 = &a, *p2 = p1;
int main(){

    p1 = &b;
    *p2 = 5; 
    std::cout << *p1 << "  " << a << "  " << b << std::endl;

    return 0;

}