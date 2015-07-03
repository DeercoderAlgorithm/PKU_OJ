#include <stdio.h>
#include <stdlib.h>

int cycle_length(int n){
  int size = 1;
  while (n != 1){
  if (n % 2 == 1){
     n = 3 * n + 1;      
  } else {
     n = n / 2;       
  }
  size++;      
  }
  return size;      
}

int max_cycle_length(int i, int j){
   if (i > j){
      int temp = i;
      i = j;
      j = temp;      
   }
   int flag = i;
   int max = 0;
   for (flag = i; flag <= j; flag++){    
     int len = cycle_length(flag);
     if (max < len){
        max = len;        
     }
   }
   return max;
}


int main(){
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF){
        printf("%d %d %d\n", a, b, max_cycle_length(a, b)); 
    }  
    system("pause");   
    return 0;
}
