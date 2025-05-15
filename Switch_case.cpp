#include<iostream>

int main(){
	int day;
	std::cout<<"Enter number of the day:-";
	std::cin>>day;
	switch(day){
		case 1 : std::cout<<"Monday";
		break;
		case 2 : std::cout<<"Tuesday";
		break;
		case 3 : std::cout<<"wednesday";
		break;
		case 4 : std::cout<<"Thrusday";
		break;
		case 5 : std::cout<<"Friday";
		break;
		case 6 : std::cout<<"saturday";
		break;
		case 7 : std::cout<<"sunday";
		break;
		default : std::cout<<"Invalid Number";
	}
	
	return 0;

}
