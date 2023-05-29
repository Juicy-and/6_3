#include "quadrilateral.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : a_(a), b_(b), c_(c), d_(d), A_(A), B_(B), C_(C), D_(D), Figure(name){};
int Quadrilateral::get_a() { return a_; }
int Quadrilateral::get_b() { return b_; }
int Quadrilateral::get_c() { return c_; }
int Quadrilateral::get_d() { return d_; }
int Quadrilateral::get_A() { return A_; }
int Quadrilateral::get_B() { return B_; }
int Quadrilateral::get_C() { return C_; }
int Quadrilateral::get_D() { return D_; }
void Quadrilateral::print()
{
    std::cout << this->get_name() << '\n' << "Стороны: a = " << a_ << ", b = " << b_ << ", c = " << c_ << ", d = " << d_
        << "\nУглы: A = " << A_ << ", B = " << B_ << ", C = " << C_ << ", D = " << D_ << std::endl << std::endl;
}