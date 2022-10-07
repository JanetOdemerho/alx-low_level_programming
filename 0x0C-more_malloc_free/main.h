#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int str_len(char *s);                                            
char *array_x(int size);                                         
char *iterate_zeroes(char *s);                                   
int convert_digit(char d);                                       
void mul_string(char *result, char *s, int d, int z);            
void add_nums(char *r1, char *r2, int r_len);                    
int main(int argc, char *argv[]); 

#endif
