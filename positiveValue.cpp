#include <iostream>
using namespace std;
int main(){
    float number;
    cout<<"enter number"<<endl;
    cin>>number;
    float count;
    count=number;
    for(int i=count; number > 0 ; i++){

        number = number - 0.5;
        cout<<number<<endl;
    }

}