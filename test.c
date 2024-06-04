#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* plate;
    char* type;
    int date[3];
    int ID;
} CarParkSlot;

void menu();
void insert_car();
void remove_car();
void show_parking();

int main() {

    menu();
    unsigned int choice = 0;
    scanf("%u", &choice);

    while(choice != 4) {
        switch(choice) {
            case 1:
                insert_car();
                break;
            case 2:
                remove_car();
                break;
            case 3:
                show_parking();
                break;
            default:
                printf("\ninvalid input");
                break;
        }

        menu();
        scanf("%u", &choice);
    }

    return 0;
}

void menu() {
    printf("\n---CAR MANAGER---");
    printf("\n<1> insert car");
    printf("\n<2> remove car");
    printf("\n<3> show parking");
    printf("\n<4> end program");
}

void insert_car() {

}

void remove_car() {

}

void show_parking() {

}