#!/bin/bash

# Check if at least one argument is provided
if [ "$#" -lt 2 ]; then
    echo "Usage: $0 base_filename extension1 [extension2 ... extensionN]"
    exit 1
fi

# First argument is the base filename
base_filename="$1"

# Iterate over the remaining arguments (extensions)
shift
for extension in "$@"; do
    touch "${base_filename}.${extension}"
done

