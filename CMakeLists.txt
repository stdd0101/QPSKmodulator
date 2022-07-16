cmake_minimum_required(VERSION 3.22)
project(modulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(modulator main.cpp QPSKmodulator.cpp QPSKmodulator.h Sender.cpp Sender.h Receiver.cpp Receiver.h DSSStester.cpp DSSStester.h)
