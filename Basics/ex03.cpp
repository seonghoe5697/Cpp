#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int d;
	cout << "원의 지름 입력: ";
	cin >> d;

	const double PI = 3.1415926535;
	double radius = d / 2.0;

	double circumference = d * PI;
	double area = pow(radius,2) * PI;

	cout << "원의 둘레: " << (int)circumference << "\n";
	cout << "원의 넓이: " << (int)area << endl;
	
	return 0;
}
/* OUTPUT
	원의 지름 입력: 25
	원의 둘레: 78
	원의 넓이: 490
*/