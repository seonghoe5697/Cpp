#include <iostream>
#include <string>
using namespace std;

int main() {
	int total_price;
	string membership;

	cout << "금액 입력: ";
	cin >> total_price;
	cout << "맴버십 등급 입력: ";
	cin >> membership;

	int shipping_fee = (membership == "Gold" || total_price > 50000) ? 0 : 3000;
	cout << "최종 결제 금액은: " << total_price + shipping_fee << "원\n";
	return 0;
}
/* OUTPUT
금액 입력: 30000
맴버십 등급 입력: Gold
최종 결제 금액은: 30000원
*/