function(add_learning_example target_name)
    add_executable(${target_name} ${ARGN})

    target_compile_features(${target_name} PRIVATE cxx_std_23)

    if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
        target_compile_options(${target_name} PRIVATE
            -Wall
            -Wextra
            -Wpedantic
            -Wconversion
        )
    elseif(MSVC)
        target_compile_options(${target_name} PRIVATE /W4)
    endif()
endfunction()
