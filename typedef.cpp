#include<iostream>

using namespace std;
// u can also define all data type whatever you want
typedef int marks;
typedef int rollno;

int main() {
	
	rollno r1,r2;
	marks m1,m2;

// student 1
	r1 = 216384;
	m1 = 100;
// studnt 2
	r2 = 216389;
	m2 = 98;
// result print
	std::cout<<"rollno1:-"<<r1<<"\n"<<"marks:-"<<m1<<endl;
	std::cout<<"rollno2:-"<<r2<<"\n"<<"marks:-"<<m2<<endl;


    return 0;
}

