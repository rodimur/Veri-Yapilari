#include<iostream>
using namespace std;
int faktoryel(int n)
{
int sonuc;
if(n==1) return 1;
sonuc = n * faktoryel(n-1);
return sonuc;
}
