#include "Vector.h"
#include <iostream>
#include <cmath>
Vector::Vector() {};
std::istream& operator>>(std::istream& in, Point& Vec) {
	in >> Vec; return in;
}

Vector::Vector(Point& a, Point& b) {
	this->A.x = a.x;
	this->A.y = a.y;
	this->B.x = b.x;
	this->B.y = b.y;
}

void Vector::vecC() {
	this->C.x = B.x - A.x;
	this->C.y = B.y - A.y;
}

Vector Vector::operator*(int numb) {
	Vector ab;
	ab.AB.x = this->C.x * numb;
	ab.AB.y = this->C.y * numb;
	return ab;
}

Vector Vector::operator+(Vector& other) {
	Vector ab;
	ab.AB.x = this->C.x + other.C.x;
	ab.AB.y = this->C.y + other.C.y;
	return ab;
}

Vector Vector::operator-(Vector& other) {
	Vector ab;
	ab.AB.x = this->C.x - other.C.x;
	ab.AB.y = this->C.y - other.C.y;
	return ab;
}

double Vector::Scalar(Vector other) {
	double scal = this->C.x * other.C.x + this->C.y * other.C.y;
	return scal;
}

bool Vector::operator==(double scal) {
	return (scal == 0);
}

bool Vector::operator==(Vector& other) {
	if (other.C.x != 0 or other.C.y != 0) return ((this->C.x / other.C.x) == (this->C.y / other.C.y));
}

float Vector::Angle(Vector other) {
	float  a, b, angul;
	a = sqrt((pow(this->C.x, 2)) + (pow(this->C.y, 2)));
	b = sqrt((pow(other.C.x, 2)) + (pow(other.C.y, 2)));
	if ((a * b) != 0) angul = (this->C.x * other.C.x + this->C.y * other.C.y) / (a * b);
	return angul;
}

std::ostream& operator<<(std::ostream& os, Vector& Vec) {
	os << "x=" << Vec.AB.x << '\t' << "y=" << Vec.AB.y;
	return os;
}
Vector::~Vector() {};