#include <stdio.h>

float fahr_to_cel(float fahr){
    float celsius;
    celsius = (fahr - 32) / 1.8;
    return celsius;
}

float cel_to_fahr(float celsius){
    float fahr;
    fahr = (celsius * 1.8) + 32;
    return fahr;
}

int main() {
    
    float a = 32;  
    float resp;
    

    resp = fahr_to_cel(a);
    printf("fahrenheit to celsius %.2f\n", resp);
    resp = cel_to_fahr(a);
    printf("celsius to fahrenheit %.2f\n", resp);

    return 0;

}
