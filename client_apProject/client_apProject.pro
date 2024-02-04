QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addorganizationclass.cpp \
    commentui.cpp \
    dashboard.cpp \
    editorganizationclass.cpp \
    editproject.cpp \
    edittask.cpp \
    editteam.cpp \
    forgotpassworddialog.cpp \
    main.cpp \
    mainwindow.cpp \
    organizationui.cpp \
    orgdialog.cpp \
    prodialog.cpp \
    projectui.cpp \
    security.cpp \
    signupdialog.cpp \
    taskdialog.cpp \
    taskui.cpp \
    teamdialog.cpp \
    teamui.cpp

HEADERS += \
    addorganizationclass.h \
    commentui.h \
    dashboard.h \
    editorganizationclass.h \
    editproject.h \
    edittask.h \
    editteam.h \
    forgotpassworddialog.h \
    mainwindow.h \
    organizationui.h \
    orgdialog.h \
    prodialog.h \
    projectui.h \
    security.h \
    signupdialog.h \
    taskdialog.h \
    taskui.h \
    teamdialog.h \
    teamui.h

FORMS += \
    addorganizationclass.ui \
    commentui.ui \
    dashboard.ui \
    editorganizationclass.ui \
    editproject.ui \
    edittask.ui \
    editteam.ui \
    forgotpassworddialog.ui \
    mainwindow.ui \
    organizationui.ui \
    orgdialog.ui \
    prodialog.ui \
    projectui.ui \
    signupdialog.ui \
    taskdialog.ui \
    taskui.ui \
    teamdialog.ui \
    teamui.ui

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
    pluss.qrc \
    prodialog.qrc \
    ptback.qrc \
    resources.qrc \
    tasku.qrc \
    wel.qrc
