#pragma once
#include <iostream>
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
    int no_real_root();
    int count_first_root();
    int count_second_root();
    int count_the_only_root();
};
void solution();