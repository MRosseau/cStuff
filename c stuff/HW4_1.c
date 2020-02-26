/*
 *by Micah Rosseau, HW4 part 1
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input;
	int threshold;
	int max;
    printf("input the number you want square rooted:\n");
	scanf("%d", &input);
    printf("input the threshold:\n");
	scanf("%d", &threshold);
    printf("input the max iterations:\n");
	scanf("%d", &max);
    sqroot(input, threshold, max);
}

void sqroot(int a, int b, int c) {
	int ans = a;
    int cnt = 0;
    while (abs(ans*ans-a) <= b)
    {
        ans = (ans+(a/ans))/2;
        cnt++;
    }
    int sqr = sqrt(a);
    int dif = abs(ans - sqr);
    printf("square root of :%d\nwith newton's method (threshold %d): %d (%d iterations)\nusing library function: %d\ndifference: %d", a, b, ans, cnt, sqr, dif);
    return 0;
}