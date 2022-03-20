#include <iostream>
using namespace std;
long res;
int mod_recursive(int a, int b,int m)
{

    if (b == 0)
    {
        return 1;
        
    }
    long res = mod_recursive(a, b / 2,m);
    if (b & 1)
    {
        return a * (res * res)%m;
    }
    else
    {
        return (res * res) % m;
    }
}
int main()
{
    int a, b,m;
    cout << "Enter base number: " << endl;
    cin >> a;
    cout << "Enter power : " << endl;
    cin >> b;
    cout << "Enter value of m : " << endl;
    cin>>m;
    cout<<"The value for "<<a<<" ^ "<<b<<" mod "<<m<<" = "<< mod_recursive(a, b,m);
    return 0;
}