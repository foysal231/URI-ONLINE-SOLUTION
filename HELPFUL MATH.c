#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,l,temp;
    char s[100];
    l=strlen(s);
    scanf("%s",s);
    l=strlen(s);
    for (i=0;i<l;i+=2)
    {
        for (j=0;j<l-1;j+=2)
            if(s[j]>s[j+2])
        {
            temp = s[j];
            s[j] = s[j+2];
            s[j+2] = temp;
        }
    }
    printf ("%s",s);

}



