#include <iostream>
using namespace std;
int main(){
    float milk;
    cout<<"enter the amount of milk"<<endl;
    cin>>milk;
    float carton=3.78;
    float profit=0.27;
    float cost=0.388;
    float cartonNeed;
    float totalProfit;
    float producingCost;
    cartonNeed=milk/carton;
    producingCost=cost*milk;
    totalProfit=profit*cartonNeed;
    cout<<"total profit is.."<<totalProfit<<endl;
    cout<<"producing cost is.."<<producingCost<<endl;
    cout<<"cartons required.."<<cartonNeed<<endl;

}