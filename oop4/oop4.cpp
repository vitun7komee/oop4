#include <iostream>
#include "Time.h"
enum actions
{
    CompareTime, AddUpTheTime, SubtractTime, print, end
};
int main()
{
	Time q;
    bool stop = false;
    int choice;
    std::cin >> q;
    Time s, r, c, q1, q2;
    q1, q2 = q;
    std::cout << " 0 - CompareTime  1 - AddUpTheTime  2 - SubtractTime  3 - print  4 - end  " << std::endl;
    while (!stop) {
        std::cout << " Select action : ";
        std::cin >> choice;
        switch (choice) {
        case actions::CompareTime:
            std::cout << " enter comparable time " << std::endl;
            std::cin >> c;
            if (q>c) { std::cout << q << '>' << c << std::endl;}
            else { std::cout << q << '<' << c << std::endl;}
            break;
        case actions::AddUpTheTime:
            std::cout << " enter added time " << std::endl;
            std::cin >> s;
            q1 += s;
            std::cout << " result " << q1 << std::endl;
            break;
        case actions::SubtractTime:
            std::cout << " enter subtracted time " << std::endl;
            std::cin >> r;
            q2 -= r;
            std::cout << " result :" << q2 << std::endl;
            break;
        case actions::print:
            std::cout << q;
            break;
        case actions::end:
            std::cout << "bye!";
            stop = true;
            break;
        }
    }
}



