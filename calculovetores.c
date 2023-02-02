#include <stdio.h>

int somaaa(int vt[], int n)
{
	if (n == 0) return 0;
	return vt[n-1] + somaaa(vt, n -1);
}

int main (){
	
	int vt[] = {0};
	int n;
	
scanf("%i", &n);

for (int i = 1;i <= n; i++){
	scanf("%i", &vt[i]);
}	
somaaa(vt, n);
printf("\n%i ", somaaa(vt, n));

return 0;
	
}
