#include<iostream>
#include<vector>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void sortt(vector<int> &citations){
    for(int i=0;i<citations.size()-1;i++){
        int min=i;
        for(int j=i+1;j<citations.size();j++){
            if(citations[j]> citations[min]){
                min=j;
            }
        }
        swap(citations[min],citations[i]);
    }
}
int hIndex(vector<int>& citations) {
    sortt(citations);
    int h_index=0;
    for(int i=0;i<citations.size();i++){
        if((i+1)<=citations[i]){
            h_index=i+1;
        }
        else{
            break;
        }
    }
   return h_index;
}
int main(){
     vector<int> nums={2,3,1,1,4};
    sortt(nums);
    for(int i=0;i<nums.size();i++){
        cout<<" "<<nums[i];
    }
    cout<<endl;
    return 1;
}