#include <cstdio>

int main(int argc, char** argv) {
  int n;
  printf("N = \n"); 
  scanf ("%i", &n);
  int i = 1;
  int system  = 16;
  char X[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int Y[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  char A[i];
  int l = n % system;
  A[1] = X[l];
  int next_razryad = n / system;
  while (next_razryad > 0) {
	system*=16;
    l = ((n -  Y[l]) % system) / 16;
	++i;
    A[i] = X[l];
    next_razryad = n / system;	
  }
  printf("0x");	  	 
  for (int j = i; j > 0; --j) {
    printf("%c", A[j]);	  
  }
  printf("\n");	  	  
}