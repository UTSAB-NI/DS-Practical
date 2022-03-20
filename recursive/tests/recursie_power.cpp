#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return (a * power(a, b - 1));
    }
}

    int main()
    {
        int a, b;
        cout<<"Enter base value: "<<endl;

        cin >> a;
        cout<<"Enter power: "<<endl;
        cin >> b;

cout<<"The value for "<<a<<" ^ "<<b<<" = "<<power(a,b);


    }