/*
 *by Micah Rosseau, HW4 part 2
 */

#include <stdio.h>
#include <stdlib.h> /* has rand(), srand(), RAND_MAX */

void rando(int a, int b, int c) {
  int ar[c];
  int aq[c];
  int j,l,r,q,i;
  for(i = 0;i<c;i++){
    ar[i] = 0;
    aq[i] = 0;
  }
	printf("counts using remainder method:\n");
  srand(a);
	  for(j=0; j<=b-1; j++)//sample loop
	    {
        ar[rand()%c] += 1;
      }
  for(r = 0; r < c; r++){
    printf("(%d) %d\n", r, ar[r]);
  }
  printf("counts using quotient method:\n");
  srand(a);
	  for(l=0; l<b-1; l++)
	    {
        aq[(int) ((((double) c) * rand())/(RAND_MAX+1.0))] += 1;
      }
  for(q = 0; q < c; q++){
    printf("(%d) %d\n", q, aq[q]);
  }
}

int main(void) {

	int seed;
    int samples;
    int bins;

     printf("seed?\n");
	if (scanf("%d", &seed) != 1) {
		printf("invalid input\n");
		return 1;
	}
	if (seed <= 0) {
		printf("invalid input\n");
		return 1;
	}
  printf("how many samples?\n");
	if (scanf("%d", &samples) != 1) {
		printf("invalid input\n");
		return 1;
	}
	if (samples <= 0) {
		printf("invalid input\n");
		return 1;
	}
  printf("how many bins?\n");
	if (scanf("%d", &bins) != 1) {
		printf("invalid input\n");
		return 1;
	}
	if (bins <= 0) {
		printf("invalid input\n");
		return 1;
  }
  rando(seed, samples, bins);
  return 0;
}
