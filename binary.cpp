#include <iostream>
using namespace std;
int main(){
    int number,binary;
    cout<<"enter number"<<endl;
    cin>>number;
    while(number != 0){
        binary=number%2;
        cout<<binary<<endl;
    }
}