#include "myMath.h"

double Exp(int x) {
    double e=2.71828;
    double ans=e;
 while(x>1)
    {
        ans=ans*e;
        x--;
    }
    
return ans;

}
double Pow(double x , int y) {
    if(y==0)
    return 1;
double tmp=x;
while(y>1){
tmp=tmp*x;
y--;
}
return tmp;

    return x-y;

}