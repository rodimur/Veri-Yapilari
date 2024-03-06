#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
	void swap_1(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
	}
	void swap_2(int &x , int &y){
	int temp;
	x = y;
	y = temp;
	}
	
int main(){
	int a = 100;
	int b = 200;
	printf("swap öncesi anýn deðeri : %d\n",a);
	printf("swap öncesi anýn deðeri : %d\n\n",b);
	swap_2(a,b);
	printf("swap_2 sonrasý anýn deðeri : %d\n",a);
	printf("swap_2 sonrasý bin deðeri : %d\n\n",b);
	getch();
}

