#include <cstdio>

int main(int argc, char** argv) {
  int n;
  printf("N = \n"); 
  scanf ("%i", &n);
  int i = 1;
  int system  = 2;
  int A[i];
  A[1] = n % system;
  int next_razryad = n / system;
  while (next_razryad > 0) {
	system*=2;
    int r = (n -  A[i]) % system;
	++i;
    if (r > 0) {
	  A[i] = 1;} else {
	  A[i] = 0;	  
	}
    next_razryad = n / system;	
  }
  for (int j = i; j > 0; --j) {
    printf("%i", A[j]);	  
  }
  printf("\n");	  	  
}
  
  
  
  