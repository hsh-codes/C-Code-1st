#include <stdio.h>

enum UserRole {ADMIN, USER, GUEST};

int main() {
    enum UserRole role;

    for(role = ADMIN; role <= GUEST; role++) {
        switch(role) {
            case ADMIN: printf("ADMIN: %d\n", role); break;
            case USER: printf("USER: %d\n", role); break;
            case GUEST: printf("GUEST: %d\n", role); break;
        }
    }

    return 0;
}
