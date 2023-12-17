#include <iostream>
using namespace std;
int main(){
    float sum;
    float avg;
    int array[5];
    
    for(int i=0; i<=4; i++){
        cout<<"enter the test marks"<<endl;
        cin>>array[i];
       cout<<"number enter by user is.."<<array[i]<<" "<<endl;
        sum=sum+array[i];
    }
     cout<<"sum"<<sum<<endl;
    avg=sum/5;
    cout<<"average.."<<avg<<endl;

}