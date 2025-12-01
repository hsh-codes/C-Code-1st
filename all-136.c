#include <stdio.h>

enum Traffic {RED, YELLOW, GREEN};

int main() {
    enum Traffic t;

    for(t = RED; t <= GREEN; t++) {
        switch(t) {
            case RED: printf("RED: Stop\n"); break;
            case YELLOW: printf("YELLOW: Wait\n"); break;
            case GREEN: printf("GREEN: Go\n"); break;
        }
    }

    return 0;
}
