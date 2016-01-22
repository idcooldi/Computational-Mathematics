#include <iostream>

#include <iomanip>

#include <cmath>

#include <conio.h>

using namespace std;// 1 вариант ( 1.07; 0.211 ) ( 2.70; 0.489 ) ( 7.20 ; 0.712 ) ( 9.07 ; 0.66 )

const int N = 4 ;

void func(double x[N], double y[N]){

double a[N] = {1.07, 2.70, 7.20, 9.07};

double b[N]= {0.211, 0.489, 0.712, 0.66};

for (int i=0 ; i<N ; i++) {

x[i]=a[i];

y[i]=b[i];

}

}

double LinInt(double x0, double x1, double y0, double y1, double z) {

double a0,a1 ;

a1 = ( y1 - y0 )/( x1 - x0 ) ; a0 = y0 - x0 * a1 ;

return a0 + z * a1;

}

int main() {

double x[N], y[N], z;

cout << " " << "x" << " " << "y" << endl ;

for ( int i=0 ; i<N ; i++ ) {

func(x,y);

cout << " " << x[i] << " " << y[i] << endl ;

}

z = 4.5 ;

cout << fixed << " " << z << " " << "y=" << LinInt(x[3],x[4],y[3],y[4],z) << endl;

getch();

return 0;

}
