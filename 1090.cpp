#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3;
	double a,b,c;
	double cos_theta, sin_theta;
	double radius;
	double circumference;
	
	while((scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3))!=EOF)	{
		a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
		c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		
		cos_theta = ((b*b)+(c*c)-(a*a))/(double)(2*b*c);
		
		sin_theta = sqrt(1 - (cos_theta*cos_theta));
		
		radius = a/(double)sin_theta;
		
		circumference = 3.141592653589793 * radius;
		
		printf("%.2lf\n",circumference);
	}
	return 0;	
}