#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter name"<<endl;
    cin>>name;
    float payRate;
    cout<<"enter pay rate"<<endl;
    cin>>payRate;
    float workinghours;
    cout<<"enter working hours"<<endl;
    cin>>workinghours;
    float totalSalary;
    totalSalary=workinghours*payRate;
    cout<<name<<"...pay rate is..."<<payRate<<"..and he work for.."<<workinghours<<"..hours to earn the total salary.."<<totalSalary<<endl;
}