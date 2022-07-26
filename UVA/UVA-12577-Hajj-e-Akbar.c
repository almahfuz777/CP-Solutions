#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];
    int count=0;
    while(scanf("%s",&str))
    {
        if (strcmp(str,"Hajj")==0){
            printf("Case %d: Hajj-e-Akbar\n",++count);
        }
        else if (strcmp(str,"Umrah")==0){
            printf("Case %d: Hajj-e-Asghar\n",++count);
        }
        else if (strcmp(str,"*")==0){
            break;
        }
    }
    return 0;
}