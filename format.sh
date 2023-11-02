#!/bin/bash
# run clang format on all source files

clang-format -i */*/include/*
clang-format -i */*/src/*
