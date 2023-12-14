#include <iostream>
using namespace std;
int main(){
    int counter=1;
    int number;
    cout<<"enetr number"<<endl;
    cin>>number;
    while(counter != 11 ){
        cout<<number<<"x"<<counter<<"="<<number*counter<<endl;
        counter++;
    }
}