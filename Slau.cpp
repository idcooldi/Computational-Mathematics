#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std; 
const int m=4;
void Gauss(const double A[][m],double f[],double x[],double &det)
{
double a[m][m+1],c;
for (int i=0; i<m; i++)
{for (int j=0; j<=m; j++)
if (j!=m) a[i][j]=A[i][j];
else a[i][j]=f[i];}
det=1.0;
for(int k=0;k<m;k++)
{ det*=a[k][k];
for(int i=k+1;i<m;i++){
c=a[i][k]/a[k][k];
a[i][k]=0;
for (int j=k+1; j<=m;j++)
a[i][j]=a[i][j]-c*a[k][j];
}}
x[m]=a[m][m+1]/a[m][m];
for(int i=m-1;i>=0;i--){
double sum=0;
for(int j=i+1;j<m;j++)
sum+=a[i][j]*x[j];
x[i]=(a[i][m]-sum)/a[i][i];
}
cout<<" Ishodnaya matrica [a]: "<<endl;
for(int i=0;i<m;++i,cout << endl)
for(int j=0;j<m;++j)
cout << fixed << a[i][j]<<" ";
cout << endl;
}
int main()
{
double A[m][m]={{-10.0,2.0,2.0,-5},{-4.0,1.0,4.0,4},{3.0,0.0,4.0,1},
{2,2,4,2}};
double b[10]={-4,5,4,6};
double x[10],B[10],det;
cout << " Ishodnaya matrica [A]: " << endl;
for(int i=0;i<m;++i,cout << endl)
for(int j=0;j<m;++j)
cout << fixed << A[i][j] << " ";
cout << endl;
Gauss(A,b,x,det);
cout << " Reshenie SLAU: " << endl;
for(int j=0;j<m;j++)
{cout << " " << x[j] << endl;}
cout << " det'= " << det << endl;
getch();
return 0;
}
