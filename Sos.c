#include "pico/stdlib.h"

#define LED_PIN_BLUE 12
void acender_led(int tempo_ms) {
    gpio_put(LED_PIN_BLUE, 1); 
    sleep_ms(tempo_ms);
    gpio_put(LED_PIN_BLUE, 0);
    sleep_ms(125);
}

void sinal_sos() {
    for (int i = 0; i < 3; i++) {
        acender_led(200);
    }
    
    sleep_ms(250);
    for (int i = 0; i < 3; i++) {
        acender_led(800);
    }

    sleep_ms(250);

    for (int i = 0; i < 3; i++) {
        acender_led(200);
    }
    sleep_ms(3000);
}

int main() {
    gpio_init(LED_PIN_BLUE);
    gpio_set_dir(LED_PIN_BLUE, GPIO_OUT); 

    while (true) {
        sinal_sos();
    }

    return 0;
}
