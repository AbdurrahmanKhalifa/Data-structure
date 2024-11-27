#include <iostream>
#include "Myqueue.h"
using namespace std;

int main()
{
    int d;

    Myqueue q(6);
    q.enQueue(1)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(2)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(3)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(4)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(5)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(6)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(7)?cout<<"done\n":cout<<"Full...\n";

    q.Getfront(d)?cout<<"Front = "<<d<<"\n":cout<<"Empty...\n";
    q.GetRear(d)?cout<<"Back = "<<d<<"\n":cout<<"Empty...\n";
    q.display();


    //q.display();
    cout<<"\n";

    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";
    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";
    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";
    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";
    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";
    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";
    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";

    cout << "**********************"<<endl;
    q.enQueue(1)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(2)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(3)?cout<<"done\n":cout<<"Full...\n";

    q.display();

    q.enQueue(4)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(5)?cout<<"done\n":cout<<"Full...\n";
    q.enQueue(6)?cout<<"done\n":cout<<"Full...\n";

    q.deQueue(d)?cout<<d<<endl:cout<<"Empty...\n";

    q.enQueue(7)?cout<<"done\n":cout<<"Full...\n";
    q.display();


    return 0;
}
