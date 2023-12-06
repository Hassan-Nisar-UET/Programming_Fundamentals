#include <iostream>
using namespace std;
int main(){
    float number;
    cout<<"enter a positive numberer"<<endl;
    cin>>number;
    while (number > 0)
    {
        number = number - 0.5;
        cout<<number<<endl;
    }
    
}