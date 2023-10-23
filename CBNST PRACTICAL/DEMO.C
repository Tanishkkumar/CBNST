#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001
#define f(x) pow(x,3)-x-1
#define df(x) 3*x*x -1
int main(){
    float x0,x1,f0,f1,df0;
    int i=0;
    float root;
    printf("enter the value of the expected root in the field\n");
    scanf("%f",&x0);
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
        root=x1;
    }while(fabs(f1)>e);
    printf("the total number of iteration in the field is::%d\n",i);
    printf("the root  of the equation is::%f",root);
}