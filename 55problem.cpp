#include<iostream>
#include<vector>
using namespace std;
    bool canJump(vector<int> &nums){
        int canjump=nums.size()-1;
        for(int i=canjump-1;i>=0;i++)
            if(nums[i]>=canjump-i) canjump=i;
        if(canjump==0) return 1;
        return 0;
    }
int main(){
    vector<int> nums={2,3,1,1,4};
    bool a= canJump(nums);

    return 0;
}