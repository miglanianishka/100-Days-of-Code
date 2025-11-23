//Q135: Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Letters {A = 10, B, C};
int main() {
    enum Letters letter;
    for(letter = A; letter <= C; letter++) {
        switch(letter) {
            case A: 
                printf("A=%d\n", letter); 
                break;
            case B: 
                printf("B=%d\n", letter); 
                break;
            case C: 
                printf("C=%d\n", letter); 
                break;
        }
    }
    return 0;
}

