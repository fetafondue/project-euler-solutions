#include <iostream>
#include "utils/timer.cpp"

bool isDivisible(int n);

int main()
{
    Timer t;
    int ans = 20;
    while (!isDivisible(ans))
    {
        // has to be a multiple of 20
        ans += 20;
    }
    
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << ans << '\n';
    return 0;
}

bool isDivisible(int n)
{
    for (int i=2;i<=20;i++)
    {
        if (n % i != 0)
            return false;
    }
    return true;
}