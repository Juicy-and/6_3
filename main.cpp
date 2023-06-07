#include <iostream>
#include <string>
#include "equilateral_triangle.h"
#include "figure.h"
#include "isosceles_triangle.h"
#include "parallelogram.h"
#include "quadrangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "rhombus.h"
#include "right_triangle.h"
#include "square.h"
#include "triangle.h"
#include "WrongFigure.h"
#include "WrongFigure2.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    try {
        Triangle treug(10, 20, 30, 50, 60, 70, "�����������: ");
        treug.print();
        Right_triangle ritr(10, 20, 30, 30, 60, "������������� �����������: ");
        ritr.print();
        Isosceles_triangle istr(10, 20, 70, 40, "�������������� �����������: ");
        istr.print();
        Equilateral_triangle eqtr(30, "�������������� �����������: ");
        eqtr.print();
        Quadrangle qudgle(10, 20, 30, 40, 60, 120, 60, 120, "��������������: ");
        qudgle.print();
        Rectangle recgle(10, 20, "�������������: ");
        recgle.print();
        Square square(20, "�������: ");
        square.print();
        Parallelogram prll(20, 30, 60, 120, "��������������: ");
        prll.print();
        Rhombus rhombus(30, 60, 120, "����: ");
        rhombus.print();
    }
    catch (WrongFigure& e)
    {
        std::cerr << e.what();
    }
    catch (WrongFigure2& e)
    {
        std::cerr << e.what();
    }
}

