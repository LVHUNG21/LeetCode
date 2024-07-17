#include<iostream>
using namespace std;
int removeDuplicates(vector<int>& nums){
    int limit=2;
    int count=1;
    int temp=nums[0];
    for(int i=1;i<nums.size();i++){
        if((nums[i] ==temp &&limit>1)){
            nums[count]= nums[i];
            limit--;
            count++;
            if(limit==0){
                limit=2;
            temp=nums[i];
            }
        }
        else if(nums[i] != temp){
            nums[count] = nums[i];
            count++;
            temp=nums[i];
            limit=2;
        }
    }
    return count;
}
int main(){

}