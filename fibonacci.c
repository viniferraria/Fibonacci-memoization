#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
  int * results = malloc((n+1) * sizeof(int));
    results[0] = 0;
    results[1] = 1;
  for(int i = 2; i <=n; i++){
      results[i] = results[i-1] + results[i-2];
  }
    return results[n];    
}