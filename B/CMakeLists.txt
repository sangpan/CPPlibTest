set(BINARY ${PROJECT_NAME}_lib)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.hpp *.cpp *.c *.cxx *.mm)
set(SOURCES ${SOURCES})

if (APPLE)
    set(CMAKE_C_COMPILER "clang")
    set(CMAKE_C_COMPILER_TARGET ${triple})
    set(CMAKE_CXX_COMPILER "clang++")
    set(CMAKE_CXX_COMPILER_TARGET ${triple})
else ()
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
    set(CMAKE_SHARED_LINKER_FLAGS_RELEASE "${CMAKE_SHARED_LINKER_FLAGS_RELEASE} /DEBUG /OPT:REF /OPT:ICF")
endif()

if (XCODE)
    if(NOT DEFINED CMAKE_XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET)
        SET (CMAKE_XCODE_ATTRIBUTE_MACOSX_DEPLOYMENT_TARGET 10.14)
    endif()
endif()

#add_library(${BINARY} ${SOURCES})


if (WIN32)
    #set(BINARY_LIB ${BINARY})
        add_library(${BINARY} SHARED ${SOURCES})
    #add_library(${BINARY} IMPORTED SHARED)
else()
    add_library(${BINARY}
            STATIC
            ${SOURCES})
    #	replace	${BINARY} -> HIVE_SAMPLE . testApp.
endif()
set_property(TARGET ${BINARY} PROPERTY CXX_STANDARD 17)

if(APPLE)
    find_library(COCOA_LIBRARY Cocoa )
    mark_as_advanced (
            COCOA_LIBRARY
    )
    set(EXTRA_LIBS ${COCOA_LIBRARY})

    target_link_libraries(${BINARY} ${EXTRA_LIBS})

    #
#target_link_libraries(${BINARY}
#        PUBLIC "-framework Cocoa"
#        PUBLIC "-framework Foundation"
#        )
endif()