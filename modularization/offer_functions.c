#include <stdio.h>

// function to calculate discount
float discountCalculate(float price, float percentage) {
    return price * (percentage / 100);
}

// void function to display discount 
void displayDiscount(float price, float discount) {
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", price - discount);
}

int main() {
    float price, percentage, discount;

    // Get user input for price and discount percentage
    printf("Enter the product price: ");
    scanf("%f", &price);

    printf("Enter the discount percentage: ");
    scanf("%f", &percentage);
    
    discount = discountCalculate(price, percentage);
    displayDiscount(price, discount);
}

// in this code, we can conclude that void functions don't return any value,
// while functions that return a value must have a return type specified in the function definition.