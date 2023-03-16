#include<iostream>
using namespace std;


const float PI = 3.141593;
const float Fence_price = 35;
const float Concrete_price = 20;

class Circle {
private:
	float radius;
public:
	Circle(float r);
	float circumference();//计算周长
	float area();//计算面积
};
//函数的实现
Circle::Circle(float r) {
	radius = r;
}

float Circle::circumference() {
	
	return 2*PI*radius;
}

float Circle::area(){
	return PI * radius * radius;
}

int main()
{
	float radius;
	cout << "Please enter the radius of the poor" << endl;
	cin >> radius;

	Circle pool(radius);
	Circle poolRim(radius+3);

	//计算栅栏的价钱
	float FenceCost = poolRim.circumference() * Fence_price;
	cout << "Fencing Coat is $" << FenceCost<<endl;
	//计算过道的价钱
	float concreteCost = (poolRim.area() - pool.area()) * Concrete_price;
	cout << "concerete Coat is $" << concreteCost<<endl;

	return 0;
}
