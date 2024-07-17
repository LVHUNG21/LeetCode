#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int> &nums,int val){
    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] != val){
            nums[count]=nums[i];
            count++;
            // nums[count]=nums[i+1];
        }
    }
    return count;
}
int main(){

}

