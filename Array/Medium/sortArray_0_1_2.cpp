#include<iostream>  
using namespace std;  
void sort_array_0_1_2( int A[ ] , int n )    
{  
    int i = 0 ,  countzero = 0 , countone = 0 ,  counttwo = 0 ;  
    while ( i < n )  
    {  
        if ( A [ i ] == 0 )  
        {  
            countzero = countzero + 1 ;  
        }  
        else if ( A [ i ] == 1 )  
        {  
            countone = countone + 1 ;  
        }  
        else  
        {  
            counttwo = counttwo + 2 ;  
        }  
        i = i + 1 ;  
    }  
    for  ( i = 0 ; i < countzero ; i++ )  
    {  
        A [ i ] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        A [ i ] = 1 ;  
    }  
            for ( i = countzero + countone ; i < n ; i++ )  
    {  
        A [ i ] = 2 ;  
    }  
}  
int main()  
{  
    int  i ,  A[ 100 ] , n ;  
    cout << " Enter number of elements present in the array: " << endl ;  
    cin >> n ;  
    cout << " Enter array:  "  <<  endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cin >> A [  i  ] ;  
    }  
    cout << " Array after sorting : \n " << endl ;  
    sort_array_0_1_2 ( A , n ) ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cout <<  A  [  i  ] << endl ;  
    }  
    return 0;  
      
}  
