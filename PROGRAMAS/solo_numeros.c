#include <iostream>

using namespace std;

int main() {
  float a;

  do {
    cout << "Ingrese un numero entero: ";
    cin >> a;
  } while ((a < 1) || (a-(int)a > 0));

  cout << "El numero digitado es " << (int)a;

  return 0;

}

