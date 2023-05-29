#include "triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name) : a_(a), b_(b), c_(c), A_(A), B_(B), C_(C), Figure(name) {};
int Triangle::get_a() { return a_; };
int Triangle::get_b() { return b_; };
int Triangle::get_c() { return c_; };
int Triangle::get_A() { return A_; };
int Triangle::get_B() { return B_; };
int Triangle::get_C() { return C_; };

void Triangle::print()
{
    std::cout << this->get_name() << '\n' << "Стороны: a = " << a_ << ", b = " << b_ << ", c = " << c_ << "\nУглы: A = "
        << A_ << ", B = " << B_ << ", C = " << C_ << std::endl << std::endl;
}