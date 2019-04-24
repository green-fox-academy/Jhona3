cmake_minimum_required(VERSION 3.13)
project(modeld_string_instrument)

set(CMAKE_CXX_STANDARD 14)

add_executable(modeld_string_instrument main.cpp Instrument.cpp Instrument.h StringedInstrument.cpp StringedInstrument.h ElectricGuitar.cpp ElectricGuitar.h BassGuitar.cpp BassGuitar.h Violin.cpp Violin.h)