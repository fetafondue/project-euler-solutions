#include <iostream>
#include "utils/timer.cpp"

int main()
{
    Timer t;
    long long numerator = 600851475143;
    int prime = 2;
    while (numerator != 1)
    {
        while (numerator % prime == 0)
            numerator /= prime;
        if (numerator == 1)
            break;
        prime++;
    }
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << prime << '\n';
    return 0;
}