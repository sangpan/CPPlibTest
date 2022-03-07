set(BINARY ${PROJECT_NAME})
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.hpp *.cpp *.c *.cxx *.mm)
set(SOURCES ${SOURCES})
add_executable(${BINARY} ${SOURCES})
target_link_libraries(${BINARY}
        PRIVATE ${PROJECT_NAME}_lib
        )