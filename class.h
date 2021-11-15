#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Equation
{
private:
    int m_a;
    int m_b;
    int m_c;
public:
    Equation(int a, int b, int c);
    int discriminant();
    void no_real_root();
    double count_first_root(Equation f);
    double count_second_root(Equation f);
    double count_the_only_root(Equation f);

};
void solution();