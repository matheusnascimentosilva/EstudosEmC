#include <stdlib.h>
#include <stdio.h>

int main(){
    long long int num1,num2,r;
    while(scanf("%lli",&num1)!= EOF){
    	scanf("%lli",&num2);
    	r = num1-num2;
        	if(r < 0){
            	r = r*-1;
        	}
        	printf("%lli\n",r);
		}

    return 0;
}
