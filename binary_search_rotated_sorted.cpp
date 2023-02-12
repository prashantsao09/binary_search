// search in rotated and sorted array.
#include<iostream>
using namespace std;

int pivot(int arr[], int size )
{
    int start=0 ; int end = size-1;
    int mid=start+(end-start)/2;
    
    while(start<end)
    {
        if(arr[mid] >= arr[0])
        {
            start=mid+1;
        }

        if(arr[mid] < arr[0])
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
   

    int search(int arr[] , int size , int key , int start , int end)
    {

        int mid=(start+(end-start)/2);
        while(start <= end) {
        if(arr[mid]==key)
        {
        return mid; 
        }

    // go to right wala part
    if(key > arr[mid]){
       int  start=mid+1;
        }

    // go to left wala part
    else{
       int end=mid-1;
    }
    mid=(start+(end-start)/2); // mid = start/2 + end/2
    }
    return -1;
    
    }

    
    
int main()
{
    int index , key =3;
    int arr[8] = {7,9,10,11,2,3,5};
    int size =8;

    int pivotEle = pivot(arr,8);
    cout<<"Pivot element is at index: "<<pivotEle<<endl; 
    cout<<"Pivot element is: "<<arr[pivotEle]<<endl;

    if (arr[pivotEle] <= key && key <= arr[size-1])
    {
        index =  search(arr , 8 , 3 ,pivotEle , size-1);
    }

    else
    {
        index = search(arr , 8 , 3 , 0, pivotEle-1);
    }

    cout<<"key is present at index: "<<index<<endl;
    
    
    return 0;
}
    
    
