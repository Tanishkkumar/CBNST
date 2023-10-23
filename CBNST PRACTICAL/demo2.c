#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.0001
#define f(x) pow(x,3)-x-1
#define df(x) 3*x*x -1
int main(){
    float x0,x1,x2,f0,f1,f2,df0;
    int i=0;
    printf("enter the expected root value in the field\n");
    scanf("%f%f",&x0,&x1);

    //bisection
   /*
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/(float)2;
        f2=f(x2);
        if((f0*f2)<0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("the number of iteration in the field:::%d\n",i);
        printf("the root of the equation is::%f",x2);
    }while(fabs(f2)>e);
    */

    //regula falsi
    /*
    do{
        f0=f(x0);
        f1=f(x1);
        f2=f(x2);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        if(f0*f2)<0){
            x1=x2;
            f1=f2;
        }
        else{
            x0=x2;
            f0=f2;
        }
    }
    */

    //secant method
    /*
     do{
        f0=f(x0);
        f1=f(x1);
        x2=((x0*f1)-(x1*f0))/(f1-f0);
        f2=f(x2);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
    }
    */

    //newton rapson
    /*
    printf("enter the single root in the field\n");
    scanf("%d",&x0);
    do{
        f0=f(x0);
        df0=df(x0);
        x1=x0-(f0/df0);
        f1=f(x1);
        x0=x1;
        i++;
    }while(fabs(f1)>e);
    */

    //gauss eleimination
    /*
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            float factor=(float)arr[j][i]/arr[i][i];
            for(int k=i;k<=a;k++){
                arr[j][k]-=factor*arr[i][k];
            }
        }
    }

    for(int i=a-1;i>=0;i--){
        ptr[i]=arr[i][a];
        for(int j=i+1;j<a;j++){
            ptr[i]-=arr[i][j]*ptr[j];
        }
        ptr[i]/=arr[i][i];
    }
    */
    //gauss seidal method;

    /*
   while(iteration<max){
       cov=1;
       for(int i=0;i<a;i++){
           newsol=arr[i][a];
           for(int j=0;j<a;j++){
               if(j!=i){
           newsol[i]= arr[i][j]*g[i];
               }
           }
       
         newsol[i]/=arr[i][i];
       if(fabs(newsol[i]-g[i])>e){
           cov=0;
       }
       g[i]=newsol[i];
       }
       iteration++;
       if(cov){
           break;
       }
   }
   */

   //gauss jordan method
   /*
   for(int i=o;i<a;i++){
       pivot=arr[i][i];
       prow=i;
      for(int j=i+1;j<a;j++){
          if(arr[j][i]>pivot){
              pivot=arr[j][i];
              prow=j;
          }
      }

      //swapping
      for(int j=0;j<=a;j++){
          float temp=arr[i][j];
          arr[i][j]=arr[prow][j];
          arr[prow]=temp;
      }

      float scale=arr[i][i];
      for(int j=i;j<=a;j++){
          arr[i][j]/=scale;
      }

      for(int j=0;j<a;j++){
          if(j!=i){
          float flor=arr[j][i];
          for(int k=i;k<=a;k++){
            arr[j][k]-=flor*arr[i][k];
          }
          }
      }
      
   }
   */

    return 0;
}