#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
 for(int i = 0; i<3; i++){
    srand(time(0));
    int sps = (rand()%2);
    int code;
    cin>>code;

    switch(sps){
    case(0):
        switch(code){
        case(0):
            cout<<"tie"<<endl;
            break;
        case(1):
            cout<<"lost"<<endl;
            break;
        case(2):
            cout<<"win"<<endl;
            break;

        }
        break;
    case(1):
        switch(code){
        case(0):
            cout<<"lost"<<endl;
            break;
        case(1):
            cout<<"tie"<<endl;
            break;
        case(2):
            cout<<"win"<<endl;
            break;

        }
        break;
    case(2):
        switch(code){
        case(0):
            cout<<"win"<<endl;
            break;
        case(1):
            cout<<"lost"<<endl;
            break;
        case(2):
            cout<<"tie"<<endl;
            break;

        }
        break;



    }
    cout<<sps<<endl;
 }
    return 0;
}
