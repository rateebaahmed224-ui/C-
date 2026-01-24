#include<iostream>
#include <string>
using namespace std; 

class student{
	public:
	string name;
	int rollno;
	int semester;
	char section;
	
	//constructor
	student ( string n , int rn, int sems , char sec ){
		name=n;
		rollno=rn;
		semester=sems;
		section=sec;
	}
	
};

int main(){
	//objcts
    student s1("Ali", 101, 3, 'A');
    student s2("Sara", 102, 3, 'B');
    student s3("Ahmed", 103, 2, 'A');
    student s4("Ayesha", 104, 1,'C');
	
	cout << " Students of section A : " << endl ;
	
		if (s1.section == 'A' ){
	cout << s1.name << " " << s1.rollno << " " << s1.semester << endl;
		}
		
		    if (s2.section == 'A')
        cout << s2.name << " " << s2.rollno << " " << s2.semester << endl;

    if (s3.section == 'A')
        cout << s3.name << " " << s3.rollno << " " << s3.semester << endl;

    if (s4.section == 'A')
        cout << s4.name << " " << s4.rollno << " " << s4.semester << endl;

    return 0;
	
}

