#include <iostream>
using namespace std;
int main() {
    int largest=0,smallest=100000;
    int count;
    int num;
    int i=0;
    int arr[10];
    for(; i<=9; i++){
        cout<<"enter the values"<<endl;
        cin>>arr[i];
    }
        cout<<"enter the number"<<endl;
        cin>>num;
        for(int l=0; l<=9; l++){
        if(num == arr[l]){
            count++;
        }
        }
        cout<<num<<"is exist.."<<count<<"times in array"<<endl;
        
        for(int j=0; j<=9; j++){
            
            if(arr[j] > largest ){
                largest=arr[j];
            }
        }
        cout<<"largest number is.."<<largest<<endl;
           for(int k=0; k<=9; k++){
            
            if(arr[k] < smallest ){
                smallest=arr[k];
            }
        }
        cout<<"smallest number is.."<<smallest<<endl;
    
    
   

}