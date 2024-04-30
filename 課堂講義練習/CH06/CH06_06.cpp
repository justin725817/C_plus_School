#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unsigned 只有 0 和正數
    for (unsigned int counter{1}; counter <= 20; ++counter)
    {
        cout << setw(10) << (1 + rand() % 6);
        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
}