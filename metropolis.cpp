#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
  int i;
  int N = 10000;
  float sigma = 1.0;
  float delta = 1.0;
  float a;
  float b = 0;
  float r;
  float r_2;
  float r_f;
  float alpha;
  
  srand48(10);

  for (i=0;i<N;i++){ 
	  
    a = b + (drand48-0.5)*delta;
	  
	r = exp(-a*a/(2.0*sigma*sigma))/sqrt(2.0*M_PI*sigma*sigma);
	  
	r_2= exp(-b*b/(2.0*sigma*sigma))/sqrt(2.0*M_PI*sigma*sigma);
	  
	r_f=r/r_2;
		
	  }
	if(r_f>1){
		
		r_f=1;
	}
	
	alpha = drand48;
    if(alpha<r_f){
		
            b = a;
		}
	
        else{
			
            p = p;
		}
	
    std::cout << N << " " << b << std::endl;
  
  return 0;
}

