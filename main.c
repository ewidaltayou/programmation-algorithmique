#include "bibliotheque.h"
#include <stdio.h>
#include <math.h>
int main(){
    printf("BIENVENUE DANS LE DEVOIR DE TAYOU DJOM EWIDAL DARIOLE\n");
    int reponse;
do{
    printf("\n");
    printf("que voulez vous faire?\n");
    printf("saisissez 1 pour calculer le facoriel\n");
    printf("saisissez 2 pour calculer la puissance d un nombre\n");
    printf("saisissez 3 pour permuter deux nombres\n");
    printf("saisissez 4 pour determiner si un nombre est premier\n");
    printf("saisissez 5 pour calculer une equation de second degre\n");
    printf("saisissez 6 pour calculer la distance entre deux points\n");
    printf("saisissez 7 pour quitter mon programme\n");
    scanf("%d",&reponse);
    switch(reponse)
    {
          
         case 1:  
            {
               int nombre;
             do{
                 printf("entrez un nombre positif");
                 scanf("%d",&nombre);
             }while(nombre<0);
             int s=fact(nombre);
             printf("le factoriel de %d vaut %d",nombre,s);
            }
        
            break;
         case 2:
               
                int nombre,resultat,puissance;
                printf("entrez un nombre");
                scanf("%d",&nombre);
                do{
                     printf("entrez une puissance positif");
                     scanf("%d",&puissance);
               }while(puissance<0);
               resultat=power(nombre,puissance);
               printf("le resultat est:%d",resultat);
               
               break;
         case 3:
              {
                int a,b;
                printf("entrez vos deux nombres a permuter:");
                scanf("%d%d",&a,&b);
                permutation(&a,&b);
                printf("vos nombres permutes sont %d,%d",a,b);
                break;
              }
              
         case 4:
              {
                int nombre;
               do{
              printf("entrez un nombre positif");
              scanf("%d",&nombre);
              }while(nombre<0);
              if(nombrepremier(nombre))
              printf("le nombre %d est premier",nombre);
              else
              printf("le nombre %d est premier",nombre);
            break;
              }
              
         case 5:
                {
                    double a,b,c;
                    printf("entrer la valeur de a:\n");
                    scanf("%lf",&a);
                    printf("entrer la valeur de  b:\n");
                    scanf("%lf",&b);
                    printf("entrer la valeur de  c:\n");
                    scanf("%lf",&c);
                    equation(a,b,c);
                    break;
                }
                
         case 6:
              {
                Point p1,p2;
                double distance,a,b,c,d;
                printf("saisir l'abssice du premier point \n");
                scanf("%lf",&a);
                printf("saisir l'ordonnee du premier point \n");
                scanf("%lf",&b);
                printf("saisir l'abssice du deuxieme point \n");
                scanf("%lf",&c);
                printf("saisir l'ordonnee du deuxieme point \n");
                scanf("%lf",&d);
                p1.x=a;
                p1.y=b;
                p2.x=c;
                p2.y=d;
                distance=distancepoint(p1,p2);
                printf("la distance entre les deux points est %.3lf\n",distance);
                 break;
              }
         case 7:
             printf("programme fermer\n");
             break;
             
         default:
              printf("valeur invalide.veillez entrez une valeur incoreect");
               break;
    }
}while(reponse!=7);
}