#include<iostream>
#include<vector>
using namespace std;
int jump(vector<int> &nums){
    int totalStep=0;
    int canjump=nums.size()-1;
    int coverage=0;
    int current_end=0;
    // current_end đại diện cho vị trí xa nhất mà bạn có thể nhảy tới trong lần nhảy hiện tại.
    for(int i=0;i<canjump;i++){
        int compare=nums[i]+i;
        coverage = coverage > compare ? coverage : compare;
        if(i==current_end){
            current_end=coverage;
            totalStep++;
        }
        if(totalStep>=canjump){
            return totalStep;
        }
    }
    return totalStep;
}
int main(){
vector<int> nums={2,3,1,1,4};
     int a= jump(nums);

}