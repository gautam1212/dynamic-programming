#include<stdio.h> 
  
int count(int n, int m) 
{ 
    int res[n]; 
    res[0] = 1; res[1] = 1; 
    for (int i=2; i<n; i++) 
    { 
       res[i] = 0; 
       for (int j=1; j<=m && j<=i; j++) 
         res[i] += res[i-j]; 
    } 
    return res[n-1]; 
} 

int main () 
{ 
    int s = 4, m = 2; 
    printf("Nuber of ways = %d", count(s+1, m)); 
    return 0; 
} 
