cmake_minimum_required(VERSION 3.28)
project(Inheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(Inheritance main.cpp
        BaseAccount.cpp
        BaseAccount.h
        SavingsAccount.cpp
        SavingsAccount.h
        CheckingAccount.cpp
        CheckingAccount.h
        CreditAccount.cpp
        CreditAccount.h)
