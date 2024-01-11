#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int rollDice(int number);
int main(){
    int sum,times;
    cout<<"enter the sum of two dice"<<endl;
    cin>>sum;
    times=rollDice(sum);
    cout<<"the number of times the dice are rolled to get the sum.."<<sum<<"="<<times<<endl;

}

int rollDice(int number){
    float result=0;
    int count =0;
    while(result <= number){
        
            srand(time(0));
            int die1=rand()%6+1;
            int die2=rand()%6+1;
            result=die1+die2;
            count++;
        
    }
    return count;
    
}