#include<iostream>
#include<cmath>
#include "mypoint.cpp"
using namespace std;

class MyCircle{
	MyPoint center;
	int radius;
	
public:
	
	MyCircle(){};
	
	MyCircle(int x, int y, int radius){
		center.setXY(x,y);
		this->radius = radius;
	}
	
	MyCircle(MyPoint center, int radius){
		this->center = center;
		this->radius = radius;
	}
	
	int getRadius(){
		return radius;
	}
	
	MyPoint getCenter(){
		return center;
	}
	
	void setCenter(MyPoint center){
		this->center = center;
	}
	
	int getCenterX(){
		return center.getX();
	}
	void setCenterX(int x){
		center.setX(x);
	}
	
	int getCenterY(){
		return center.getY();
	}
	void setCenterY(int y){
		center.setY(y);
	}
	
	int getCenterXY(){
		center.getXY();
	}
	
	void setCenterXY(int x, int y){
		center.setXY(x,y);
	}
	
	string toString(){
		return to_string(center.getXY()) + " " + to_string(radius);
	}
	
	double getArea(){
		return 3.14*pow(radius,2);
	}
	
	double getCircumference(){
		return 3.14*2*radius;
	}
	
	double distance(MyCircle another){
		return sqrt(pow(center.getX() - another.getCenterX(), 2) + pow(center.getY() - another.getCenterY(), 2));
	}
};

int main(){
	MyPoint center1(4,5);
	MyPoint center2(2,6);
	
	MyCircle circle1(center1, 69);
	MyCircle circle2(center2, 32);
	
	cout<<"circle 1" <<endl
		<<"x= "<<circle1.getCenterX() <<endl
		<<"y= "<<circle1.getCenterY() <<endl
		<<"radius= " <<circle1.getRadius()<<endl
		<<"area= "<<circle1.getArea() <<endl
		<<"circumference= "<<circle1.getCircumference() <<endl
		
		<<endl <<"circle 2" <<endl
		<<"x= "<<circle2.getCenterX() <<endl
		<<"y= "<<circle2.getCenterY() <<endl
		<<"radius= " <<circle2.getRadius()<<endl
		<<"area= "<<circle2.getArea() <<endl
		<<"circumference= "<<circle2.getCircumference() <<endl
		<<endl<<"distance between both centers= " <<circle1.distance(circle2);
		
	return 0;
}
