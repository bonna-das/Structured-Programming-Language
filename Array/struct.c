#include<stdio.h>
#include<string.h>
int main(){
    int i;
    int n=5;
    
    struct student{
        int roll;
        float GPA;
        char name[100];
        
    };
    struct student s[5];
    for(i=0;i<5;i++){
        printf("Enter information:%d\n",i+1);
        printf("Enter Name:");
        scanf("%[^\n]",s[i].name);
        printf("Enter Roll:");
        scanf("%d",&s[i].roll);
        printf("Enter GPA:");
        scanf("%d",&s[i].GPA);
    }
    for(i=0; i<5;i++){int x;
        scanf("%d",&x);
        if(s[i]==x);
        printf("Details %d\n",i+1);
        printf("Name %s Roll %d GPA %2f\n ",s[i].name,s[i].roll,s[i].GPA);
    }

    

}