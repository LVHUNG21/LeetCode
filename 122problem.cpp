#include<iostream>
#include<vector>
using namespace std;
 int maxProfit(vector<int>& prices) {
   int maxprofit=0;
   for(int i=1;i<prices.size();i++){
    if(prices[i]>prices[i-1]){
        maxprofit+= prices[i]-prices[i-1];
    }
   }
    return   maxprofit;
}
int main(){
    vector<int> price={7,1,5,3,6,4};
    int a = maxProfit(price);
    cout<<"a: "<<a<<endl;
}