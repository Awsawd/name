#include <iostream>
using namespace std;

class Shape
{
public:
	Shape(int x,int y):_x(x),_y(y){}
	virtual void draw();
protected:
	int _x;
	int _y;	
};

void Shape::draw()
{
	cout<<"draw from "<<"("<<_x<<")"<<"("<<_y<<")"<<endl;
}


class Rect:public Shape
{
public:
	Rect(int x,int y,int len,int wid):Shape(x,y),_len(len),_wid(wid){}
	virtual void draw()
	{
		cout<<"draw from "<<"("<<_x<<")"<<"("<<_y<<")";
		cout<<"len = "<<_len<<" wid = "<<_wid<<endl;
	}
	
private:
	int _len;
	int _wid;
};


class Circle:public Shape
{
public:
	Circle(int x,int y,int r):Shape(x,y),_radius(r){}
	virtual void draw()
	{
		cout<<"draw from "<<"("<<_x<<")"<<"("<<_y<<")";
		cout<<" radius = "<<_radius<<endl;
	}
	
private:
	int _radius;
	
};


int main()
{
	Circle c(1,2,3);
	Rect r(3,4,5,6);
	Shape *pc;
	
	int chioce;
	cout<<"***********ÇëÊäÈë***********"<<endl;
	cout<<"***********0.exit***********"<<endl;
	cout<<"***********1.Rect***********"<<endl;
	cout<<"**********2.Circle**********"<<endl;
	
	do
	{
		scanf("%d",&chioce);
		switch(chioce)
		{
			case 1:
				pc = &c;
				pc->draw();
				break;
			case 2:
				pc = &r;
				pc->draw();
				break;
			default:
				cout<<"error!"<<endl;
			case 0:
				break;
		}
	}while(chioce);
	return 0;
}
