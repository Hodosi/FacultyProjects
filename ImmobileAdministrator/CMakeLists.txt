cmake_minimum_required(VERSION 3.17)
project(ImmobileAdministrator C)

set(CMAKE_C_STANDARD 99)

add_executable(ImmobileAdministrator main.c presentation.h business.h presentation.c business.c persistence.c persistence.h domain.c domain.h validation.c validation.h test.c test.h expense.c block.c apartment.c)