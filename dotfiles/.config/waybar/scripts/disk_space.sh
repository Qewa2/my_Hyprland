#!/bin/bash

# Get the free disk space in GB for the root partition
disk_free=$(df -BG / | awk 'NR==2 {print $4}' | sed 's/G//')

echo "${disk_free}GB"

