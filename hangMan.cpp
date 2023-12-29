#include <iostream>
using namespace std;
int main(){ 
int i=0; 
int p=0;
int count=0;
int k=1;
int j=0;    
char entry;
string arr[count];
string word;
cout<<"enter the word"<<endl;
cin>>word;
for(; word[i] != '\0'; i++){
    count++;   
}

for(; j<=count; j++){
    
    arr[j]=word[j];   
}
for(; k<=3; p++){
    cout<<"enter your guess"<<endl;
     cin>>entry;
     if(arr[p]==entry){
         cout<<"you enter right guess"<<endl;
         
     }
     else{
         cout<<"you enter wrong guess"<<endl;
        k++;
     }
     
     k--;
     
}


}