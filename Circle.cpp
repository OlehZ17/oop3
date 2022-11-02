#include "Circle.h"
#include <iostream>

using namespace std;
int a;
bool Circle::setX(int value) {
    if (value > 0)
    {
        x = value;
        return true;
    }
    else return false;
}
bool Circle::setY(int value) {
    if (value > 0)
    {
        y = value;
        return true;
    }
    else return false;
}

bool Circle::setR(int value) {
    if (value > 0)
    {
        R = value;
        return true;
    }
    else return false;


}

bool Circle::Init(int x, int y, int R) {
    return setX(x) && setY(y) && setR(R);
}

void Circle::Read()
{
    int x;
    int y;
    int R;
    do {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;
    } while (!Init(x, y, R));
}
void Circle::Display()const
{
    //cout << "x = " << x << endl;
    //cout << "y = " << y << endl;
    //cout << "R = " << R << endl;
    cout << "S = " << getS() << endl;
    cout << "L = " << getL() << endl;
}
