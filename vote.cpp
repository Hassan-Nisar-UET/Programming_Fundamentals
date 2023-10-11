#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    string gender;
    cout<<"enter your gender"<<endl;
    cin>>gender;
    if(age >=18 && age <=120 && gender == "male"){
        cout<<"you are valid for vote"<<endl;

    }
    else if(age <= 20 && age <=100 && gender == "female"){
        cout<<"you are valid for vote"<<endl;

    }
    else{
        cout<<"you are not vlid for vote"<<endl;
    }
}