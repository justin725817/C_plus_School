#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int k = 0;
    for (int i = 2; i < 10000; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << setw(5) << i << " ";
            k++;
            if (k % 10 == 0)
            {
                cout << endl;
            }
        }
        count = 0;
    }
    cout << endl;
    cout <<"Total of"<<k <<"prime numbers between 1 and 10000"<< endl;
    return 0;
}