#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	double Vs, R, C, omega,Vr;
	int number_of_test_cases;
	int i = 0;
	
	scanf("%lf%lf%lf%d",&Vs,&R,&C,&number_of_test_cases);
	
	for(i=0;i<number_of_test_cases;i++){
		scanf("%lf",&omega);
		Vr = (C * R * omega * Vs) / (sqrt (1.0 + R * R * C * C * omega * omega) );
		printf("%.3lf\n",Vr);
	}
	return 0;
}