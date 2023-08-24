cmake_minimum_required(VERSION 3.13)

project(MY-RP6502-PROJECT C ASM)

add_subdirectory(rp6502-sdk)

add_executable(gettime)
target_sources(gettime PRIVATE
    src/gettime.c
)
target_link_libraries(gettime PRIVATE
    rp6502
)

add_executable(settime)
target_sources(settime PRIVATE
    src/settime.c
    src/getsn.c
)
target_link_libraries(settime PRIVATE
    rp6502
)
