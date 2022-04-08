/*Реалізуйте клас Vector.Знайдіть суму, різницю, скалярний добуток векторів, кут між векторами, перевірте умову колінеарності, ортогональності векторів та виконайте множення вектора на число*/
#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
	Point a;//об'єкт а структури Point
	Point b;//об'єкт b структури Point
	cout << "Enter four coordinares x1, x2, y1, y2: ";
	cin >> a.x >> a.y >> b.x >> b.y;//перевантажуємо оператор >> та вводимо координати векторів
	Vector One(a, b);//об'єкт класу, який відповідає першому вектору та його координатам
	Vector Two(b, a);//об'єкт класу, який відповідає другому вектору та його координатам
	One.vecC();//метод в якому знаходимо перший вектор
	Two.vecC();//метод в якому знаходимо другий вектор
	Vector C = One + Two;//перевантажуємо оператор '+' та знаходимо суму векторів
	cout << "Vectors' sum: " << C << endl;//виводимо суму векторів
	Vector C1 = One - Two;//перевантажуємо оператор '-' та знаходимо різницю векторів
	cout << "Vectors' difference: " << C1 << endl;//виводимо різницю векторів
	cout << "Inner product=" << One.Scalar(Two) << endl;//виводимо скалярний добуток векторів за допомогою метода Scalar() 
	bool orthogonal = One.Scalar(Two) == 0;//перевантажуємо оператор '==' - дізнаємось чи вектори ортогональні
	cout << "true=1, false=0. Orthogonal vectors: " << orthogonal << endl;
	bool collinear = One == Two;//перевантажуємо оператор '==' - дізнаємось чи вектори колінеарні
	cout << "true=1, false=0. Collinear vectors: " << collinear << endl;
	cout << "cos a=" << One.Angle(Two) << endl;//знаходимо кут міжвекторами через метод Angle()
	int numb;//змінна - число на яке множиться вектор
	cout << "Enter any number:"; cin >> numb;//вводим число
	Vector C2 = One * numb;//перевантажуємо оператор '*' та  виконуємо  множення вектора на число
	cout << "Product of multiplying first vector by a number " << numb << " is " << C2 << endl;
}