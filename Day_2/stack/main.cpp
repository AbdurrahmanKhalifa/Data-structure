#include <iostream>
#include "stk.h"
using namespace std;

int main()
{
    stk s1;
    stk s2;
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);

    int d;
    s1.pop(d)?cout<<d<<endl:cout<<"Empty stack\n";
    s1.pop(d)?cout<<d<<endl:cout<<"Empty stack\n";
    s1.pop(d)?cout<<d<<endl:cout<<"Empty stack\n";
    s1.pop(d)?cout<<d<<endl:cout<<"Empty stack\n";
    s1.pop(d)?cout<<d<<endl:cout<<"Empty stack\n";
    s1.pop(d)?cout<<d<<endl:cout<<"Empty stack\n";

    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);

    s1.display();

    s1.peek(d)?cout<<d<<endl:cout<<"Empty stack\n";
    s1.peek(d)?cout<<d<<endl:cout<<"Empty stack\n";

    s2.display();
    s2.push(10);
    s2.display();
    return 0;
}
