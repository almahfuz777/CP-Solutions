#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t,count=0;
    cin >> t;
    char s[10];
    while(t--)
    {
        scanf("%s",s);
        if(strlen(s)==5){
            for(int i=0;i<5;i++){
                if(s[i]=='t'||(s[i]=='h')||s[i]=='r'||s[i]=='e')count++;
            }
            if(count>=4) printf("3\n");count=0;
        }
        else if(strlen(s)==3){ 
            if((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e'))
                printf("1\n");
            else if((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o'))
                printf("2\n");
        }
    }
    
    return 0;
}