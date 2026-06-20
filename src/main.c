#inlcude <stdio.h> 

double add(double a , double b){
 return a + b; 
}

double sub(double a , double b){

return a - b; 
}

double mul(double a , double b){

return a * b; 
}

int main(void){

 printf("Hello World!"); 
 double a = 100; 
 double b = 150; 
 printf("Summation = %d",add(a,b)); 
 printf("Multiplication = %d", mul(a,b)); 
return 0; 
}
