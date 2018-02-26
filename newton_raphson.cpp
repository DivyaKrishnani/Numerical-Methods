//Implementation of Newton Raphson Method to find roots of the equation - f(x) = x-tan(x)

#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double f(double t){
    double m = t-tan(t);
    return m;
}

double fd(double td){
    double m = - tan(td) * tan(td);
    return m;
}
int main(){
    int n,i,j;
    n=30;
    double x[n];
    ///int f = exp(-t) - t;
    //cout << t;
    x[0]=4.5;
    for(i=1;i<n;i++){
        
        x[i] = x[i-1] - (f(x[i-1])/fd(x[i-1]));
        cout << "x[" << i << "] " << setprecision(7) << x[i] << endl;
        
        //cout << "Relative error " << setprecision(7) << ((x[i] - x[i-1])/x[i]) << endl;
    }

    //cout << f(0.5) << " " << fd(0.5) << endl;
    return 0;
}
