//PAPRI SEN
//24070123070
//A3
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the number to check even or odd: ";
    cin>>a;
    if(a%2!=0){
        cout<<"The number is odd."<<endl;
    }
    else if(a=0){
        cout<<"the number is zero"<<endl;
    }
    else{
        cout<<"The number is even"<<endl;
    }

    return 0;
}
