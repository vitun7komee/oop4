#include "Time.h"
Time::Time() {
	hour = min = sec = 0;
}
Time::Time(int h, int m, int s) : Triade(s, m, h) {
	sec = s; min = m; hour = h;
	normal();
}
Time* Time::operator+=(Time& Sec) {
	Triade::operator+=(Sec);
	normal();
	return this;
}
Time* Time::operator-=(Time& Sec) {
	Triade::operator-=(Sec);
	normal();
	return this;
}
bool Time::operator>(Time& Sec){
	double TIME1 = hour*360 + min * 60 + sec;
	double TIME2 = Sec.hour * 360 + Sec.min * 60 + Sec.sec;
	if (TIME1 > TIME2) { return true; }
	else { return false; }
}
void Time::normal() {
	std::cout << hour << std::endl;
	if (sec > 60) { sec = sec - 60; min++;}
	else if (sec < 0) { sec = 60 + sec; min--; }
	if (min > 60) { min = min - 60; hour++; }
	else if (min < 0) { min = 60 + min; hour--; }
	if (hour > 24) { hour = hour - 24; }
	
	std::cout << hour << std::endl;
	
}
std::istream& operator>>(std::istream& in, Time& t) {

	std::cout << "enter TIME hour.min.sec :\n";

	in >> t.hour;
	std::cin.ignore();
	in >> t.min;
	std::cin.ignore();
	in >> t.sec;
	std::cin.ignore();
	return in;
}
std::ostream& operator<<(std::ostream& out, Time& t) {
	out << "TIME \n " << t.hour << " : " << t.min << " : " << t.sec << std::endl;
	return out;
}
Time& Time::operator=(const Time& t)
{
	if (&t != this)
	{
		hour = t.hour;
		min = t.min;
		sec = t.sec;
	}
	else
		return *this;
}
