#!/bin/bash
wget -P .. \
https://raw.githubusercontent.com/M-954/alx-low_level_programming/master/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
