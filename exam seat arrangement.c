
#include <stdio.h>

int getTotalSeats(int rows, int columns, int rooms) {
    return rows * columns * rooms;
}

void findSeat(int rollno, int rows, int columns, int rooms) {
    int roomseats = rows * columns;
    int totalseats = getTotalSeats(rows, columns, rooms);

    if (rollno < 1 || rollno > totalseats) {
        printf("THIS ROLLNO SEAT DOES NOT EXIST\n");
        return;
    }

    int seat = 1;
    for (int r = 1; r <= rooms; r++) {
        int seatinroom = 1;
        for (int i = 1; i <= columns; i++) {
            for (int j = 1; j <= rows; j++) {
                if (seat == rollno) {
                    printf("Your room no is %d\n", r);
                    printf("Your seat no in room is %d\n", seatinroom);
                    printf("Column no %d\n", i);
                    printf("Row no %d\n", j);
                    return; 
                }
                seat++;
                seatinroom++;
            }
        }
    }
}

int main() {
    int rows = 5, columns = 10, rooms = 3;
    int rollno;

    printf("Enter the roll no: ");
    scanf("%d", &rollno);

    findSeat(rollno, rows, columns, rooms);

    return 0;
}
