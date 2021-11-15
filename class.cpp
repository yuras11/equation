#include "class.h"
Equation::Equation(int a, int b, int c): m_a(a), m_b(b), m_c(c) {}
int Equation::discriminant()
{
    double discr;
    discr = (m_b * m_b) - (4 * m_a * m_c);
    return discr;
}
void Equation::no_real_root()
{
    cout << "The equation doesn't have any real roots" << endl;
}
double Equation::count_first_root(Equation f)
{
    double x_1;
    x_1 = (-1*m_b - sqrt(f.discriminant())) / 2 * m_a;
    return x_1;
}
double Equation::count_second_root(Equation f)
{
    double x_2;
    x_2 = (-1*m_b + sqrt(f.discriminant())) / 2 * m_a;
    return x_2;
}
double Equation::count_the_only_root(Equation f)
{
    double x_;
    x_ = -1*m_b / 2 * m_a;
    return x_;
}
void solution()
{
    int a, b, c;
    cout << "This program is to show you roots of an equation of the form: " << endl;
    cout << "ax^2 + bx + c = 0" << endl;
    cout << "Enter \"a\": ";
    cin >> a;
    cout << "Enter \"b\": ";
    cin >> b;
    cout << "Enter \"c\": ";
    cin >> c;
    Equation f(a,b,c);
    if(f.discriminant() < 0)
    {
         f.no_real_root();
    }
    if(f.discriminant() == 0)
    {
        cout << "The equation has the only root: " << endl;
        cout << f.count_the_only_root(f) << endl;
    }
    if(f.discriminant() > 0)
    {
        cout << "The first root is: " << endl;
        cout << f.count_first_root(f) << endl;
        cout << "The second root is: " << endl;
        cout << f.count_second_root(f) << endl;
    }
}
