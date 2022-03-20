#include <iostream>
using namespace std;

// logic for power
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

// logic for mod recursive
long res;
int mod_recursive(int a, int b, int m)
{

    if (b == 0)
    {
        return 1;
    }
    long res = mod_recursive(a, b / 2, m);
    if (b & 1)
    {
        return a * (res * res) % m;
    }
    else
    {
        return (res * res) % m;
    }
}

// logic for binary search
int binary_search(int a[], int item, int s)
{
    if (s < 0)
    {
        return -1;
    }
    if (a[s] == item)
    {
        return s;
    }
    else
    {
        binary_search(a, item, s - 1);
    }
}

int main()
{
    int choice, i,a,b,m;
    char answer;
    do
    {
        cout << "Choose operation to perform:\n";
        cout << "1. Power(a^b)\n";
        cout << "2. Modular exponential(a^b mod m)\n";
        cout << "3. Linear search\n";
        cout << ("\nEnter your choice\n");
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter base value: " << endl;

            cin >> a;
            cout << "Enter power: " << endl;
            cin >> b;

            cout << "The value for " << a << " ^ " << b << " = " << power(a, b)<<endl;

            break;
        case 2:
            cout << "Enter base number: " << endl;
            cin >> a;
            cout << "Enter power : " << endl;
            cin >> b;
            cout << "Enter value of m : " << endl;
            cin >> m;
            cout << "The value for " << a << " ^ " << b << " mod " << m << " = " << mod_recursive(a, b, m)<<endl;
            break;
        case 3:
            int a[100], i, item, s, index;
            cout << "Enter size of array: " << endl;
            cin >> s;
            cout << "Enter elements of array: " << endl;
            // input elements of arary
            for (i = 0; i < s; i++)
            {
                cin >> a[i];
            }
            // output of array
            cout << "Array elements are: [";
            for (i = 0; i < s; i++)
            {
                cout << a[i] << "  ";
            }
            cout << "]" << endl;
            ;

            // input item to search
            cout << "Enter item to search in array: " << endl;
            cin >> item;
            index = binary_search(a, item, s);
            if (index == -1)
            {
                cout << "Item not found";
            }
            else
            {
                cout << "Item found at index " << index<<endl;
            }
            break;

        default:
            cout << "invalid choice";
            break;
        }

        cout << "Do you want to check another operation: " << endl;
        cin >> answer;
        answer = tolower(answer);
    } while (answer == 'y');
}
