#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
   tree t1;
   t1.add(50);
   t1.add(60);
   t1.add(70);
   t1.add(55);
   t1.add(40);
   t1.add(30);
   t1.add(35);
   t1.add(31);
   t1.add(20);

   t1.display();
   cout<<"\n---------------------------------------\n";
    cout<<"The depth is :"<<t1.getMaxDepth()+1<<" ,root + "<<t1.getMaxDepth()<<" levels"<<endl;

    return 0;
}
