#ifndef _MY_MATH_LIB_H
#define MY_MATH_LIB_H
typedef struct{
    double x;
    double y;
} Point;
unsigned int fact(unsigned int value);
int power(int value,unsigned int pow);
void permutation(int*a,int*b);
int nombrepremier(unsigned int n);
void equation(double a,double b,double c);
double distancepoint(Point p1,Point p2);
#endif