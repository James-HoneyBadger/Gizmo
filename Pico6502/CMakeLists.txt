cmake_minimum_required(VERSION 3.13)

project(MY-RP6502-PROJECT C ASM)

add_subdirectory(rp6502-sdk)

add_executable(hello)
rp6502_asset(hello 0x10000 assets/bin/honey-badger.bmp)



rp6502_executable(hello
honey-badger.rp6502


)
target_sources(hello PRIVATE
    src/hello.c
)
target_link_libraries(hello PRIVATE
    rp6502
)