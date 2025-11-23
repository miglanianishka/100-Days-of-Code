//Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Status {SUCCESS, FAILURE, TIMEOUT};
int main() {
    enum Status stat;

    for(stat = SUCCESS; stat <= TIMEOUT; stat++) {
        switch(stat) {
            case SUCCESS: 
                printf("SUCCESS=%d\n", stat); 
                break;
            case FAILURE: 
                printf("FAILURE=%d\n", stat); 
                break;
            case TIMEOUT: 
                printf("TIMEOUT=%d\n", stat); 
                break;
        }
    }
    return 0;
}

