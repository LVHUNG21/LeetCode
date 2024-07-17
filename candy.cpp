#include<iostream>
#include<vector>
using namespace std; 

int candy(vector<int>& ratings) {
	int candy[ratings.size()];
	int sum = 0;
	for (int i = 0;i < ratings.size();i++){
		candy[i] = 1;		
	}
	for(int i = 0; i< ratings.size() - 1; i++){
		if(ratings[i] < ratings[i+1]){
			candy[i + 1] = candy[i] + 1;	
		}	
	}
	for (int i = ratings.size() - 2; i >= 0; i--){
		if(ratings[i] > ratings[i + 1] && candy[i] <= candy[i + 1]){
			candy[i] = candy[i + 1] + 1;
		}	
		sum += candy[i];
	}
	sum += candy[ratings.size()-1]; 
	return sum;
}
int candy(vector<int> &ratings){
	vector<int> candy(ratings.size(), 1);
	int sum=0;
	for(int i = 0; i < ratings.size()-1, i++){
		if(candy[i] < candy[i + 1]){
			candy[i+1]= candy[i+1]+1;	
		}
	}
	for(int i= ratings.size()-2; i >= 0; i--){
		if(candy[i] > candy[i + 1]){
			candy[i] = candy[i + 1] + 1;
		}
	}
	for(int i = 0; i < ratings.size() ;i++){
		sum += candy[i];
	}
	return sum;

}
int candy(vector<int> &ratings){
	vector<int> candies(ratings.size(),1);
	for(int i = 1; i< ratings.size(); i++){
		if(ratings[i] > ratings[i - 1]){
			candies[i] = candies[i - 1] + 1;	
		}	
	}
	for(int i = ratings.size() - 2; i >=0; i--){
		if(ratings[i] > ratings[i + 1]){
			candies[i] = max(candies[i], candies[i+1] +1);	
		}	
	}
	int sum = 0;
	for(int i = 0; i < ratings.size(); i++){
		sum += candies[i];	
	}
	return sum;
	
}
int candy (vector<int> &ratings){
	vector<int> candy(ratings.size(),1); 
	for(int i = 0; i < ratings.size()-1; i++){
		if(ratings[i+1]	> ratings[i]){
			candy[i+1] = candy[i] + 1;
		}
	}	
	for(int i = ratings.size() - 2; i >= 0; i--){
		if(ratings[i] > ratings[i+1]){
			candy[i]= max(candy[i], candy[i + 1] +1);
		}
	}
	int sum = 0;
	for(int i = 0; i< ratings.size();i++)
	{
		sum += candy[i];
	}	
	return sum;
	
}
int main(){
	cout<< "hello"<<endl;
	vector<int> nums = {1, 0, 2};
	int a = candy(nums);
	return 0;
}
