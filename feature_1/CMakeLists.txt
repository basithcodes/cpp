set(LIB_SOURCES feature.cpp)

set(LIB_HEADERS feature.h)

add_library(${LIBRARY_NAME} STATIC ${LIB_SOURCES} ${LIB_HEADERS})


