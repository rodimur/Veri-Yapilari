#include <stdio.h>
#include <stdlib.h>
struct complex { 
int real; 
int im; 
}
struct complex add(struct complex a, struct complex b) { 
struct complex result; 
result.real = a.real + b.real; 
result.im = a.im + b.im; 
return result; 
} 
