#include <iostream>  
using namespace std;  
int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {  
        mid = (beg + end)/2;    
/* if the item to be searched is present at middle */  
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
            /* if the item to be searched is smaller than middle, then it can only be in left subarray */  
        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    
        /* if the item to be searched is greater than middle, then it can only be in right subarray */      
    else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }         
    }    
    return -1;     
}   
int main() {  
  int a[] = {10, 12, 24, 29, 39, 40, 51, 56, 70}; // given array  
  int val = 51; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = binarySearch(a, 0, n-1, val); // Store result  
  cout<<"The elements of the array are - ";  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";    
  cout<<"\nElement to be searched is - "<<val;   
  if (res == -1)  
  cout<<"\nElement is not present in the array";  
  else  
  cout<<"\nElement is present at "<<res<<" position of array";  
  return 0;  
}  
