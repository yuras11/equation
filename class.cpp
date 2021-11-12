#include "class.h"
#include <string>
Equation::Equation(int a, int b, int c): m_a(a), m_b(b), m_c(c) {}
int Equation::discriminant()
{
    double discr;
    discr = (m_b * m_b) - (4 * m_a * m_c);
    return discr;
}
int Equation::no_real_root()
{
    string s1 == "The equation doesn't have any real roots";
    return s1;
}
int Equation::count_first_root()
{
    Equation f;
    double x_1;
    x_1 = (-1*m_b - sqrt(f.discriminant())) / 2 * m_a;
    return x_1;
}
int Equation::count_second_root()
{
    Equation f;
    double x_2;
    x_2 = (-1*m_b + sqrt(f.discriminant())) / 2 * m_a;
    return x_2;
}
int Equation::count_the_only_root()
{
    double x_;
    x_ = -1*m_b / 2 * m_a;
    return x_;
}
void solution()
{
    Equation f(1,-3,2);
    if(f.discriminant() < 0)
    {
        cout << f.no_real_root() << endl;
    }
    if(f.discriminant() == 0)
    {
        cout << f.count_the_only_root() << endl;
    }
    if(f.discriminant() > 0)
    {
        cout << f.count_first_root() << endl;
        cout << f.count_second_root() << endl;
    }
}
