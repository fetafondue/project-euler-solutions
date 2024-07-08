#include <iostream>
#include "utils/timer.cpp"

int main()
{
    Timer t;
    int ans = 2;
    int a=1, b=2, fib=3;
    while (fib < 4000000)
    {
        fib = a + b;
        if (fib % 2 == 0)
            ans += fib;
        a = b;
        b = fib;
    }
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << ans << '\n';
    return 0;
}