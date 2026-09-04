#include<stdio.h>
#include<math.h>
int squre(int x){
   if(x==1||x==0){
    return pow(5,(5-3));
   }
   else{
    return  pow(x,(x-3));
   }

}
int add(int  y ){
   if(y==1||y==0){
      return 1;
   }
   else{
   return add(y)+squre(y);
}
}
int main(){
   int n;
   scanf("%%d",&n);
   printf("%d",add(n));
}