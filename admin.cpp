#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter the user name"<<endl;
    cin>>name;
    string pin;
    cout<<"enter the password"<<endl;
    cin>>pin;
    if(name == "admin" && pin == "123"){
        cout<<"you are admin"<<endl;
    }
    else{
        cout<<"youare not admi"<<endl;
    }
}