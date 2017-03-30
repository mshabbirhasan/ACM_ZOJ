#include<stdio.h>
using namespace std;

int main(){
	double n;
	double sum = 0;
	int i = 0;
	for(i = 0; i<12; i++){
		scanf("%lf",&n);
		sum+= n;
	}
	
	printf("$%.2lf",sum/12.0);
	return 0;
}