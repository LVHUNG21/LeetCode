#include<iostream>
using namespace std;
int removeDuplicates(vector<int>& nums){
        int count=1;
        int temp=0;
            temp=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i] != temp){
                nums[count]=nums[i];
                count++;
                temp=nums[i];
            }

        }
}
int main(){
    return 0;
}