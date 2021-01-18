#!/bin/bash

# usage: looks in the folder "build" for a file
# ./flash.sh <firmwarename>.bin

echo $1

# -z checks to see if <firmwarename>.bin is empty or not. Returns true if empty
if [ -z "${1}" ]; then
    echo "Input filename"
# else flash the discovery kit
else
    # use the drag and drop functionality 
    cp build/$1 /Volumes/DIS_L4IOT
fi

