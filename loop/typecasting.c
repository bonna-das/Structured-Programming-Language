#include<stdio.h>//typecasting means converting datatype
int main(){
    char ch;
    int i;
    for( i=65;i<=96;i++){
        printf("%d->",i);
        ch=(char)i;        //rules(new variable=(changed datatype)previous variable)
        printf("%c\n",ch);
    
    }
}