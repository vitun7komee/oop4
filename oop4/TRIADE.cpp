#include "Triade.h"

Triade::Triade() {
	sec = 0; min = 0; hour = 0;
}
Triade::Triade(int h, int m, int s) {
	sec = s; min = m; hour = h;
}
Triade* Triade::operator+=(Triade& Sec) {
	sec += Sec.sec;
	min += Sec.min;
	hour += Sec.hour;
	return this;
}
Triade* Triade::operator-=(Triade& Sec) {
	sec -= Sec.sec;
	min -= Sec.min;
	hour -= Sec.hour;
	return this;
}
void Triade::setS(int s) { sec = s; } double Triade::getS() { return sec; }
void Triade::setM(int m) { min = m; } double Triade::getM() { return min; }
void Triade::setH(int h) { hour = h; } double Triade::getH() { return hour; }