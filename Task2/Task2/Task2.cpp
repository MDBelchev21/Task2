#include <iostream>

class Gcd{
public:
	Gcd(int num1, int num2) {
		setNum1(num1);
		setNum2(num2);
		setGcd(calcGcd(getNum1(), getNum2()));
	}
	void setNum1(int num) {
		num1 = num;
	}
	void setNum2(int num) {
		num2 = num;
	}
	void setGcd(int num)
	{
		gcd = num;
	}
	int getNum1() {
		return num1;
	}
	int getNum2() {
		return num2;
	}
	int getGcd() {
		return gcd;
	}
	int calcGcd(int num1, int num2)
	{
		int smallNum;
		if (num1 > num2)
			smallNum = num2;
		else
			smallNum = num1;
		for(int i = smallNum; i > 1; i--)
			if (num1 % i == 0 && num2 % i == 0)
				return i;	
	}
private:
	int num1;
	int num2;
	int gcd;
};

int main()
{
	int num1, num2;
	std::cout << "Enter the numbers you want the gcd of: ";
	std::cin >> num1;
	std::cin >> num2;
	Gcd gcd(num1, num2);
	std::cout << "The gcd of the numbers " << num1 << " and " << num2 << " is: " << gcd.getGcd();
}