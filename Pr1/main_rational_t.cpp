 /*
 AUTOR: Javier Farrona Cabrera
 FECHA: 11/02/2024
 EMAIL: alu0101541983@ull.edu.es
 VERSION: 1.0
 ASIGNATURA: Algoritmos y Estructuras de Datos
 PRÁCTICA Nº: 1
 COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
              "C++ Programming Style Guidelines"
              https://geosoft.no/development/cppstyle.html
*/
// COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t

#include <iostream>
#include <cmath>

#include "rational_t.hpp"

using namespace std;

int main()
{
  rational_t a(1, 2), b(1, 2), c, d;

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;

  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();

  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  rational_t x(5, 3), y(1, 3);
   x.write();
   y.write();
   cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
   cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << endl;
   cout << "x > y? " << (x.is_less(y) ? "true" : "false") << endl;

  // FASE III
   cout << "a + b: ";
   a.add(b).write();
  
   cout << "b - a: ";
   b.substract(a).write();

   cout << "a * b: ";
   a.multiply(b).write();
  
   cout << "a / b: ";
   a.divide(b).write();

   cout << "Modificacion" << endl;
   d.read();
   d.write();
   d.resta(d).write();
  
  return 0;
}