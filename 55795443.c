#include <stdio.h>

int main(void) 
{
    int T;
    scanf("%d",&T);
    int cupcakes;
    while(T)
    {
        scanf("%d",&cupcakes);
        if(cupcakes>2)
        {
            printf("%d\n",(cupcakes/2)+1);
        }
        else
        {
            printf("%d\n",cupcakes);
        }
        T--;
    }
	return 0;
}

