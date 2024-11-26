#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    List l2;
    List l;
    //l.display();
    l.add(5);
    l.add(2);
    l.add(10);

    l.InsertAfter(17,5);
    l.InsertAfter(14,10);
    l.InsertBefore(7,10);
    l.display();

    l2.add(10);
    l2.InsertBefore(3,10);
    l2.InsertBefore(5,3);
    l2.InsertAfter(33,10);
    l2.InsertBefore(9,5);
    l2.InsertBefore(9,33);
    l2.InsertAfter(9,3);
    l2.InsertAfter(9,3);
    l2.display();

    cout<<l.GetCount()<<endl;
    cout<<l.GetDataByIndex(0)<<endl;
    cout<<l.GetDataByIndex(3)<<endl;
    cout<<l.GetDataByIndex(10)<<endl;
    cout<<l2.GetDataByIndex(0)<<endl;
    return 0;
}
