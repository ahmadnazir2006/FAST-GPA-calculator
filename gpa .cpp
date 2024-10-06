#include <iostream>
using namespace std;
string c6,c5,c4,c3,c2,c1;
int hr6,hr5,hr4,hr3,hr2,hr1;
double p6,p5,p4,p3,p2,p1;
//course 6 function

double course6() {

	cout << "Enter your sixth course name" << endl;
	cin >> c6;
	cout << "Enter credit hours of course" << endl;
	cin >> hr6;
	cout << "Enter your credit points" << endl;
	cin >> p6;
	if (p6 == 4 || p6 == 4.0) {
		cout << "you earned A+ grade in " << c6 << endl;
	}
	else if (p6 < 4 && p6 >= 3.7) {
		cout << "you earned A- grade in  " << c6 << endl;
	}
	else if (p6 < 3.7 && p6>= 3.3) {
		cout << "you earned B+ grade in " << c6 << endl;
	}
	else if (p6< 3.3 && p6>= 3.0 || p6 >= 3) {
		cout << "you earned B grade in " << c6 << endl;
	}
	else if (p6< 3 || p6 < 3.0 && p6 >= 2.7) {
		cout << "you earned B- grade in " << c6<< endl;
	}
	else if (p6 < 2.7 && p6 >= 2.3) {
		cout << "you earned C+ grade in" << c6 << endl;

	}
	else if (p6 < 2.3 && p6 >= 2.0 || p6 >= 2) {
		cout << "you earned C grade in" << c6 << endl;

	}
	else if (p6 < 2 || p6 < 2.0 && p6 >= 1.7) {
		cout << "you earned C- grade in" << c6 << endl;
	}
	else if (p6 < 1.7 && p6 >= 1.0 || p6 >= 1) {
		cout << "you earned D grade in " << c6 << endl;
	}
	else if (p6 < 1 || p6 < 1.0 && p6 >= 0 || p6 >= 0) {
		cout << "you earned F grade in " << c6 << endl;

	}
	else {
		cout << "invalid";
	}
	return c6, hr6, p6;

}
//course 5 function
double course5() {
	
	cout << "Enter your fifth course name" << endl;
	cin >> c5;
	cout << "Enter credit hours of course" << endl;
	cin >> hr5;
	cout << "Enter your credit points" << endl;
	cin >> p5;
	if (p5 == 4 || p5 == 4.0) {
		cout << "you earned A+ grade in " << c5 << endl;
	}
	else if (p5 < 4 && p5 >= 3.7) {
		cout << "you earned A- grade in  " << c5 << endl;
	}
	else if (p5 < 3.7 && p5 >= 3.3) {
		cout << "you earned B+ grade in " << c5 << endl;
	}
	else if (p5 < 3.3 && p5 >= 3.0 || p5 >= 3) {
		cout << "you earned B grade in " << c5 << endl;
	}
	else if (p5 < 3 || p5 < 3.0 && p5 >= 2.7) {
		cout << "you earned B- grade in " << c5 << endl;
	}
	else if (p5 < 2.7 && p5 >= 2.3) {
		cout << "you earned C+ grade in" << c5 << endl;

	}
	else if (p5< 2.3 && p5 >= 2.0 || p5 >= 2) {
		cout << "you earned C grade in" << c5 << endl;

	}
	else if (p5 < 2 || p5 < 2.0 && p5>= 1.7) {
		cout << "you earned C- grade in" << c5<< endl;
	}
	else if (p5 < 1.7 && p5 >= 1.0 || p5 >= 1) {
		cout << "you earned D grade in " << c5 << endl;
	}
	else if (p5 < 1 || p5 < 1.0 && p5 >= 0 || p5 >= 0) {
		cout << "you earned F grade in " << c5 << endl;

	}
	else {
		cout << "invalid";
	}
	return c5, hr5, p5;

}
//course 4 function

double course4() {
	
	cout << "Enter your fourth course name" << endl;
	cin >> c4;
	cout << "Enter credit hours of course" << endl;
	cin >> hr4;
	cout << "Enter your credit points" << endl;
	cin >> p4;
	if (p4 == 4 || p4 == 4.0) {
		cout << "you earned A+ grade in " << c4 << endl;
	}
	else if (p4< 4 && p4 >= 3.7) {
		cout << "you earned A- grade in  " << c4 << endl;
	}
	else if (p4 < 3.7 && p4 >= 3.3) {
		cout << "you earned B+ grade in " << c4 << endl;
	}
	else if (p4 < 3.3 && p4 >= 3.0 || p4 >= 3) {
		cout << "you earned B grade in " << c4 << endl;
	}
	else if (p4 < 3 || p4 < 3.0 && p4 >= 2.7) {
		cout << "you earned B- grade in " << c4 << endl;
	}
	else if (p4 < 2.7 && p4 >= 2.3) {
		cout << "you earned C+ grade in" << c4 << endl;

	}
	else if (p4 < 2.3 && p4 >= 2.0 || p4 >= 2) {
		cout << "you earned C grade in" << c4 << endl;

	}
	else if (p4 < 2 || p4 < 2.0 && p4 >= 1.7) {
		cout << "you earned C- grade in" << c4 << endl;
	}
	else if (p4 < 1.7 && p4 >= 1.0 || p4 >= 1) {
		cout << "you earned D grade in " << c4 << endl;
	}
	else if (p4 < 1 || p4 < 1.0 && p4 >= 0 || p4 >= 0) {
		cout << "you earned F grade in " << c4 << endl;

	}
	else {
		cout << "invalid";
	}
	return c4, hr4, p4;

}
//course 3 function

