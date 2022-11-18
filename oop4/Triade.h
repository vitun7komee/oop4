#include <iostream>
class Triade {
protected:
	int sec;
	int min;
	int hour;
public:
	Triade();
	Triade(int s, int m, int h);
	Triade* operator+=(Triade& Sec);
	Triade* operator-=(Triade& Sec);
	void setS(int s); double getS();
	void setM(int m); double getM();
	void setH(int h); double getH();
};

