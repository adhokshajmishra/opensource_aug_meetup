TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    function_pointer.hpp \
    functor.hpp \
    lambda.hpp \
    function_bind.hpp
