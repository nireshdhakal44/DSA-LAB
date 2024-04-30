#include <stdio.h>

void towers_of_hanoi(int num_disks, char source, char destination, char auxiliary) {
    if (num_disks == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", source, destination);
        return;
    }
    towers_of_hanoi(num_disks - 1, source, auxiliary, destination);
    printf("Move disk %d from peg %c to peg %c\n", num_disks, source, destination);
    towers_of_hanoi(num_disks - 1, auxiliary, destination, source);
}

int main() {
    int num_disks;

    printf("Welcome to Towers of Hanoi!\n");
    printf("Please enter the number of disks: ");
    scanf("%d", &num_disks);

    printf("Steps to solve Towers of Hanoi with %d disks:\n", num_disks);
    towers_of_hanoi(num_disks, 'A', 'C', 'B');

    return 0;
}
