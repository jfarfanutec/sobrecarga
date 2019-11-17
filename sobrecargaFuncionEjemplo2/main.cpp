#include <iostream>
using namespace std;
#include "CVector.h"

int main () {
  Vector v1 = {2, 3};
  v1();            // Ok. invoca versión-1
  v1(1);        // Ok. invoca versión-2
  return 0;
}