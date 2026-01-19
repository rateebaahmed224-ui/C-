#include<iostream>
using namespace std;
int main(){
	float f ,c;
	
	cout << "Enter temperature in fahrenheit : " ; 
	cin >> f;
	c = ( f - 32 ) / 1.8 ; 
	cout << " The temperature in celsius is :  " << c ;
	return 0; 
	
}