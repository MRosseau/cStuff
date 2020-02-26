/*
 *by Micah Rosseau, HW4 part 1
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sqroot(double a, double b, double c) {
	double ans = a;
    double cnt = 0;
    while (fabs(ans*ans-a) > b)
    {
        ans = (ans+(a/ans))/2;
        cnt++;
        //printf("%lf", fabs(ans*ans-a));
    }
    double sqr = sqrt(a);
    double dif = abs(ans - sqr);
    printf("square root of :%lf\nwith newton's method (threshold %lf): %lf (%lf iterations)\nusing library function: %lf\ndifference: %lf", a, b, ans, cnt, sqr, dif);
}

int main(void) {
    double input;
	double threshold;
	double max;
    printf("input the number you want square rooted:\n");
	scanf("%lf", &input);
    printf("input the threshold:\n");
	scanf("%lf", &threshold);
    printf("input the max iterations:\n");
	scanf("%lf", &max);
    sqroot(input, threshold, max);
    return 0;
}

