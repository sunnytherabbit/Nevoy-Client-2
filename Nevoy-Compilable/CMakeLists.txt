cmake_minimum_required(VERSION 3.16)
project(Nevoy LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

if(NOT WIN32)
    message(WARNING "Nevoy is a Windows DLL. Cross-compilation is required on this host.")
endif()

# The project is built from a single amalgamated translation unit so that
# global variables from the decompiled source are defined exactly once.
add_library(Nevoy SHARED
    src/nevoy.c
)

target_include_directories(Nevoy PRIVATE src include)

# RetDec output contains many pointer/integer and implicit declaration
# patterns that are warnings in C11 but can be treated as errors by
# strict compilers. Downgrade them so the amalgamated unit compiles.
if(CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
    target_compile_options(Nevoy PRIVATE
        -Wno-error=implicit-function-declaration
        -Wno-error=int-conversion
        -Wno-error=implicit-int
        -Wno-error=incompatible-pointer-types
        -Wno-error=pointer-sign
    )
endif()

# Link Windows APIs and D3D used by the original DLL
target_link_libraries(Nevoy PRIVATE
    kernel32
    user32
    gdi32
    shell32
    ole32
    dxgi
    d3d11
    d3dcompiler
    winmm
    dbghelp
)

set_target_properties(Nevoy PROPERTIES
    PREFIX ""
    OUTPUT_NAME "Nevoy Client v26.32"
    SUFFIX ".dll"
)
