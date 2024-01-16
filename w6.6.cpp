#include <iostream>
using namespace std;
int binToOct();
int main(){
    binToOct();
}
int binToOct(){
    int num;
    int result=0;
    cout<<"enter your binary number"<<endl;
    cin>>num;
    while(true);
    
    result=(num) % (8);
    cout<<result<<endl;
    return result;
}