COMMON_PATH=../common
INCLUDEPATH+=$$COMMON_PATH
#DEPENDPATH+=$$absolute_path()
SOURCES += \
   $$COMMON_PATH/server.cpp

HEADERS += \
     $$COMMON_PATH/server.h
CONFIG+=c++11


unix{
DEFINES +=IS_UNIX
}
win32{
DEFINES +=IS_WIN32
}
