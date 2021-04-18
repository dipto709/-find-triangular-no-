#include<stdio.h>
main()
{
    int n,i,f=0,sum = 0;
    scanf("%d",&n);    for(i=1;i<=n;i++){
        sum = sum + i;
        
    if(sum == n){
        f=1;
            break;
            }
        }
        if(f==1)           printf("YES\n");
        
        else printf("NO\n");
        return 0;
        }
        