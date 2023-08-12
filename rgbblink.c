#include <stdio.h>
#include "pico/stdlib.h"

#define LED_RED 2
#define LED_GREEN 3
#define LED_BLUE 4

int main() {
    // Initialize LED pin
    gpio_init(LED_RED);
    gpio_init(LED_GREEN);
    gpio_init(LED_BLUE);
    
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_set_dir(LED_BLUE, GPIO_OUT);

    // Initialize chosen serial port
    stdio_init_all();

    // Loop forever
    while (true) {

        // Red Blink LED
        printf("Blinking!\r\n");
        gpio_put(LED_RED, true);
        gpio_put(LED_GREEN, false);
        gpio_put(LED_BLUE, false);
        

        sleep_ms(1000);

        // Green Blink LED
        printf("Blinking!\r\n");
        gpio_put(LED_RED, false);
        gpio_put(LED_GREEN, true);
        gpio_put(LED_BLUE, false);
        
        sleep_ms(1000);

        // Blue Blink LED
        printf("Blinking!\r\n");
        gpio_put(LED_RED, false);
        gpio_put(LED_GREEN, false);
        gpio_put(LED_BLUE, true);

        
        sleep_ms(1000);

        // No Blink LED
        printf("Blinking!\r\n");
        gpio_put(LED_RED, false);
        gpio_put(LED_GREEN, false);
        gpio_put(LED_BLUE, false);

    }
}
