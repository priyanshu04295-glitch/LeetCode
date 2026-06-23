#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b)
{
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    int n = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);

    char *ans = (char *)malloc(n + 2);
    ans[n + 1] = '\0';

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        ans[n--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    return ans + n + 1;
}

int main()
{
    char a[100], b[100];

    printf("Enter first binary number: ");
    scanf("%s", a);

    printf("Enter second binary number: ");
    scanf("%s", b);

    char *result = addBinary(a, b);

    printf("Sum = %s\n", result);

    return 0;
}