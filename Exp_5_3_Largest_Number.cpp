//PAPRI SEN
//24070123070
//A3
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter 1st number: ";
    cin>>n1;
    cout << "Enter 2nd number: ";
    cin>>n2;
    cout << "Enter 3rd number: ";
    cin>>n3;
    if(n1>n2){
        if(n1>n3){
            cout<<n1<<" is the largest"<<endl;
        }
        else{
            cout<<n3<<" is the largest"<<endl;
        }
    }
    else if(n2>n1){
        if(n2>n3){
            cout<<n2<<" is the largest"<<endl;
        }
        else{
            cout<<n3<<" is the largest"<<endl;
        }
    }
    else{
        cout<<"All numbers are same"<<endl;
    }
    return 0;
}
