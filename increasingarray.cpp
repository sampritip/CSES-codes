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
    long arr[n];
    long count = 0;
    for(int i=0 ; i<n ; i++)
     cin>>arr[i];
    for(int i=1 ; i<n ; i++)
    {
        long temp = arr[i]-arr[i-1];
        if(temp < 0)
        {
            count += abs(temp);
            arr[i] += abs(temp);
        }
        //cout<<temp<<" "<<count<<" ";
    }
    cout<<count;

    return 0;
}
