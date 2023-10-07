#include <iostream>
using namespace std;
int main(){
    int length1;
    cout<<"enter length 1"<<endl;
    cin>>length1;
    int length2;
    cout<<"enter length 2"<<endl;
    cin>>length2;
    int length3;
    cout<<"enter length 3"<<endl;
    cin>>length3;
    if(length1 == length2 && length1 == length3){
        cout<<"triangle is equilateral"<<endl;
    }
    else if(length1 == length2 && length1 != length3){
        cout<<"triangle is isosceles"<<endl;
    }
    else if(length1 != length2 && length1 != length3){
        cout<<"triangle is scalene"<<endl;
    }

}