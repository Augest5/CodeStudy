#include <iostream>
#include <cmath> //数学头文件
using namespace std;

int main()
{
    // 数字定义
    short  s = 10;
    int    i = -1000;
    long   l = 100000;
    float  f = 230.47;
    double d = 200.374;

    // 数学运算
    cout << "sin(d) :" << sin(d) << endl;
    cout << "abs(i)  :" << abs(i) << endl;//绝对值
    cout << "floor(d) :" << floor(d) << endl;//小于等于的最大整数
    cout << "sqrt(f) :" << sqrt(f) << endl;//平方
    cout << "pow( d, 2) :" << pow(d, 2) << endl;//d的m次方

    return 0;
}