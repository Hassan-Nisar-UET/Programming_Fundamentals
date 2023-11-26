#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number of inputs"<<endl;
    cin>>num;
    int value,exist1=0,exist2=0,exist3=0;
    for(int i=1; i<=num; i++){
       cout<<"enter your values"<<endl;
       cin>>value;
       if(value % 2 == 0){
            exist1++;
       }
       else if(value % 2 == 1){
            exist2++;
       }
        else if(value == 0){
            exist3++;
       }
    }
    cout<<"the number of even number is.."<<exist1<<endl;
    cout<<"the number of odd number is.."<<exist2<<endl;
    cout<<"the number of zeros is.."<<exist3<<endl;
}