#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 51
void reverse_str(char *str, int len)
{
    int start = 0, end = len - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start++] = str[end];
        str[end--] = temp;
    }
}
char *add_in_base(int b, const char *A, const char *B)
{
    char result[MAX_LEN] = {'0'};
    int cary = 0, max_len = strlen(A) > strlen(B) ? strlen(A) : strlen(B);

    for (int i = max_len - 1; i >= 0; i--)
    {
        int digit_sum = cary + (i < strlen(A) ? A[i] - '0' : 0) + (i < strlen(B) ? B[i] - '0' : 0);
        cary = digit_sum / b;
        result[i] = digit_sum % b + '0';
    }
    return cary > 0 ? strdup(Strcat("1", result)) : strdup(result);
}

char *multiply_in_base(int b, const char *A, const char *B)
{
    char result[MAX_LEN * 2] = {'0'};

    for (int i = strlen(A) - 1; i >= 0; i--)
    {
        int carry = 0;

        for (int j = strlen(B) - 1; j >= 0; j--)
        {
            int product = carry + (A[i] - '0') * (B[j] - '0') + result[i + j + 1] - '0';
            carry = product / b;
            result[i + j + 1] = product % b + '0';
        }
        result[i] += carry;
    }
    reverse_str(result, strlen(result));
    return strdup(result);
}
int main()
{
    printf("addition:%s\n", add_in_base(2, "1010", "1101"));
    printf("multiplication=%s/n", multiply_in_base(2, "1010", "1101"));
    printf("addition :%s\n", add_in_base(10, "12345678901234567890123456789012345678901234567890", "98765432109876543210987654321098765432109876543210"));
    printf("multiplication:%s\n", multiply_in_base(10, "12345678901234567890123456789012345678901234567890", "98765432109876543210987654321098765432109876543210"));
}