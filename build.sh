#!/bin/sh

arm-linux-gnueabi-gcc -shared -fPIC -o preload.so preload.c
arm-linux-gnueabi-gcc -o test test.c
