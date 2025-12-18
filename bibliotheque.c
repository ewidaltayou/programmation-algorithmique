#include "bibliotheque.h"
#include <stdio.h>
#include <math.h>
//fonction factionnelle
unsigned int fact (unsigned int value){
    unsigned int result=1;
    while(value>1){
        result *=value;
        value--;
    }
    return result;
}
// foction puissance
int power(int value,unsigned int pow){
    if(pow==0) return 1;
    if(pow==1) return value;
    int accumulateur=1;
    while(pow>0){
        accumulateur*=value;
        pow--;
    }
  return accumulateur;
}
//fonction pour permuter
void permutation(int*a,int*b){
   int tmp=*a;
   *a=*b;
   *b=tmp;
}
//equation de second degre
void equation(double a,double b,double c){
    double delta,x1,x2;
    if(a==0){
        printf("ce n'est pas une equation de second degre");
        
    }
     delta=b*b-4*a*c;
    if(delta>0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("nous avons deux solutions reelles \n");
        printf("x1=%.3lf\n",x1);
        printf("x2=%.3lf\n",x2);
    }
    else if(delta==0){
        x1=-b/(2*a);
        printf("une solution reelle double \n");
        printf("x=%3lf\n",x1);
    }
    else
      printf("aucune solution reelle\n");
}
//fonction pour le nombre premier
int nombrepremier(unsigned int n){
 int i;
 if(n<=0) 
   return 0;
for(i=2;i<=n/2;i++){
    if(n%i==0)
      return 0;
}
 return 1;
}
// fonction qui calcule la distance entre deux points
double distancepoint(Point p1,Point p2)
{
 double x=p2.x-p1.x;
 double y =p2.y-p1.y;
 return sqrt(x*x+y*y);
}
