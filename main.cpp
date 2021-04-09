#include <iostream>

extern const int a, b, c, d;

int main()
{
    int kub[3][3][3];
    int *prt;
    int f = 22;
    float ans = (float) a * ((float) b + ((float) c /(float) d));
    std::cout << ans << "\n";
    std::cout << ((f > 21) ? (f - 21) * 2 : f - 21);
    return 0;
}