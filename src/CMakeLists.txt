file(GLOB gloox_SRCS *.cpp)

include_directories(${gloox_SOURCE_DIR})

message(STATUS "LIBS=${LIBS}")
add_library(gloox STATIC ${gloox_SRCS})
target_link_libraries(gloox ${LIBS})

if (WIN32)
    set_target_properties(gloox PROPERTIES MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif ()


# 添加库文件的安装操作
install(
        TARGETS gloox
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin)

# 添加头文件的安装操作
install(
        DIRECTORY ${gloox_SOURCE_DIR}/src/
        DESTINATION include/ok-gloox
        FILES_MATCHING
        PATTERN "*.h"
        PATTERN ".git" EXCLUDE
        PATTERN "src/tests" EXCLUDE
        PATTERN "build" EXCLUDE
        PATTERN "ideas" EXCLUDE)