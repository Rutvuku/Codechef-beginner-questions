#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0)
            break;

    }
    if(i==n){
        cout<<"n is a prime number"<<endl;

    }
    else{
        cout<<"n is not prime"<<endl;
    }
    return 0;
}
