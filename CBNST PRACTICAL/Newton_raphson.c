#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x-x-11
#define df(x) 3*x*x-1  //derivative of a function
void fun(int a){
    for(int i=0;i<a;i++){
        printf("-");
    }
    printf("\n");
}
int main(){
    int i=0;
    float x0,x1;
    float f0,f1,df0;
    printf("enter the value of x0"); //here we on only take one guess value
    scanf("%f",&x0);
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
        printf("the number of iteration->%d\n",i);
        printf("root is-->%.4f\n",x1);
        fun(60);
    }while(fabs(f1)>e);
    return 0;
}