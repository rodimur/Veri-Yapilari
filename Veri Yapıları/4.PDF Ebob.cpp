#include <stdio.h>
#include <stdlib.h>
int ebob(int m, int n) { 
if((m % n) == 0) 
return n; 
else 
return ebob(n, m % n); 
}

