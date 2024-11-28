#include <iostream>

using namespace std;
int binary_seach(int *item,int size,int search)
{
    int start=0,end=size-1,mid=0;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(item[mid]==search)
            return mid;
        else if (search > item[mid])
            start = mid+1;
        else if (search < item[mid])
            end = mid-1;
    }
    return -1;
}

int main()
{
    int arr[]={1,2,5,8,9,10,11};
    cout<<binary_seach(arr,7,2);

    return 0;
}
