// Watermalon-(brute force, math)	
#include<stdio.h>
int main()
{
        int n,c,d;
        scanf("%d",&n);
        if(n>=1 && n<=100){
            c=n%2;
       if(c==0 && n!=0 && n!=2){
            printf("YES\n");}
        else{
            printf("NO\n");
            }
        }
 
        return 0;
}
