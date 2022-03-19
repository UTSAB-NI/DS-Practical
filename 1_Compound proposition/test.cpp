#include <iostream>
#include<math.h>
using namespace std;
int a[10], b[10], c[10], i, n;
void find_OR()
{
 cout << "The OR operation of A and B is:\n";
 cout << "A\tB\tOR\n";
 for (i = 0; i < n; i++)
 {
 if (a[i] + b[i] == 2)
 {
 c[i] = 1;
 cout << a[i] << "\t" << b[i] << "\t" << c[i];
 }
 else
 {
 c[i] = a[i] + b[i];
 cout << a[i] << "\t" << b[i] << "\t" << c[i];
 cout << "\n";
 }
 }
 cout << "\n";
}
void find_AND()
{
 cout << "The AND operation of A and B is:\n";
 cout << "A\tB\tAND\n";
 for (i = 0; i < n; i++)
 {
 c[i] = a[i] * b[i];
 cout << a[i] << "\t" << b[i] << "\t" << c[i];
 cout << "\n";
 }
 cout << "\n";
}
void find_NOT()
{
 cout << "The NOT operation of B is:\n";
 cout << "B\tNOT\n";
 for (i = 0; i <= 1; i++)
 {
 c[i] = 1 - b[i];
 cout << b[i] << "\t" << c[i];
 cout << "\n";
 }
 cout << "\n";
}
void find_IMPLICATION()
{
 cout << "The implication of A and B is:\n";
 cout << "A\tB\tImplication\n";
 for (i = 0; i < n; i++)
 {
 if (a[i] == 1)
 {
 c[i] = b[i];
 cout << a[i] << "\t" << b[i] << "\t" << c[i];
 }
 else if (a[i] + b[i] == 0)
 {
 c[i] = 1;
 cout << a[i] << "\t" << b[i] << "\t" << c[i];
 }
 else
 {
 c[i] = b[i];
 cout << a[i] << "\t" << b[i] << "\t" << c[i];
 }
 cout << "\n";
 }
}
int main()
{
 int j, m, choice, numberOfCol,numberOfRow,label;
 char answer;
 cout<<"enter number of input variable"<<endl;
cin>>numberOfCol;
numberOfRow=pow(2,numberOfCol);

for (int i = 0; i < numberOfCol; i++)
    {
        label=1;
        std::cout << "Enter values for column " << label << std::endl;
       
        for (int j = 0; j < numberOfRow; j++)
        {
             label++;
            cin>>a[j];
           

        }
    }

 do
 {
 cout << "Choose operation to perform:\n";
 cout << "1. OR\n";
 cout << "2. AND\n";
 cout << "3. NOT\n";
 cout << "4. Implication\n";
 cout << ("\nEnter your choice\n");
 cin >> choice;
 switch (choice)
 {
 case 1:
 find_OR();
 break;
 case 2:
 find_AND();
 break;
 case 3:
 find_NOT();
 break;
 case 4:
 find_IMPLICATION();
 break;
 default:
 cout << "invalid choice";
 break;
 }
 cout << "Do u want to check another proposition? (y/n)";
 cin >> answer;
 answer = tolower(answer);
 }
 while (answer == 'y');
}
