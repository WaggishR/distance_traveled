#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int speed, distance, time;

	cout << "Enter the vehicle speed: ";
	cin >> speed;

	while (speed < 10 || speed>120) {
		cout << "Please enter a speed between 10mph and 120mph: ";
		cin >> speed;
	}

	cout << "\nEnter hours traveled: ";
	cin >> time;

	while (time > 24 || time < 1) {
		cout << "Please enter a value between 1 and 24 hours:";
		cin >> time;
	}

	cout << "\n\nHours" << setw(11) << "Distance\n" << "-----" << setw(11) << "--------\n"; //headers

	for (int i = 1; i <= time; i++) {
		
		cout << setw(3) << i << setw(9) << (i*speed)<<endl;

	}


	system("pause");
	return 0;
}