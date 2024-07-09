#include <iostream>
#include "utils/timer.cpp"

bool isPalindrome(int n);

int main()
{
    Timer t;
    int ans = -1;
    for (int i=999;i>=100;i--)
    {
        for (int j=999;j>=100;j--)
        {
            if (i*j>999999)
                continue;
            else if (isPalindrome(i*j))
            {
                ans = std::max(i*j, ans);
            }
        }
    }
    
    
    std::cout << "Time elapsed: " << t.elapsed() << " seconds\n";
    std::cout << "Answer: " << ans << '\n';
    return 0;
}

// reverse the number and see the equality
bool isPalindrome(int n)
{
    int rev = 0;
    int number = n;
    while (number > 0)
    {
        rev = (10 * rev) + (number % 10);
        number /= 10;
    }
    return n == rev;
}