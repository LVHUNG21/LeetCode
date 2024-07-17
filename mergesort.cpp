#include<iostrem>
#include<vector>
using namespace std;
void merge (vector<int> &num1, int m, vector<int> &num2, int n){
    int index1=m-1;
    int index2=m-2;
    int mergeindex=m+n-1;
    while(index1  >=0 && index2 >=0){
        if(num1[index1]>num2[index2]){
            num1[mergeindex]=num1[index1];
            index1--;
        }
        else{
            num[mergeindex]= num2[index2];
            index2--;
        }
        mergeindex--;
    }
    while(index2>=0){
        num1[mergeindex]=num2[index2];
        index2--;
        mergeindex--;
    }
}
int main(){


}