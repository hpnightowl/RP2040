cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(myapp C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(main_app
		main.c
		)

pico_add_extra_outputs(main_app)
target_link_libraries(main_app pico_stdlib)
pico_enable_stdio_usb(main_app 1)
pico_enable_stdio_uart(main_app 0)
