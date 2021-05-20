/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    if(n<=4)
     cout<<"NO SOLUTION";
    else
    {
        int i=0;
        int num = 1;
        int index = (n%2==0) ? (n/2) : (n/2)+1;
        while(i < index)
         {
            arr[i] = num;
            num+=2;
            cout<<arr[i]<<" ";
            i++;
         }
         i = (n%2)==0? n/2 : (n/2)+1;
         num = 2;
         while(i < n)
         {
             arr[i] = num;
             num+=2;
             cout<<arr[i]<<" ";
             i++;
         }
         
    }
}
