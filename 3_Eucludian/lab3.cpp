#include <iostream>
using namespace std;
int a,b,x,y,r;
void gcd()
{

 x=a;
 y=b;
 while (y!=0)
 {
 r=x % y;
 x=y;
 y=r;
 }

 cout << "GCD(" << a << ", " << b << ") = " << x << endl;
}
int gcdExtended(int a, int b, int *x, int *y){
 if ( a == 0){
 *x=0;
 *y=1;
 return b;
 }
 int x3 , y3;
 int hcf =gcdExtended(b%a, a, &x3, &y3);

 *x = y3 - (b/a) * x3;
 *y = x3;
 return hcf;
}
int main()
{
 cout<<"Enter First number 'a':"<<endl;
 cin>>a;
 cout<<"Enter Second number 'b':"<<endl;
 cin>>b;
 gcd();
 cout << "The extended GCD(" << a << ", " << b << ") = " << gcdExtended(a,b, &x, &y) <<
endl;
}