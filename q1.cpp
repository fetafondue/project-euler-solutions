#include <iostream>
#include "utils/timer.cpp"

int main()
{
    Timer t;
    int ans = 0;
    for (int i=0;i<1000;i++)
    {
        if (i % 3 == 0)
            ans += i;
        if (i % 5 == 0)
            ans += i;
        if (i % 15 == 0)
            ans -= i;
    }
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << ans << '\n';
    return 0;
}