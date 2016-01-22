#include <iostream>

#include <iomanip>

#include <cmath>

#include <conio.h>

using namespace std;

const int N = 4 , M = 10;

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

double x[N], y[N], z[M], h;

cout << " " << "x" << " " << "y" << endl ;

for ( int i = 0 ; i < N ; i++ )

{ func(x,y);

cout << fixed << " " << x[i] << " " << y[i] << endl;

}

cout << " " << "z" << " " << " L1" << endl;

h = ( x[N-1] - x[0] ) / ( M-1 ) ;

cout << " h=" << h << endl;

for ( int j=0 ; j<=M ; j++ ) {

z[j] = x[0] + j*h;

for ( int i=0 ; i<N ; i++ ) {

if ( (x[i] <= z[j]) && (z[j] <= x[i+1]) )

cout << fixed << " " << z[j] << " " << LinInt(x[i],x[i+1],y[i],y[i+1],z[j]) << endl ;

}}

getch();

return 0;

}
