# Import local-libs as executables on the main app
set(${NAME} 
        ../local-libs/ssd1306/ssd1306.c # SSD1306 OLED DISPLAY LOCAL LIBRARY
        ../local-libs/am2320/am2320.c # AM2320 SENSOR LOCAL LIBRARY
        ../local-libs/am2320/am2320_2.c # AM2320 SENSOR LOCAL LIBRARY
        ../local-libs/helpers/string_operations.c # MY STRING HELPERS
        )