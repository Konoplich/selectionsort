#!/bin/bash

rm ./ok

gcc main.c -o ok -L. -lselectionsort -Wl,-rpath,.
