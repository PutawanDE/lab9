#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int students;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << '\n';
	do{
		cout << "Student [" << students + 1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if (grade == '0') break;
		switch (grade){
			case 'A':
				count[0]++;
				students++;
				break;
			case 'B':
				count[1]++;
				students++;
				break;
			case 'C':
				count[2]++;
				students++;
				break;
			case 'D':
				count[3]++;
				students++;
				break;
			case 'F':
				count[4]++;
				students++;
				break;
			default:
				cout << "Wrong input. Please input again." << '\n';
				break;
		}
	}while(true);
	
	cout << "In total " << students << " students." << '\n';
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];
	
	return 0;
}
