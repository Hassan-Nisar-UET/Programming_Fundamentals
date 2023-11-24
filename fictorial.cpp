#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    int count=1;
    while(num > 0){
        count=count*num;
        num--;
    }
    cout<<count<<endl;
}