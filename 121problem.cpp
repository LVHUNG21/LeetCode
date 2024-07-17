#include<iostream>
using namespace std;
int maxProfit(vector<int> &prices){
    int candidate=prices[0];
    int profit=0; 
    for(int i=1;i<prices.size();i++){
        if(candidate < prices[i] && (prices[i]-candidate)>profit ){
            profit=prices[i]-candidate; 
        }
        else if(candidate>prices[i]){
           candidate=prices[i]; 
        }
    }
    return profit;
}
int main(){

}