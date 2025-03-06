#include "myellips.h"
#include "myquater.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    Ellipse q(0, 0, 10, 5);
    q.print1();
    cout << "������������� � " << q.calculateC() << endl;
    cout << "��������=" << q.P() << endl << "�������=" << q.area();
    cout << "��������������= " << q.eccentr() << endl;
    cout << "��� �=3, �=" << q.findY(3) << endl;
    cout << "��� y=2, x=" << q.findX(2) << endl;

    Quaternion x(2, 4, 7, 5);
    x.print2();
    Quaternion e(8, 6, 9, 3);
    e.print2();
    (x + e).print2();
    (x - e).print2();

    (x * e).print2();

    (x / e).print2();

    (x ^ e).print2();

}