//To calculate surface area ad volume of a sphere
#include<iostream>
using namespace std;
float surfacearea( float r){
	return 4 * 3.142 * r*r;
	
}

float volume  ( float r){
	return ( 4/3) * 3.142 * r *r*r;
}
int main(){
	float r;
	
	cout<< " Enter the radius  : " ;
	cin>> r;
	
	surfacearea (r);
	volume (r);
	
	cout<< " Surface area  : " << surfacearea(r) ;
	cout << "/n Volume  : " << volume(r) ; 
	
}