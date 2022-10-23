//
//  main.c
//  piSeries
//
//  Created by Michael Leong on 23/10/2022.
//

#include <stdio.h>
#include <inttypes.h>

int main(int argc, const char * argv[]) {
    uint16_t n = 0;
    double GL = 4; //gregory leibniz series
    double Nila = 4; //nilakantha series
    
    double a = 0.0;
    
    printf("test: %lf\n", ((0)*(1.0))/a*0);
    
    printf("Please enter n (16-bits unsigned): ");
    scanf("%"SCNu16, &n);
    
    printf("n = 1\n");
    printf("\tGregory – Leibniz series: %lf\n", GL);
    printf("\tNilakantha series: %lf\n", Nila);
    
    for(uint16_t i = 1; i < n;) {
        GL += (i%2 == 0)*(4.0/((i*2)+1)) + (i%2 != 0)*(-1)*(4.0/((i*2)+1));
        //GL += (i==0)*4 + (i>0)*(i%2 == 0)*(4/((i*2)+1)) + (i>0)*(i%2 != 0)*(-1)*(4/((i*2)+1));
        Nila += (i%2 == 0)*(4.0/((i*2)*(i*2+1)*(i*2+2))) + (i%2 != 0)*(-1)*(4.0/((i*2)*(i*2+1)*(i*2+2)));
        
        //print
        printf("n = %"PRId16":\n", ++i);
        printf("\tGregory – Leibniz series: %lf\n", GL);
        printf("\tNilakantha series: %lf\n", Nila);
    }
    
    
    
    return 0;
}
