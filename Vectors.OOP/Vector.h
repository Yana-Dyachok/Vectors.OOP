#pragma once
#include <iostream>
struct Point {
	double x, y;
};
class Vector
{
private:
	Point A;
	Point B;
	Point C;
	Point AB;
	int numb;
public:
	Vector(void);
	Vector(Point&, Point&);
	friend std::istream& operator>>(std::istream& in, Point& Vec);
	friend std::ostream& operator<<(std::ostream& os, Vector& Vec);
	void vecC();
	Vector operator+(Vector& other);
	Vector operator-(Vector& other);
	double Scalar(Vector other);
	bool operator==(double scal);
	bool operator==(Vector& other);
	Vector operator*(int numb);
	float Angle(Vector other);
	~Vector(void);
};