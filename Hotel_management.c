#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   // variable declaration 
    float revenue[7], totalRevenue = 0, averageRevenue;
    int i, j, k;

    printf("=== Weekly Revenue Tracker ===\n");
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: $", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;
    printf("\nTotal weekly revenue: $%.2f\n", totalRevenue);
    
    printf("Average daily revenue: $%.2f\n", averageRevenue);
    int occupancy[5][10];
    int occupiedCount, vacantCount;

    srand(time(0));  

    printf("\n=== Room Occupancy (One Branch) ===\n");

    for (i = 0; i < 5; i++) {
        occupiedCount = 0;
        vacantCount = 0;

        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; 
            if (occupancy[i][j] == 1)
                occupiedCount++;
            else
                vacantCount++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", i + 1, occupiedCount, vacantCount);
    }


    int chain[3][5][10];
    int totalOccupied = 0;

    printf("\n=== Chain Occupancy (3 Branches) ===\n");

    for (i = 0; i < 3; i++) {
        int branchOccupied = 0;

        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;
                if (chain[i][j][k] == 1)
                    branchOccupied++;
            }
        }

        totalOccupied += branchOccupied;
        printf("Branch %d -> Occupied Rooms: %d\n", i + 1, branchOccupied);
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}