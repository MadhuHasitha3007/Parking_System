#include <stdio.h>

int main() {
    int choice;
    int countCar = 0, countBike = 0, countBus = 0;
    int totalAmount = 0;
    int totalVehicles = 0;

    while (1) {
        printf("\n===== PARKING SYSTEM =====\n");
        printf("1. Park Car (Rs. 50)\n");
        printf("2. Park Bike (Rs. 20)\n");
        printf("3. Park Bus (Rs. 100)\n");
        printf("4. Show Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                countCar++;
                totalAmount += 50;
                totalVehicles++;
                printf("Car parked successfully.\n");
                break;

            case 2:
                countBike++;
                totalAmount += 20;
                totalVehicles++;
                printf("Bike parked successfully.\n");
                break;

            case 3:
                countBus++;
                totalAmount += 100;
                totalVehicles++;
                printf("Bus parked successfully.\n");
                break;

            case 4:
                printf("\n===== Parking Record =====\n");
                printf("Cars parked: %d\n", countCar);
                printf("Bikes parked: %d\n", countBike);
                printf("Buses parked: %d\n", countBus);
                printf("Total Vehicles: %d\n", totalVehicles);
                printf("Total Amount Collected: Rs. %d\n", totalAmount);
                break;

            case 5:
                countCar = countBike = countBus = 0;
                totalVehicles = totalAmount = 0;
                printf("All records deleted!\n");
                break;

            case 6:
                printf("Exiting the system...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
