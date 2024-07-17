#include<iostream>
#include<vector>
using namespace std;
    int majorityElement(vector<int>& nums) {
    int vote=0;
    int candidate=-1;
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(vote==0){
            candidate=nums[i];
            vote=1;
        }
        else if(nums[i]==candidate){
            vote++;
        }
        else{
            vote--;
        }
    } 
    for(int i=0;i<nums.size();i++){
        if(nums[i]==candidate){
            count++;
        }
    }
    if(count > (nums.size()/2)){
        return candidate;
    }
    return -1;       
}

int main(){
    vector<int> nums={3,2,3};
    int a=majorityElement(nums);
    return 0;
}