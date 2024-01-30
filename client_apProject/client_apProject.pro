QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addorganizationclass.cpp \
    dashboard.cpp \
    forgotpassworddialog.cpp \
    main.cpp \
    mainwindow.cpp \
    organizationui.cpp \
    security.cpp \
    signupdialog.cpp

HEADERS += \
    addorganizationclass.h \
    dashboard.h \
    forgotpassworddialog.h \
    mainwindow.h \
    organizationui.h \
    security.h \
    signupdialog.h

FORMS += \
    addorganizationclass.ui \
    dashboard.ui \
    forgotpassworddialog.ui \
    mainwindow.ui \
    organizationui.ui \
    signupdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    back.qrc \
    back.qrc \
    backs.qrc \
    cheshm.qrc \
    dash.qrc \
    img.qrc \
    organize.qrc \
    pain.qrc \
    paint.qrc \
    person.qrc \
    resources.qrc \
    wel.qrc
