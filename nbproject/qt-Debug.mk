#############################################################################
# Makefile for building: dist/Debug/GNU-Linux-x86/ListLoop
# Generated by qmake (2.01a) (Qt 4.7.2) on: Mon Aug 15 19:32:04 2011
# Project:  nbproject/qt-Debug.pro
# Template: app
# Command: /usr/bin/qmake VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -Inbproject -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I. -Inbproject -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = build/Debug/GNU-Linux-x86/

####### Files

SOURCES       = main.cpp \
		algorithms/linked_list_cycle.cpp \
		frmHelp.cpp \
		algorithms/linked_list.cpp \
		frmMain.cpp moc_frmMain.cpp \
		moc_frmHelp.cpp
OBJECTS       = build/Debug/GNU-Linux-x86/main.o \
		build/Debug/GNU-Linux-x86/linked_list_cycle.o \
		build/Debug/GNU-Linux-x86/frmHelp.o \
		build/Debug/GNU-Linux-x86/linked_list.o \
		build/Debug/GNU-Linux-x86/frmMain.o \
		build/Debug/GNU-Linux-x86/moc_frmMain.o \
		build/Debug/GNU-Linux-x86/moc_frmHelp.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		nbproject/qt-Debug.pro
QMAKE_TARGET  = ListLoop
DESTDIR       = dist/Debug/GNU-Linux-x86/
TARGET        = dist/Debug/GNU-Linux-x86/ListLoop

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: qttmp-Debug.mk $(TARGET)

$(TARGET): ui_frmMain.h ui_frmHelp.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) dist/Debug/GNU-Linux-x86/ || $(MKDIR) dist/Debug/GNU-Linux-x86/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

qttmp-Debug.mk: nbproject/qt-Debug.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/libQtGui.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) VPATH=. -o qttmp-Debug.mk nbproject/qt-Debug.pro

dist: 
	@$(CHK_DIR_EXISTS) nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0 || $(MKDIR) nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0/ && $(COPY_FILE) --parents frmMain.h algorithms/stopwatch.h algorithms/linked_list_cycle.h algorithms/linked_list.h frmHelp.h nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0/ && $(COPY_FILE) --parents main.cpp algorithms/linked_list_cycle.cpp frmHelp.cpp algorithms/linked_list.cpp frmMain.cpp nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0/ && $(COPY_FILE) --parents frmMain.ui frmHelp.ui nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0/ && (cd `dirname nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0` && $(TAR) ListLoop1.0.0.tar ListLoop1.0.0 && $(COMPRESS) ListLoop1.0.0.tar) && $(MOVE) `dirname nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0`/ListLoop1.0.0.tar.gz . && $(DEL_FILE) -r nbproject/build/Debug/GNU-Linux-x86/ListLoop1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) qttmp-Debug.mk


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_frmMain.cpp moc_frmHelp.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_frmMain.cpp moc_frmHelp.cpp
moc_frmMain.cpp: ui_frmMain.h \
		algorithms/stopwatch.h \
		algorithms/linked_list.h \
		frmMain.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) frmMain.h -o moc_frmMain.cpp

moc_frmHelp.cpp: ui_frmHelp.h \
		frmHelp.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) frmHelp.h -o moc_frmHelp.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_frmMain.h ui_frmHelp.h
compiler_uic_clean:
	-$(DEL_FILE) ui_frmMain.h ui_frmHelp.h
ui_frmMain.h: frmMain.ui
	/usr/bin/uic-qt4 frmMain.ui -o ui_frmMain.h

ui_frmHelp.h: frmHelp.ui
	/usr/bin/uic-qt4 frmHelp.ui -o ui_frmHelp.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

build/Debug/GNU-Linux-x86/main.o: main.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/main.o main.cpp

build/Debug/GNU-Linux-x86/linked_list_cycle.o: algorithms/linked_list_cycle.cpp algorithms/linked_list_cycle.h \
		algorithms/linked_list.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/linked_list_cycle.o algorithms/linked_list_cycle.cpp

build/Debug/GNU-Linux-x86/frmHelp.o: frmHelp.cpp frmHelp.h \
		ui_frmHelp.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/frmHelp.o frmHelp.cpp

build/Debug/GNU-Linux-x86/linked_list.o: algorithms/linked_list.cpp algorithms/linked_list.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/linked_list.o algorithms/linked_list.cpp

build/Debug/GNU-Linux-x86/frmMain.o: frmMain.cpp frmMain.h \
		ui_frmMain.h \
		algorithms/stopwatch.h \
		algorithms/linked_list.h \
		frmHelp.h \
		ui_frmHelp.h \
		algorithms/linked_list_cycle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/frmMain.o frmMain.cpp

build/Debug/GNU-Linux-x86/moc_frmMain.o: moc_frmMain.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_frmMain.o moc_frmMain.cpp

build/Debug/GNU-Linux-x86/moc_frmHelp.o: moc_frmHelp.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o build/Debug/GNU-Linux-x86/moc_frmHelp.o moc_frmHelp.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
