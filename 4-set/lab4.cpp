#include <iostream>
using namespace std;
int a[50], b[50], u[50],d[50], n1, n2, i, j,k,c;

//logic for union
void find_union(){
cout << "The union of set A and B is: {";
    for (i = 0; i < n1; i++)
    {
        u[i]=a[i];
    }
    int k=n1;
    
    for (i = 0; i < n2; i++)
    {
        c = 1;
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                c = 0;
                break;
            }
        }
         if (c == 1)
            {
                u[k]=b[i];
                k++;
            }
        
    }
    //print value
        for(i=0;i<k;i++){
            cout<<u[i]<<",";
        }
    cout << "}";


}

//logic for intersection
void find_intersection(){
 cout << "\nThe intersection of the A and B is: {";
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ,";
            }
        }
    }
    cout << "}" << endl;

}

//logic for diffference
void find_difference(){
    
    cout << "The difference of A and B is: {";
    
    for (i = 0; i < n1; i++)
    {
        k = 0;
        c = 1;
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                c = 0;
                break;
            }
        }
         if (c == 1)
            {
                d[k]=a[i];
                k++;

                
            }
    } 
//print value
        
            cout<<d[k]<<",";
    
    cout << "}";

}

//logic for cartesian
void find_cartesian(){
cout << "The cartesian product of A and B is: {";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << "(" << a[i] << " " << b[j] << "),";
        }
    }
    cout << "}";
}


int main()
{
    int choice;
    char answer;
    
    // Number of Element of set A
    cout << "Enter number of element of set A: ";
    cin >> n1;
    
    // Number of Element of set B
    cout << "Enter number of element of set B: ";
    cin >> n2;
    
    // Elements of set A
    cout << "Enter elements of set A: ";
    for (i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    
    // Elements of set B
    cout << "Enter elements of set B: ";
    for (i = 0; i < n2; i++)
    {
        cin >> b[i];
    }


do
 {
 cout << "Choose operation to perform:\n";
 cout << "1. Union\n";
 cout << "2. Intersection\n";
 cout << "3. Difference\n";
 cout << "4. Cartesian product\n";
 cout << ("\nEnter your choice\n");
 cin >> choice;
 switch (choice)
 {
 case 1:
 find_union();
 break;
 case 2:
 find_intersection();
 break;
 case 3:
 find_difference();
 break;
 case 4:
 find_cartesian();
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





