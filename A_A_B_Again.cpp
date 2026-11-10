#include<iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> t;
   while(t--)
    {
        cin >> n;
        int A = 0, B = 0;
        A = n / 10;
        B = n % 10;
        cout << A + B << endl;
    }
    return 0;
}