cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)
project(projects)

# Initialize the SDK
pico_sdk_init()

add_executable(projects blink.c ultra_sonic.h ultra_sonic.c)

# pull in common dependencies
target_link_libraries(projects pico_stdlib hardware_timer hardware_gpio)

# create map/bin/hex file etc.
pico_add_extra_outputs(projects)

pico_enable_stdio_usb(projects 1)
pico_enable_stdio_uart(projects 0)

target_include_directories(projects PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

