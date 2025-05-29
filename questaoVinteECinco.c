#include <stdio.h>

int main() {
    float fahrenheit, celsius;

 
    printf("Por favor, digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("A temperatura em Celsius é aproximadamente: %.2f°C\n", celsius);
   
    return 0;
}
