#include <iostream>
#include "utils/timer.cpp"

bool isPrime(long x);

int main()
{
    Timer t;
    long ans = 0;
    int primeCount = 0;
    while (primeCount < 10001)
    {
        ans++;
        if (isPrime(ans))
        {
            primeCount++;
        }
    }
    
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << ans << '\n';
    return 0;
}

bool isPrime(long x)
{
    if (x<2)
        return false;
    for (long i=2;i<x;i++)
        if (x % i == 0) return false;
    return true;
}