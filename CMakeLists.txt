cmake_minimum_required(VERSION 3.13)

project(MY-RP6502-PROJECT C ASM)

add_subdirectory(rp6502-sdk)

add_executable(printtime)
target_sources(printtime PRIVATE
    src/print_time.c
)
target_link_libraries(printtime PRIVATE
    rp6502
)

add_executable(timeset)
target_sources(timeset PRIVATE
    src/time_set.c
    src/getsn.c
)
target_link_libraries(timeset PRIVATE
    rp6502
)

# add_executable(clock)
# target_sources(clock PRIVATE
#     src/clock.c
#     src/getsn.c
# )
# target_link_libraries(clock PRIVATE
#     rp6502
# )
