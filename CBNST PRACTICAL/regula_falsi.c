#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001   //minimum price value 
#define f(x) (x*log10(x) -1.2)   //equation here we are using log base 10
int main(){
   float x0,x1,x2;
   float f0,f1,f2;
   int i=0;
   printf("etner the guess value in the field\n");
   scanf("%f%f",&x0,&x1);
   do{
       f0=f(x0);
       f1=f(x1);
       f2=f(x2);
       x2=((x0*f1)-(x1*f0))/(f1-f0);
       if((f0*f2)<0){
           x1=x2;
           f1=f2;
       }
       else{
           x0=x2;
           f0=f2;
       }
       i++;
       printf("the number of iteration in the field is::%d\n",i);
       printf("the roots of the equation is::%f\n",x2);
       
   }while(fabs(f2)>e);
     
    return 0;
}