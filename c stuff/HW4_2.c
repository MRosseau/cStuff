/*
 *by Micah Rosseau, HW4 part 2
 */

#include <stdio.h>
#include <stdlib.h> /* has rand(), srand(), RAND_MAX */

int main(void) {

	int seed;
    int samples;
    int bins;

    printf("seed?\n");
    scanf("%d", &seed);
    printf("how many samples?\n");
    scanf("%d", &samples);
    printf("how many bins?\n");
    scanf("%d", &bins);
    rando(seed, samples, bins);
}
void rando(int a, int b, int c) {
    int ans = 0;
    int n[b];
    for(int i = 0; i < c; i++){
        n[i] = rand();
    }
	printf("counts using remainder method:\n");
    for (int i=0; i<=c-1; i++)
      {
	    for (int j=0; j<=-1; j++)
	      {
	        if(n(j)%c==i){
                ans++;
            }
	      }
        printf("(%d) %d\n",i ,ans);
        ans = 0;
      }
    n = rand(b);
    printf("counts using quotient method:\n");
    for (int k=0; k<c; k++)
      {
	    for (int l=0; l<b; l++)
	      {
	        if((int) ((((double) c) * n[l])/(RAND_MAX+1.0))==k){
                ans++;
	      }
        printf("(%d) %d\n",k ,ans);
        ans = 0;
      }
    return 0;
}