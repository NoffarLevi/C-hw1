#include "myMath.h"
//Pow&Exp

double Exp(int x) {
    double e=2.71828;
    double ans=e;
if(x>0)
{
            
     while(x>1)
    {
        ans=ans*e;
        x--;
    }
    
    return ans;

 }

 else if(x==0){
     return ans=1;
 }


 else {//x<0

      while(x<-1)
    {
        ans=ans*e;
        x++;
    }
    
    return 1/ans;

 }
}

double Pow(double x , int y) {
    if(y==0)
    return 1;
  
    else if(y>0){
        
    
    double tmpPo=x;
    while(y>1){
    tmpPo=tmpPo*x;
    y--;
    }
    return tmpPo;

    }

    else {//y<0
       double tmpNe=x;
    while(y<-1){
    tmpNe=tmpNe*x;
    y++;
    }
    return 1/tmpNe;


}   
    }
