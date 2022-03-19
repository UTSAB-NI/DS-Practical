#include <iostream>
using namespace std;
int main()
{
int a[50],b[50],c[50],n1,n2,i,j,k=0,l=0;
//Number of Element of set A
cout<<"Enter number of element of set A: ";
cin>>n1;
//Number of Element of set B
cout<<"Enter number of element of set B: ";
cin>>n2;
//Elements of set A
cout<<"Enter elements of set A: ";
for(i=0;i<n1;i++){
cin>>a[i];
}
//Elements of set B
cout<<"Enter elements of set B: ";
for(i=0;i<n2;i++){
cin>>b[i];
}
//logic of union
cout<<"The union of set A and B is: {";
for(i=0;i<n1;i++){
cout<<a[i]<<",";
}
for (i=0;i<n2;i++){
for(k=0;k<n1;k++){
if(b[i]==a[k]){
break;
}
}
if(k==n1){
cout<<b[i]<<",";
}
}
cout<<"}";
//intersection
cout<<"\nThe intersection of the A and B is: {";
for(i=0;i<n1;i++)
{
for(l=0;l<n2;l++)
{
if(a[i]==b[l])
{
cout<<a[i]<<" ,";
}
}
}
cout<<"}"<<endl;;
// logic for cartesian product
cout<<"The cartesian product of A and B is: {";
for(int i=0;i<n1;i++)
{
for(int j=0;j<n2;j++)
{
cout<<"("<<a[i]<<" "<<b[j]<<"),";
}
}
cout<<"}";
return 0;
}