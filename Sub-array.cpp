#include <iostream>  
using namespace std;  
/* The program will print the indexes if the currentsum is equal to the sum, else it will print sum will not found */  
int subarray ( int arr[] , int n , int sum )  
{  
    int currentsum, i, j, k ;  
  
    // Start with initial index 0 element  
    for ( i = 0 ; i < n ; i++ )   
    {  
        currentsum = arr[ i ] ;  
  
        // try all subarrays starting with ' i '  
        for ( j = i + 1 ; j <= n ; j++ )   
        {  
            if ( currentsum == sum )   
            {     
            cout<<  " Sum found between indexes  " <<  i << " and " <<  j - 1 << endl ;  
                cout << " Printing the required subarray : " << endl ;  
                for( k = i ; k <= j-1 ; k++ )  
                {  
                    cout << arr[ k ] << " " ;  
                }  
                return 0 ;  
            }  
            if ( currentsum  >  sum || j == n )  
                break ;  
            currentsum = currentsum + arr[ j ] ;  
        }  
          
    }  
        cout << endl ;  
        cout  << " No subarray found " << endl ;  
}  
  
int main()  
{  
    int i ,  A[ 100 ] , n , sum ;  
    cout << " Enter number of elements present in the array : " << endl ;  
    cin >> n ;  
    cout << " Enter array :  " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cin >> A [ i ] ;   
    }  
    cout << " Enter sum value:  " ;  
    cin >> sum ;  
    subarray ( A , n , sum ) ;  
  
    return 0 ;  
}  
