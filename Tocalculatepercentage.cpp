//to calculate percentage and total marks 
#include<iostream>
using namespace std;
int main(){
	int rollno, m1,m2,m3,m4,m5, totalmarks ;
	float percentage ;
	cout<<" Enter marks for  five subjects " ;
	cin>> m1>>m2>>m3>>m4>>m5;
	totalmarks = m1+m2+m3+m4+m5;
	percentage = (totalmarks /500.0) * 100;
	cout << " Percentage = " << percentage << "%" ;
	cout << " total marks = " << totalmarks;
	return 0;
		
}