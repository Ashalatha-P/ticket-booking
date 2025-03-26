#include <stdio.h>

int main() {
    char name[50], gender[10], trainName[50], from[30], to[30];
    int age, ticketNumber;
    float baseFare, gst, totalFare;
    
    // Input Passenger Details
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]s", name); // %[^\n] reads until newline
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Gender: ");
    scanf("%s", gender);
    printf("Enter Train Name: ");
    scanf(" %[^\n]s", trainName);
    printf("Enter From (Source): ");
    scanf(" %[^\n]s", from);
    printf("Enter To (Destination): ");
    scanf(" %[^\n]s", to);
    printf("Enter Ticket Number: ");
    scanf("%d", &ticketNumber);
    printf("Enter Base Fare: ₹");
    scanf("%f", &baseFare);

    // Calculate GST and Total Fare
    gst = baseFare * 0.18;
    totalFare = baseFare + gst;
    
    // Print the Ticket
    printf("\n-------- Railway Ticket --------\n");
    printf("Ticket Number: %d\n", ticketNumber);
    printf("Passenger Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("Train: %s\n", trainName);
    printf("From: %s  To: %s\n", from, to);
    printf("Ticket Status: Confirmed\n");
    printf("Base Fare: ₹%.2f\n", baseFare);
    printf("GST (18%%): ₹%.2f\n", gst);
    printf("Total Fare: ₹%.2f\n", totalFare);
    printf("--------------------------------\n");

    return 0;
}