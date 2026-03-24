#include <stdio.h>                                                                                                                                                        
                                                                                                                                                                          
int square_inplace(ref_to(int) a) {                                                                                                                                       
   int n = deref(a) * deref(a);                                                                                                                                           
   deref(a) = n;                                                                                                                                                          
}                                                                                                                                                                         
                                                                                                                                                                          
int main() {                                                                                                                                                              
   int x = 2;                                                                                                                                                             
   square_inplace(ref(x));                                                                                                                                                
                                                                                                                                                                          
   ref_to(int) y = ref(x);                                                                                                                                                
   int z = deref(y);                                                                                                                                                      
                                                                                                                                                                          
   square_inplace(ref(x));                                                                                                                                                
   square_inplace(ref(z));                                                                                                                                                
                                                                                                                                                                          
   printf("%d %d %d\n", x, deref(y), z);                                                                                                                                  
   return 0;                                                                                                                                                              
}      
