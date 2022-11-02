#pragma once
#include <string>
using namespace std;
class Circle
{
private:
	int a;
	int x;
	int y;
	int R;
public:
	int getX() const { return x; }
	int getY() const { return y; }
	int getR() const { return R; }
	bool setX(int);
	bool setY(int);
	bool setR(int);

	double getS() const { return 3.14 * (getR() * getR()); }
	double getL() const { return 2 * 3.14 * getR(); }

	bool Init(int x, int y, int R);
	void Read();
	void Display() const;
};

