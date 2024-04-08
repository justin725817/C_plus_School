#include <bits/stdc++.h>
using namespace std;

double cube(int num)
{
    return cbrt(num);
}
int Sum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int count = 0;
    int num = 0;
    while (count < 7)
    {
        if (cube(num) == Sum(num))
        {
            cout << num << endl;
            count++;
        }
        num++;
    }
    return 0;
}