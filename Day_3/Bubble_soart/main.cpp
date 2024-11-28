#include <iostream>
#include "Linked_List.h"
using namespace std;

int main()
{
    Linked_List<int> L;
    Linked_List<int> L2;

    L.add(5);
    L.add(9);
    L.add(4);
    L.add(6);

    L.display();
    L.bubble_sort();
    L.display();

    L2.add(1);
    L2.add(5);
    L2.add(2);
    L2.add(3);
    L2.add(4);
    L2.add(6);

    cout<<"*************************************\n";
    L2.display();
    L2.bubble_sort_special();
    L2.display();



    return 0;
}
