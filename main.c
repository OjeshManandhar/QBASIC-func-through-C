#include "QBASIC_func_C.h"

char char_lower(const char c)
{
    if ((c >= 'A') && (c <= 'Z'))
        return (c + 32);
    else
        return c;
}

char *string_lower(const char *c)
{
    int length;
    char *ans;

    length = strlen(c) + 1;
    ans = (char *)calloc(length, sizeof(char));
    strcpy(ans, c);

    return strlwr(ans);
}

/*
char *string_lower(const char *c)
{
    int i, length;
    char *ans;

    length = strlen(c) + 1;
    ans = (char *)calloc(length, sizeof(char));
    for (i = 0; i < length; i++)
        ans[i] = char_lower(c[i]);

    return ans;
}
*/

char char_upper(const char c)
{
    if ((c >= 'a') && (c <= 'z'))
        return (c - 32);
    else
        return c;
}

char *string_upper(const char *c)
{
    int i, length;
    char *ans;

    length = strlen(c) + 1;
    ans = (char *)calloc(length, sizeof(char));
    for (i = 0; i < length; i++)
        ans[i] = char_upper(c[i]);

    return ans;
}

/*
char *string_upper(const char *c)
{
    int length;
    char *ans;

    length = strlen(c) + 1;
    ans = (char *)calloc(length, sizeof(char));
    strcpy(ans, c);

    return strupr(ans);
}
*/

/*
void swap_int(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_float(float *a, float *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_char(char *a, char *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
*/

//While using above swapping functions, if the value exceeds the limit of the data type while add and subtracting the result may be wrong so be cautious

void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_float(float *a, float *b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_char(char *a, char *b)
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

char *mid(const char *a, const int p, const int n)
{
    char *ch;
    int i, x = 0, l;

    l = strlen(a) + 1;
	ch = (char *)calloc(l, sizeof(char));
    for (i = p-1; i < (p + n - 1); i++, x++)
        ch[x] = a[i];
    ch[x] = 0;

    return ch;
}

char *left(const char *a, const int n)
{
    char *ch;
    int i, x = 0, l;

    l = strlen(a) + 1;
	ch = (char *)calloc(l, sizeof(char));
    for (i = 0; i < n; i++, x++)
        ch[x] = a[i];
    ch[x] = 0;

    return ch;
}

char *right(const char *a, const int n)
{
    char *ch;
    int i, x = 0, len;

    len = strlen(a);
	ch = (char *)calloc((len + 1), sizeof(char));
    for (i = (len - n); i < len; i++, x++)
        ch[x] = a[i];
    ch[x] = 0;

    return ch;
}

int char_to_int(const char a)
{
    return (a - '0');
}

int string_to_int(const char *a)
{
    int i = 0, length, ans = 0;

    length = strlen(a);
    for (i = 0; i < length; i++)
        ans = ans*10 + char_to_int(a[i]);

    return ans;
}

float string_to_float(const char *data)
{
    short int i = 0;
    short int len = strlen(data);
    float integral = 0.0, decimal = 0.0;

    for (i = 0; data[i] != '.'; i++)
    {
        if (data[i] == 0)
            return integral;
        integral = (integral*10) + char_to_int(data[i]);
    }

    for (i = (len - 1); data[i] != '.'; i--)
        decimal = (decimal/10.0) + (char_to_int(data[i])/10.0);

    return (integral + decimal);
}

char int_to_char(const int n)
{
    return (n + '0');
}

char *int_to_string(const int n)
{
    int rem, temp, length = 0, i;
    char *ans = NULL;

    temp = n;
    if (temp == 0)
    {
        ans = calloc(2, sizeof(char));
        ans[0] = '0';
        ans[1] = 0;
        return ans;
    }
    while (temp != 0)
    {
        length++;
        i = length - 1;
        rem = temp%10;
        ans = (char *)realloc(ans, length*sizeof(char));
        ans[i] = int_to_char(rem);
        temp /= 10;
    }
    ans[length] = 0;

    return strrev(ans);
}
