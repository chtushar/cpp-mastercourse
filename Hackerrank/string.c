#include <ctype.h>
#include <stdio.h>

int main()
{

    char ch[100];

    fgets(ch, 100, stdin);

    int i = 0, count = 0;
    while (ch[i] != '\0')
    {
        if (isspace(ch[i]) || ch[i] == '\t' || ch[i] == '.' || ch[i] == ',' || ch[i] == ';')
        {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}