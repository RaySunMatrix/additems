cmake_minimum_required(VERSION 3.28)
project(additems C)

set(CMAKE_C_STANDARD 17)

add_library(additems STATIC library.c
        exports/add/items/qrpvec.cpp
        exports/add/items/qrpvec.h
        exports/add/items/lasturl/https.cpp
        exports/add/items/lasturl/https.h
        qrvec.cpp
        qrvec.h)
