#include "Triade.h"
#include <iostream>
class Time :public Triade
{
public:
	Time();
	Time(int s, int m, int h);
	Time* operator+=(Time& Sec);
	Time* operator-=(Time& Sec);
    bool operator>(Time& Sec);
	void normal();
	Time& operator=(const Time& t);
	friend std::ostream& operator<<(std::ostream& on, Time& a);
	friend std::istream& operator>>(std::istream& is, Time& a);
};
