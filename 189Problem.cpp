#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
void reverse(vector<int> &nums,int start,int end){
    for(int i=start,j=end;i<j;i++,j--){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
}
void rotate(vector<int> &nums,int k){
    k= k% (nums.size());
    reverse(nums,0,nums.size()-1);      
    reverse(nums,0,k-1);        
    reverse(nums,k,nums.size()-1);      
 
   
}
};
int main(){
    vector<int> temp={1,2,3,4,5,6,7};
    rotate(temp,3);

    return 0;
}