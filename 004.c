#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a==b && b==c && c == a)
    printf("%d원", 10000+(1000*a));
    
    else if (a==b || a==c )
    printf("%d원",1000+(100*a));
    
    else if (b==c )
    printf("%d원",1000+(100*b));
    
    else
        if(a>b || a>c)
            printf("%d", a*100);
            
        else if(a<b || c<b)
            printf("%d", b*100);
        else
            printf("%d",c*100);
    return 0;
}
