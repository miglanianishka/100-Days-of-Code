//Q138: Print all enum names and integer values using a loop.
#include <stdio.h>
enum Colors {RED, YELLOW, GREEN};
int main() {
    enum Colors color;

    for(color = RED; color <= GREEN; color++) {
        switch(color) {
            case RED: 
                printf("RED=%d\n", color); 
                break;
            case YELLOW: 
                printf("YELLOW=%d\n", color); 
                break;
            case GREEN: 
                printf("GREEN=%d\n", color); 
                break;
        }
    }
    return 0;
}

