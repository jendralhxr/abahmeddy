#include <stdio.h>
#include <math.h>

#define PI 3.14151925
#define error 10e-4
#define STEP 10e-6
#define PHI 1.11352 // rad

double twoway(double a1, double a2, double u1, double u2){
	double temp, result;
	for (temp=0; temp<PI/2; temp+=STEP){
	//for (temp=-PI/2; temp<PI/2; temp+=STEP){
		result= atan(u2*a2/u1/a1*tan(PHI-temp));
		if (fabs(temp-result)<error) return(temp);
	}
	return(0.0);		
}

int main(int argc, char **argv){
	printf("%f %f %f %f: %f",451.7437, 460.2653, 0.018131, 0.11105, twoway(451.7437, 460.2653, 0.018131, 0.11105));
}

