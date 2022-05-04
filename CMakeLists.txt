cmake_minimum_required(VERSION 3.21)
project(Phone_Book_Application)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Phone_Book_Application
        addUpdateCommand.cpp
        addUpdateCommand.h
        main.cpp
        bookCommand.cpp
        bookCommand.h
        command.h
        eraseCommand.cpp
        eraseCommand.h
        menuList.cpp
        menuList.h
        phoneBook.cpp
        phoneBook.h
        phoneBookEntry.cpp
        phoneBookEntry.h
        printCommand.cpp
        printCommand.h)
