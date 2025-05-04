#include<iostream>
#include<cmath>

int main(){
	float a,b,c,r1,r2;
	std::cout<<"ENTER A,B,C:-";
	std::cin>>a>>b>>c;
	r1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    r2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
 
	std::cout<<"your roots are:-"<<r1<<"\n"<<r2<<"\n";
	
	return 0;
}
