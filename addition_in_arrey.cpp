#include<iostream>

int main(){
	
	int A[7] = {1,4,6,7,8,9,29};
	int n = 7 ;
	int sum = 0;
	
	for(int i=0;i<n;i++){
		
		sum=sum+A[i];
	}
	
	std::cout<<sum;
return 0;

}
