#include<iostream>

int main(){
	int A[7] = {2,4,9,10,5,7,11};
	int n=7; int max;
	
	max=A[0];
	
	for(int i=0;i<7;i++){
		
		if(A[i]>max){
			
			max=A[i];
		}
	}
	
	std::cout<<"max number is "<<max;
	
	return 0;
}
