cmake_minimum_required(VERSION 3.13)

project(MY-RP6502-PROJECT C ASM)

add_subdirectory(rp6502-sdk)

add_executable(clockgetres)
target_sources(clockgetres PRIVATE
    src/clockgetres.c
)
target_link_libraries(clockgetres PRIVATE
    rp6502
)

add_executable(clockgettime)
target_sources(clockgettime PRIVATE
    src/clockgettime.c
)
target_link_libraries(clockgettime PRIVATE
    rp6502
)

add_executable(clockgettimertc)
target_sources(clockgettimertc PRIVATE
    src/clockgettimertc.c
)
target_link_libraries(clockgettimertc PRIVATE
    rp6502
)

add_executable(time)
target_sources(time PRIVATE
    src/time.c
)
target_link_libraries(time PRIVATE
    rp6502
)

add_executable(settime)
target_sources(settime PRIVATE
    src/settime.c
)
target_link_libraries(settime PRIVATE
    rp6502
)

add_executable(usersettime)
target_sources(usersettime PRIVATE
    src/usersettime.c
    src/getsn.c
)
target_link_libraries(usersettime PRIVATE
    rp6502
)
