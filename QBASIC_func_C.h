#include <stdlib.h>
#include <string.h>

//lower$
char char_lower(const char);
char *string_lower(const char *);

//upper$
char char_upper(const char);
char *string_upper(const char *);

//swap
void swap_int(int *, int *);
void swap_float(float *, float *);
void swap_char(char *, char *);

//extract
char *mid(const char *, const int, const int);
char *left(const char *, const int);
char *right(const char *, const int);

//int
int char_to_int(const char);
int string_to_int(const char *);
float string_to_float(const char *);

//str$
char int_to_char(const int);
char *int_to_string(const int);
