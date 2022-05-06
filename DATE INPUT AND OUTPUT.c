#include <stdio.h>

int main()
{
    char x[9];
    scanf("%s ", x );

    printf("%c%c/%c%c/%c%c\n", x [3], x [4], x [0], x [1], x [6], x [7]);
    printf("%c%c/%c%c/%c%c\n", x [6], x [7], x [3], x [4], x [0], x [1]);
    printf("%c%c-%c%c-%c%c\n", x [0], x [1], x [3], x [4], x [6], x [7]);

    return 0;
}
