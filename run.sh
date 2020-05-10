#!/bin/bash

{
    cmake --build ./build
    ./build/lilo_mar2020
} || {
    ./build.sh
    cmake --build ./build
    ./build/lilo_mar2020
}
