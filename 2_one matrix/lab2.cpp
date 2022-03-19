#include <stdio.h>
#include <conio.h>
int main()
{
 int m1[10][10],m2[10][10],m3[10][10]= {0},r1,c1,r2,c2,i,j,k;
 char ch;
askinput:
 printf("enter row and column of the first and second matrix.\n");
 scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
 if(c1!=r2)
 {
 printf("Matrix multiplication can't be performed.\n");
 }
 else
 {
 printf("Enter first Zero one matrix of order %d*%d.\n",r1,c1);
 for(i=0; i<r1; i++)
 {
 for(j=0; j<c1; j++)
 {
 scanf("%d",&m1[i][j]);
 }
 }
 printf("Enter second Zero one matrix of order %d*%d.\n",r2,c2);
 for(i=0; i<r2; i++)
 {
 for(j=0; j<c2; j++)
 {
 scanf("%d",&m2[i][j]);
 }
 }
 for(i=0; i<r1; i++)
 {
 for(j=0; j<c2; j++)
 {
 for(k=0; k<c1; k++)
 {
 m3[i][j] = m3[i][j] || (m1[i][k] && m2[k][j]);
 }
 }
 }
 }
 printf("The final matrix after multiplication of two matrix is;\n");
 for(i=0; i<r1; i++)
 {
 for(j=0; j<c2; j++)
 {
 printf("%d\t",m3[i][j]);
 }
 printf("\n");
 }
askagain:
 printf ("\nDo you want to repeat the operation?: Y to repeat or n/N to end the program: ");
 scanf (" %c", &ch);
 if(ch == 'y' || ch == 'Y')
 {
 goto askinput;
 }
 else if(ch == 'n' || ch == 'N')
 {
 return 0;
 }
 else
 {
 printf("\nPlease enter either y/Y to repeat the program or n/N to end the program.\n");
 goto askagain;
 }
 getch();
 return(0);
}