#include <iostream>

using namespace std;

void linear_search(int *item,int size,int search)
{
    bool found = 0;
    for(int i=0;i<size;i++)
    {
       if(item[i]==search)
        {
            cout<<i<<",";
            found = 1;
        }
    }

    if (!found)
        cout<<"Not found\n";
    else
        cout<<"\n";

}
int main()
{
    int arr[] = {1,2,3,5,8,5,9};
    linear_search(arr,7,5);
    linear_search(arr,7,10);

    return 0;
}
