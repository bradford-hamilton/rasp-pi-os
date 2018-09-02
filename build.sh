#!/bin/bash

docker run --rm -v $(pwd):/app -w /app bradfordhamilton/raspberry-pi-os-builder make $1
