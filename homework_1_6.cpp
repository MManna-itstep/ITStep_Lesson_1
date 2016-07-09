#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <time.h>

int main(int argc, char** argv) {
  int N = 5;
  int X[N], Y[N]; 
  printf ("\n");
  srand(time(NULL));
  for (int i = 1; i <= N; ++i) {
    X[i]= 1 + rand() % 100;
    Y[i]= 1 + rand() % 100;
	printf("X[%i] = %i\t", i, X[i]);
	printf("Y[%i] = %i\n", i, Y[i]);  		
  } 
  int mult = 0;
  for (int i = 1; i <= N; ++i) {
    mult += (X[i]-Y[i])*(X[i]-Y[i]); 
  }
  printf ("\n");	
  int euclid = sqrt(mult);
  printf ("euclid=%i\n", euclid);
  return (0);
}
 
 //? Как обновить значения в генераторе случайнных чисел
 
 
