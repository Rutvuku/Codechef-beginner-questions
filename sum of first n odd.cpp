#include <iostream>

using namespace std;

int main()
{
    int i=1,sum=0,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n){

        sum=sum+ 2*i-1;
        i++;

    }
    cout<<"sum of first n odd numbers are "<< sum << endl;

    return 0;
}
