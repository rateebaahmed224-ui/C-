//TO SWAP THREE NUMBERS USING POINTERS
#include<iostream>
using namespace std;
int main(){

int a,b,c,temp;
int *p1,*p2,*p3;
cout << "Enter a : " ;
cin >> a;
cout << "Enter b : " ;
cin >> b;
cout << "Enter c : " ;
cin >> c;

p1=&a;
p2=&b;
p3=&c;

temp=*p1;
*p1=*p2;
*p2=*p3;
*p3=temp;

cout<< " After swapping : \n " ;
cout << " a : " << a << " b : " << b << " c : " << c ;
return 0 ; 
}
