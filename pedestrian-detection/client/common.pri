COMMON_PATH=../common
INCLUDEPATH+=$$COMMON_PATH
#DEPENDPATH+=$$absolute_path()
SOURCES += \
   $$COMMON_PATH/tool1.cpp  $$COMMON_PATH/videowidget.h

HEADERS += \
     $$COMMON_PATH/tool1.h  $$COMMON_PATH/videowidget.cpp
CONFIG+=c++11


unix{
DEFINES +=IS_UNIX
}
win32{
DEFINES +=IS_WIN32
}