double course3() {
	
	cout << "Enter your third course name" << endl;
	cin >> c3;
	cout << "Enter credit hours of course" << endl;
	cin >> hr3;
	cout << "Enter your credit points" << endl;
	cin >> p3;
	if (p3 == 4 || p3 == 4.0) {
		cout << "you earned A+ grade in " << c3 << endl;
	}
	else if (p3 < 4 && p3 >= 3.7) {
		cout << "you earned A- grade in  " << c3 << endl;
	}
	else if (p3 < 3.7 && p3 >= 3.3) {
		cout << "you earned B+ grade in " << c3 << endl;
	}
	else if (p3 < 3.3 && p3 >= 3.0 || p3 >= 3) {
		cout << "you earned B grade in " << c3 << endl;
	}
	else if (p3 < 3 || p3 < 3.0 && p3 >= 2.7) {
		cout << "you earned B- grade in " << c3 << endl;
	}
	else if (p3 < 2.7 && p3 >= 2.3) {
		cout << "you earned C+ grade in" << c3 << endl;

	}
	else if (p3 < 2.3 && p3 >= 2.0 || p3 >= 2) {
		cout << "you earned C grade in" << c3 << endl;

	}
	else if (p3 < 2 || p3 < 2.0 && p3 >= 1.7) {
		cout << "you earned C- grade in" << c3 << endl;
	}
	else if (p3 < 1.7 && p3 >= 1.0 || p3>= 1) {
		cout << "you earned D grade in " << c3 << endl;
	}
	else if (p3 < 1 || p3 < 1.0 && p3 >= 0 || p3 >= 0) {
		cout << "you earned F grade in " << c3 << endl;

	}
	else {
		cout << "invalid";
	}
	return c3, hr3, p3;

}
//course 2 function

double course2() {
	
	cout << "Enter your second course name" << endl;
	cin >> c2;
	cout << "Enter credit hours of course" << endl;
	cin>> hr2;
	cout << "Enter your credit points" << endl;
	cin>> p2;
	if (p2 == 4 || p2 == 4.0) {
		cout << "you earned A+ grade in " << c2 << endl;
	}
	else if (p2 < 4 && p2 >= 3.7) {
		cout << "you earned A- grade in  " << c2 << endl;
	}
	else if (p2 < 3.7 && p2 >= 3.3) {
		cout << "you earned B+ grade in " << c2<< endl;
	}
	else if (p2 < 3.3 && p2 >= 3.0 || p2 >= 3) {
		cout << "you earned B grade in " << c2<< endl;
	}
	else if (p2 < 3 || p2 < 3.0 && p2 >= 2.7) {
		cout << "you earned B- grade in " << c2 << endl;
	}
	else if (p2 < 2.7 && p2 >= 2.3) {
		cout << "you earned C+ grade in" << c2<< endl;

	}
	else if (p2 < 2.3 && p2 >= 2.0 || p2 >= 2) {
		cout << "you earned C grade in" << c2 << endl;

	}
	else if (p2 < 2 || p2 < 2.0 && p2 >= 1.7) {
		cout << "you earned C- grade in" << c2 << endl;
	}
	else if (p2 < 1.7 && p2 >= 1.0 || p2 >= 1) {
		cout << "you earned D grade in " << c2 << endl;
	}
	else if (p2 < 1 || p2 < 1.0 && p2 >= 0 || p2 >= 0) {
		cout << "you earned F grade in " << c2 << endl;

	}
	else {
		cout << "invalid";
	}
	return c2, hr2, p2;

}
//course 1 function

double course1(){

	cout<< "Enter your first course name" << endl;
	cin>>c1;
	cout << "Enter credit hours of course" << endl;
		cin>>hr1;
		cout << "Enter your credit points" << endl;
		cin>>p1;
		if (p1==4||p1==4.0) {
			cout<< "you earned A+ grade in "<<c1 << endl;
		}
		else if (p1 < 4 && p1 >= 3.7) {
			cout << "you earned A- grade in  "<<  c1 << endl;
		}
		else if (p1 < 3.7 && p1 >= 3.3){
			cout<<"you earned B+ grade in " <<  c1 << endl;
		}
		else if (p1 < 3.3 && p1 >= 3.0 || p1 >= 3) {
			cout << "you earned B grade in " << c1 << endl;
		}
		else if (p1 < 3 || p1 < 3.0 && p1 >= 2.7) {
			cout << "you earned B- grade in " << c1 << endl;
		}
		else if (p1 <2.7 && p1 >=2.3) {
			cout << "you earned C+ grade in" << c1 << endl;

		}
		else if (p1<2.3 && p1 >= 2.0 || p1 >= 2) {
			cout << "you earned C grade in" << c1 << endl;

		}
		else if (p1 < 2 || p1 < 2.0 && p1 >= 1.7) {
			cout << "you earned C- grade in" << c1 << endl;
		}
		else if (p1 < 1.7 && p1 >= 1.0||p1>=1) {
			cout << "you earned D grade in " << c1 << endl;
		}
		else if (p1 < 1||p1<1.0 && p1 >=0||p1>=0) {
			cout << "you earned F grade in " << c1 << endl;

		}
		else {
			cout << "invalid";
		}

	
	return c1,hr1, p1;
}
int main() {
	course1();
	course2();
	course3();
	course4();
	course5();
	course6();
	double tgrade = (p1*hr1)+( p2*hr2)+(p3*hr3)+(p4*hr4)+(hr5*p5)+(p6*hr6);
	int credithours = (hr1 + hr2 + hr3 + hr4 + hr5 + hr6);
	double gpa=tgrade/credithours;
	cout << "Your SGPA is " << gpa;


	return 0;
}