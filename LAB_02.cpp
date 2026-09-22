// LAB_02.cpp
// Білоус Катерина
// Лабораторна робота №2
// Лінійні програми 
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std; 

int main() {

  double Pi = 4 * atan(1.0); // число Пі

  double alpha; // вхідний параметр
  double z1; // результат обчислення 1-го виразу
  double z2; // результат обчислення 2-го виразу

  cout << "alpha = "; cin >> alpha;
  
  z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
  z2 = 2 * sqrt(2) * cos(alpha) * sin(Pi / 4 + 2 * alpha);

  cout << endl;
  cout << "z1 = " << z1 << endl; //виведення результату 1-го обрахунку
  cout << "z2 = " << z2 << endl; //виведення результату 2-го обрахунку
  
  cin.get();
  return 0;
}