#include<stdio.h>
int main(){
    int i,ch,j,k,m;
    printf("Type Example: 1+1 and Press Enter\n");
    printf("Enter your value :");
    scanf("%d %lc %d",&i,&ch,&j);
    ch=='+' || '-'|| '*' || '/' ||'%';
        if(i && ch=='+' && j){
        m=i+j;
        printf("%d %lc %d = %d\n",i,ch,j,m);

    }else if(i && ch=='-' && j){

        m=i-j;
        printf("%d %lc %d = %d\n",i,ch,j,m);

    }else if(i && ch=='*' && j){

        m=i*j;
        printf("%d %lc %d = %d\n",i,ch,j,m);

    }else if(i && ch=='/' && j){

        m=i/j;
        printf("%d %lc %d = %d\n",i,ch,j,m);

    }else if(i && ch=='%' && j){
        m=i%j;
        printf("%d %lc %d = %d\n",i,ch,j,m);

    }else{
        printf("Error:Internal problems,Please Contact admin...\n");
    }

    return 0;
}



