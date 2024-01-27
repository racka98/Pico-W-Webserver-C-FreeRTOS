#include <cgi.h>
#include <lwip/apps/httpd.h>
#include <lwipopts.h>
#include <pico/cyw43_arch.h>
#include <pico/stdlib.h>
#include <ssi.h>

// WiFi credentials
const char WIFI_SSID[] = "";
const char WIFI_PASSWORD[] = "";

int run_server() {
    cyw43_arch_init();
    cyw43_arch_enable_sta_mode();

    // Attempt to connect to WiFi
    while (cyw43_arch_wifi_connect_timeout_ms(WIFI_SSID, WIFI_PASSWORD, CYW43_AUTH_WPA2_AES_PSK, 30000)) {
        printf("Attempting to connect\n");
    }

    // Print success message
    printf("Connected successfully\n");

    // Initialize server
    httpd_init();
    printf("HTTP Server Initialized\n");

    // Initialize SSI and CGI
    ssi_init();
    printf("SSI Handler initialized\n");

    ssi_init();
    printf("SSI Handler initialized\n");

    while(true) {}

    return 0;
}