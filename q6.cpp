#include <iostream>
#include "utils/timer.cpp"

int main()
{
    Timer t;
    int ans = 0;
    int sumOfSquares = 0;
    int totalSum = 0;
    for (int i=1;i<=100;i++)
    {
        sumOfSquares += i*i;
        totalSum += i;
    }
    ans = (totalSum * totalSum) - sumOfSquares;
    
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << ans << '\n';
    return 0;
}