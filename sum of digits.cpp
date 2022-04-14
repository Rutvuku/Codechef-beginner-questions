#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cout<<"enter the number of tests"<<endl;
    cin>>t;
    while(t--){
        int sum=0;
        cout<<"enter the value of n"<< endl;
        cin>>n;
        while(n!=0){

            sum+=n%10;

            n=n/10;
        }
        cout<<"sum of the digits is "<< sum << endl;

    }
    return 0;
}
