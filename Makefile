#############################################################################
# Makefile for building: lemon
# Generated by qmake (2.01a) (Qt 4.8.6) on: ?? 10? 21 12:57:03 2015
# Project:  lemon.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile lemon.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
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

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		lemon.cpp \
		contest.cpp \
		task.cpp \
		testcase.cpp \
		settings.cpp \
		compiler.cpp \
		filelineedit.cpp \
		summarytree.cpp \
		taskeditwidget.cpp \
		testcaseeditwidget.cpp \
		generalsettings.cpp \
		compilersettings.cpp \
		addtestcaseswizard.cpp \
		contestant.cpp \
		judgingdialog.cpp \
		judgingthread.cpp \
		optionsdialog.cpp \
		resultviewer.cpp \
		assignmentthread.cpp \
		detaildialog.cpp \
		newcontestwidget.cpp \
		opencontestwidget.cpp \
		newcontestdialog.cpp \
		opencontestdialog.cpp \
		welcomedialog.cpp \
		addtaskdialog.cpp \
		qtsingleapplication/qtsinglecoreapplication.cpp \
		qtsingleapplication/qtsingleapplication.cpp \
		qtsingleapplication/qtlocalpeer.cpp \
		advancedcompilersettingsdialog.cpp \
		environmentvariablesdialog.cpp \
		editvariabledialog.cpp \
		addcompilerwizard.cpp \
		selftestutil.cpp \
		exportutil.cpp moc_lemon.cpp \
		moc_contest.cpp \
		moc_task.cpp \
		moc_testcase.cpp \
		moc_settings.cpp \
		moc_compiler.cpp \
		moc_filelineedit.cpp \
		moc_summarytree.cpp \
		moc_taskeditwidget.cpp \
		moc_testcaseeditwidget.cpp \
		moc_generalsettings.cpp \
		moc_compilersettings.cpp \
		moc_addtestcaseswizard.cpp \
		moc_contestant.cpp \
		moc_judgingdialog.cpp \
		moc_judgingthread.cpp \
		moc_optionsdialog.cpp \
		moc_resultviewer.cpp \
		moc_assignmentthread.cpp \
		moc_detaildialog.cpp \
		moc_newcontestwidget.cpp \
		moc_opencontestwidget.cpp \
		moc_newcontestdialog.cpp \
		moc_opencontestdialog.cpp \
		moc_welcomedialog.cpp \
		moc_addtaskdialog.cpp \
		moc_qtsinglecoreapplication.cpp \
		moc_qtsingleapplication.cpp \
		moc_qtlocalpeer.cpp \
		moc_advancedcompilersettingsdialog.cpp \
		moc_environmentvariablesdialog.cpp \
		moc_editvariabledialog.cpp \
		moc_addcompilerwizard.cpp \
		moc_selftestutil.cpp \
		moc_exportutil.cpp \
		qrc_resource.cpp
OBJECTS       = main.o \
		lemon.o \
		contest.o \
		task.o \
		testcase.o \
		settings.o \
		compiler.o \
		filelineedit.o \
		summarytree.o \
		taskeditwidget.o \
		testcaseeditwidget.o \
		generalsettings.o \
		compilersettings.o \
		addtestcaseswizard.o \
		contestant.o \
		judgingdialog.o \
		judgingthread.o \
		optionsdialog.o \
		resultviewer.o \
		assignmentthread.o \
		detaildialog.o \
		newcontestwidget.o \
		opencontestwidget.o \
		newcontestdialog.o \
		opencontestdialog.o \
		welcomedialog.o \
		addtaskdialog.o \
		qtsinglecoreapplication.o \
		qtsingleapplication.o \
		qtlocalpeer.o \
		advancedcompilersettingsdialog.o \
		environmentvariablesdialog.o \
		editvariabledialog.o \
		addcompilerwizard.o \
		selftestutil.o \
		exportutil.o \
		moc_lemon.o \
		moc_contest.o \
		moc_task.o \
		moc_testcase.o \
		moc_settings.o \
		moc_compiler.o \
		moc_filelineedit.o \
		moc_summarytree.o \
		moc_taskeditwidget.o \
		moc_testcaseeditwidget.o \
		moc_generalsettings.o \
		moc_compilersettings.o \
		moc_addtestcaseswizard.o \
		moc_contestant.o \
		moc_judgingdialog.o \
		moc_judgingthread.o \
		moc_optionsdialog.o \
		moc_resultviewer.o \
		moc_assignmentthread.o \
		moc_detaildialog.o \
		moc_newcontestwidget.o \
		moc_opencontestwidget.o \
		moc_newcontestdialog.o \
		moc_opencontestdialog.o \
		moc_welcomedialog.o \
		moc_addtaskdialog.o \
		moc_qtsinglecoreapplication.o \
		moc_qtsingleapplication.o \
		moc_qtlocalpeer.o \
		moc_advancedcompilersettingsdialog.o \
		moc_environmentvariablesdialog.o \
		moc_editvariabledialog.o \
		moc_addcompilerwizard.o \
		moc_selftestutil.o \
		moc_exportutil.o \
		qrc_resource.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		lemon.pro
QMAKE_TARGET  = lemon
DESTDIR       = 
TARGET        = lemon

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

all: Makefile $(TARGET)

$(TARGET): ui_lemon.h ui_taskeditwidget.h ui_testcaseeditwidget.h ui_generalsettings.h ui_compilersettings.h ui_addtestcaseswizard.h ui_judgingdialog.h ui_optionsdialog.h ui_detaildialog.h ui_newcontestwidget.h ui_opencontestwidget.h ui_newcontestdialog.h ui_opencontestdialog.h ui_welcomedialog.h ui_addtaskdialog.h ui_advancedcompilersettingsdialog.h ui_environmentvariablesdialog.h ui_editvariabledialog.h ui_addcompilerwizard.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: lemon.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtNetwork.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile lemon.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtNetwork.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile lemon.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/lemon1.0.0 || $(MKDIR) .tmp/lemon1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/lemon1.0.0/ && $(COPY_FILE) --parents lemon.h contest.h task.h testcase.h settings.h compiler.h filelineedit.h summarytree.h taskeditwidget.h testcaseeditwidget.h generalsettings.h compilersettings.h addtestcaseswizard.h contestant.h judgingdialog.h judgingthread.h optionsdialog.h resultviewer.h assignmentthread.h globaltype.h detaildialog.h newcontestwidget.h opencontestwidget.h newcontestdialog.h opencontestdialog.h welcomedialog.h addtaskdialog.h qtlockedfile/qtlockedfile.h qtsingleapplication/qtsinglecoreapplication.h qtsingleapplication/qtsingleapplication.h qtsingleapplication/qtlocalpeer.h advancedcompilersettingsdialog.h environmentvariablesdialog.h editvariabledialog.h addcompilerwizard.h selftestutil.h exportutil.h .tmp/lemon1.0.0/ && $(COPY_FILE) --parents resource.qrc .tmp/lemon1.0.0/ && $(COPY_FILE) --parents main.cpp lemon.cpp contest.cpp task.cpp testcase.cpp settings.cpp compiler.cpp filelineedit.cpp summarytree.cpp taskeditwidget.cpp testcaseeditwidget.cpp generalsettings.cpp compilersettings.cpp addtestcaseswizard.cpp contestant.cpp judgingdialog.cpp judgingthread.cpp optionsdialog.cpp resultviewer.cpp assignmentthread.cpp detaildialog.cpp newcontestwidget.cpp opencontestwidget.cpp newcontestdialog.cpp opencontestdialog.cpp welcomedialog.cpp addtaskdialog.cpp qtsingleapplication/qtsinglecoreapplication.cpp qtsingleapplication/qtsingleapplication.cpp qtsingleapplication/qtlocalpeer.cpp advancedcompilersettingsdialog.cpp environmentvariablesdialog.cpp editvariabledialog.cpp addcompilerwizard.cpp selftestutil.cpp exportutil.cpp .tmp/lemon1.0.0/ && $(COPY_FILE) --parents forms_unix/lemon.ui forms_unix/taskeditwidget.ui forms_unix/testcaseeditwidget.ui forms_unix/generalsettings.ui forms_unix/compilersettings.ui forms_unix/addtestcaseswizard.ui forms_unix/judgingdialog.ui forms_unix/optionsdialog.ui forms_unix/detaildialog.ui forms_unix/newcontestwidget.ui forms_unix/opencontestwidget.ui forms_unix/newcontestdialog.ui forms_unix/opencontestdialog.ui forms_unix/welcomedialog.ui forms_unix/addtaskdialog.ui forms_unix/advancedcompilersettingsdialog.ui forms_unix/environmentvariablesdialog.ui forms_unix/editvariabledialog.ui forms_unix/addcompilerwizard.ui .tmp/lemon1.0.0/ && $(COPY_FILE) --parents lemon_zh_CN.ts .tmp/lemon1.0.0/ && (cd `dirname .tmp/lemon1.0.0` && $(TAR) lemon1.0.0.tar lemon1.0.0 && $(COMPRESS) lemon1.0.0.tar) && $(MOVE) `dirname .tmp/lemon1.0.0`/lemon1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/lemon1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_lemon.cpp moc_contest.cpp moc_task.cpp moc_testcase.cpp moc_settings.cpp moc_compiler.cpp moc_filelineedit.cpp moc_summarytree.cpp moc_taskeditwidget.cpp moc_testcaseeditwidget.cpp moc_generalsettings.cpp moc_compilersettings.cpp moc_addtestcaseswizard.cpp moc_contestant.cpp moc_judgingdialog.cpp moc_judgingthread.cpp moc_optionsdialog.cpp moc_resultviewer.cpp moc_assignmentthread.cpp moc_detaildialog.cpp moc_newcontestwidget.cpp moc_opencontestwidget.cpp moc_newcontestdialog.cpp moc_opencontestdialog.cpp moc_welcomedialog.cpp moc_addtaskdialog.cpp moc_qtsinglecoreapplication.cpp moc_qtsingleapplication.cpp moc_qtlocalpeer.cpp moc_advancedcompilersettingsdialog.cpp moc_environmentvariablesdialog.cpp moc_editvariabledialog.cpp moc_addcompilerwizard.cpp moc_selftestutil.cpp moc_exportutil.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_lemon.cpp moc_contest.cpp moc_task.cpp moc_testcase.cpp moc_settings.cpp moc_compiler.cpp moc_filelineedit.cpp moc_summarytree.cpp moc_taskeditwidget.cpp moc_testcaseeditwidget.cpp moc_generalsettings.cpp moc_compilersettings.cpp moc_addtestcaseswizard.cpp moc_contestant.cpp moc_judgingdialog.cpp moc_judgingthread.cpp moc_optionsdialog.cpp moc_resultviewer.cpp moc_assignmentthread.cpp moc_detaildialog.cpp moc_newcontestwidget.cpp moc_opencontestwidget.cpp moc_newcontestdialog.cpp moc_opencontestdialog.cpp moc_welcomedialog.cpp moc_addtaskdialog.cpp moc_qtsinglecoreapplication.cpp moc_qtsingleapplication.cpp moc_qtlocalpeer.cpp moc_advancedcompilersettingsdialog.cpp moc_environmentvariablesdialog.cpp moc_editvariabledialog.cpp moc_addcompilerwizard.cpp moc_selftestutil.cpp moc_exportutil.cpp
moc_lemon.cpp: lemon.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) lemon.h -o moc_lemon.cpp

moc_contest.cpp: globaltype.h \
		contest.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) contest.h -o moc_contest.cpp

moc_task.cpp: task.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) task.h -o moc_task.cpp

moc_testcase.cpp: testcase.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) testcase.h -o moc_testcase.cpp

moc_settings.cpp: settings.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) settings.h -o moc_settings.cpp

moc_compiler.cpp: compiler.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) compiler.h -o moc_compiler.cpp

moc_filelineedit.cpp: filelineedit.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) filelineedit.h -o moc_filelineedit.cpp

moc_summarytree.cpp: summarytree.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) summarytree.h -o moc_summarytree.cpp

moc_taskeditwidget.cpp: taskeditwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) taskeditwidget.h -o moc_taskeditwidget.cpp

moc_testcaseeditwidget.cpp: testcaseeditwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) testcaseeditwidget.h -o moc_testcaseeditwidget.cpp

moc_generalsettings.cpp: generalsettings.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) generalsettings.h -o moc_generalsettings.cpp

moc_compilersettings.cpp: compilersettings.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) compilersettings.h -o moc_compilersettings.cpp

moc_addtestcaseswizard.cpp: addtestcaseswizard.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) addtestcaseswizard.h -o moc_addtestcaseswizard.cpp

moc_contestant.cpp: globaltype.h \
		contestant.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) contestant.h -o moc_contestant.cpp

moc_judgingdialog.cpp: globaltype.h \
		judgingdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) judgingdialog.h -o moc_judgingdialog.cpp

moc_judgingthread.cpp: globaltype.h \
		judgingthread.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) judgingthread.h -o moc_judgingthread.cpp

moc_optionsdialog.cpp: optionsdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) optionsdialog.h -o moc_optionsdialog.cpp

moc_resultviewer.cpp: resultviewer.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) resultviewer.h -o moc_resultviewer.cpp

moc_assignmentthread.cpp: globaltype.h \
		assignmentthread.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) assignmentthread.h -o moc_assignmentthread.cpp

moc_detaildialog.cpp: detaildialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) detaildialog.h -o moc_detaildialog.cpp

moc_newcontestwidget.cpp: newcontestwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) newcontestwidget.h -o moc_newcontestwidget.cpp

moc_opencontestwidget.cpp: opencontestwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) opencontestwidget.h -o moc_opencontestwidget.cpp

moc_newcontestdialog.cpp: newcontestdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) newcontestdialog.h -o moc_newcontestdialog.cpp

moc_opencontestdialog.cpp: opencontestdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) opencontestdialog.h -o moc_opencontestdialog.cpp

moc_welcomedialog.cpp: welcomedialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) welcomedialog.h -o moc_welcomedialog.cpp

moc_addtaskdialog.cpp: addtaskdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) addtaskdialog.h -o moc_addtaskdialog.cpp

moc_qtsinglecoreapplication.cpp: qtsingleapplication/qtsinglecoreapplication.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) qtsingleapplication/qtsinglecoreapplication.h -o moc_qtsinglecoreapplication.cpp

moc_qtsingleapplication.cpp: qtsingleapplication/qtsingleapplication.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) qtsingleapplication/qtsingleapplication.h -o moc_qtsingleapplication.cpp

moc_qtlocalpeer.cpp: qtlockedfile/qtlockedfile.h \
		qtsingleapplication/qtlocalpeer.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) qtsingleapplication/qtlocalpeer.h -o moc_qtlocalpeer.cpp

moc_advancedcompilersettingsdialog.cpp: advancedcompilersettingsdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) advancedcompilersettingsdialog.h -o moc_advancedcompilersettingsdialog.cpp

moc_environmentvariablesdialog.cpp: environmentvariablesdialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) environmentvariablesdialog.h -o moc_environmentvariablesdialog.cpp

moc_editvariabledialog.cpp: editvariabledialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) editvariabledialog.h -o moc_editvariabledialog.cpp

moc_addcompilerwizard.cpp: addcompilerwizard.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) addcompilerwizard.h -o moc_addcompilerwizard.cpp

moc_selftestutil.cpp: selftestutil.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) selftestutil.h -o moc_selftestutil.cpp

moc_exportutil.cpp: exportutil.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) exportutil.h -o moc_exportutil.cpp

compiler_rcc_make_all: qrc_resource.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resource.cpp
qrc_resource.cpp: resource.qrc \
		lemon_zh_CN.qm \
		qt_zh_CN.qm \
		downarrow.png \
		uparrow.png \
		add.png \
		icon.png \
		rod.png \
		cross.png \
		watcher_unix \
		realjudge_linux \
		realjudge_win32.exe
	/usr/lib/x86_64-linux-gnu/qt4/bin/rcc -name resource resource.qrc -o qrc_resource.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_lemon.h ui_taskeditwidget.h ui_testcaseeditwidget.h ui_generalsettings.h ui_compilersettings.h ui_addtestcaseswizard.h ui_judgingdialog.h ui_optionsdialog.h ui_detaildialog.h ui_newcontestwidget.h ui_opencontestwidget.h ui_newcontestdialog.h ui_opencontestdialog.h ui_welcomedialog.h ui_addtaskdialog.h ui_advancedcompilersettingsdialog.h ui_environmentvariablesdialog.h ui_editvariabledialog.h ui_addcompilerwizard.h
compiler_uic_clean:
	-$(DEL_FILE) ui_lemon.h ui_taskeditwidget.h ui_testcaseeditwidget.h ui_generalsettings.h ui_compilersettings.h ui_addtestcaseswizard.h ui_judgingdialog.h ui_optionsdialog.h ui_detaildialog.h ui_newcontestwidget.h ui_opencontestwidget.h ui_newcontestdialog.h ui_opencontestdialog.h ui_welcomedialog.h ui_addtaskdialog.h ui_advancedcompilersettingsdialog.h ui_environmentvariablesdialog.h ui_editvariabledialog.h ui_addcompilerwizard.h
ui_lemon.h: forms_unix/lemon.ui \
		summarytree.h \
		taskeditwidget.h \
		testcaseeditwidget.h \
		resultviewer.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/lemon.ui -o ui_lemon.h

ui_taskeditwidget.h: forms_unix/taskeditwidget.ui \
		filelineedit.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/taskeditwidget.ui -o ui_taskeditwidget.h

ui_testcaseeditwidget.h: forms_unix/testcaseeditwidget.ui \
		filelineedit.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/testcaseeditwidget.ui -o ui_testcaseeditwidget.h

ui_generalsettings.h: forms_unix/generalsettings.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/generalsettings.ui -o ui_generalsettings.h

ui_compilersettings.h: forms_unix/compilersettings.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/compilersettings.ui -o ui_compilersettings.h

ui_addtestcaseswizard.h: forms_unix/addtestcaseswizard.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/addtestcaseswizard.ui -o ui_addtestcaseswizard.h

ui_judgingdialog.h: forms_unix/judgingdialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/judgingdialog.ui -o ui_judgingdialog.h

ui_optionsdialog.h: forms_unix/optionsdialog.ui \
		generalsettings.h \
		compilersettings.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/optionsdialog.ui -o ui_optionsdialog.h

ui_detaildialog.h: forms_unix/detaildialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/detaildialog.ui -o ui_detaildialog.h

ui_newcontestwidget.h: forms_unix/newcontestwidget.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/newcontestwidget.ui -o ui_newcontestwidget.h

ui_opencontestwidget.h: forms_unix/opencontestwidget.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/opencontestwidget.ui -o ui_opencontestwidget.h

ui_newcontestdialog.h: forms_unix/newcontestdialog.ui \
		newcontestwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/newcontestdialog.ui -o ui_newcontestdialog.h

ui_opencontestdialog.h: forms_unix/opencontestdialog.ui \
		opencontestwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/opencontestdialog.ui -o ui_opencontestdialog.h

ui_welcomedialog.h: forms_unix/welcomedialog.ui \
		opencontestwidget.h \
		newcontestwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/welcomedialog.ui -o ui_welcomedialog.h

ui_addtaskdialog.h: forms_unix/addtaskdialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/addtaskdialog.ui -o ui_addtaskdialog.h

ui_advancedcompilersettingsdialog.h: forms_unix/advancedcompilersettingsdialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/advancedcompilersettingsdialog.ui -o ui_advancedcompilersettingsdialog.h

ui_environmentvariablesdialog.h: forms_unix/environmentvariablesdialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/environmentvariablesdialog.ui -o ui_environmentvariablesdialog.h

ui_editvariabledialog.h: forms_unix/editvariabledialog.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/editvariabledialog.ui -o ui_editvariabledialog.h

ui_addcompilerwizard.h: forms_unix/addcompilerwizard.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic forms_unix/addcompilerwizard.ui -o ui_addcompilerwizard.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp qtsingleapplication/qtsingleapplication.h \
		lemon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

lemon.o: lemon.cpp lemon.h \
		ui_lemon.h \
		task.h \
		testcase.h \
		contest.h \
		globaltype.h \
		compiler.h \
		contestant.h \
		settings.h \
		optionsdialog.h \
		addcompilerwizard.h \
		newcontestdialog.h \
		opencontestdialog.h \
		welcomedialog.h \
		addtaskdialog.h \
		detaildialog.h \
		selftestutil.h \
		exportutil.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lemon.o lemon.cpp

contest.o: contest.cpp contest.h \
		globaltype.h \
		task.h \
		testcase.h \
		settings.h \
		compiler.h \
		contestant.h \
		judgingthread.h \
		assignmentthread.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o contest.o contest.cpp

task.o: task.cpp task.h \
		testcase.h \
		settings.h \
		compiler.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o task.o task.cpp

testcase.o: testcase.cpp testcase.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o testcase.o testcase.cpp

settings.o: settings.cpp settings.h \
		compiler.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o settings.o settings.cpp

compiler.o: compiler.cpp compiler.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o compiler.o compiler.cpp

filelineedit.o: filelineedit.cpp filelineedit.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o filelineedit.o filelineedit.cpp

summarytree.o: summarytree.cpp summarytree.h \
		addtestcaseswizard.h \
		settings.h \
		contest.h \
		globaltype.h \
		task.h \
		testcase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o summarytree.o summarytree.cpp

taskeditwidget.o: taskeditwidget.cpp taskeditwidget.h \
		ui_taskeditwidget.h \
		settings.h \
		compiler.h \
		task.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o taskeditwidget.o taskeditwidget.cpp

testcaseeditwidget.o: testcaseeditwidget.cpp testcaseeditwidget.h \
		ui_testcaseeditwidget.h \
		settings.h \
		testcase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o testcaseeditwidget.o testcaseeditwidget.cpp

generalsettings.o: generalsettings.cpp generalsettings.h \
		ui_generalsettings.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o generalsettings.o generalsettings.cpp

compilersettings.o: compilersettings.cpp compilersettings.h \
		ui_compilersettings.h \
		advancedcompilersettingsdialog.h \
		addcompilerwizard.h \
		settings.h \
		compiler.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o compilersettings.o compilersettings.cpp

addtestcaseswizard.o: addtestcaseswizard.cpp addtestcaseswizard.h \
		ui_addtestcaseswizard.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addtestcaseswizard.o addtestcaseswizard.cpp

contestant.o: contestant.cpp contestant.h \
		globaltype.h \
		contest.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o contestant.o contestant.cpp

judgingdialog.o: judgingdialog.cpp judgingdialog.h \
		globaltype.h \
		ui_judgingdialog.h \
		contest.h \
		task.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o judgingdialog.o judgingdialog.cpp

judgingthread.o: judgingthread.cpp judgingthread.h \
		globaltype.h \
		settings.h \
		task.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o judgingthread.o judgingthread.cpp

optionsdialog.o: optionsdialog.cpp optionsdialog.h \
		ui_optionsdialog.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o optionsdialog.o optionsdialog.cpp

resultviewer.o: resultviewer.cpp resultviewer.h \
		judgingdialog.h \
		globaltype.h \
		contestant.h \
		settings.h \
		contest.h \
		task.h \
		detaildialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o resultviewer.o resultviewer.cpp

assignmentthread.o: assignmentthread.cpp assignmentthread.h \
		globaltype.h \
		judgingthread.h \
		settings.h \
		compiler.h \
		task.h \
		testcase.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o assignmentthread.o assignmentthread.cpp

detaildialog.o: detaildialog.cpp detaildialog.h \
		ui_detaildialog.h \
		task.h \
		testcase.h \
		contest.h \
		globaltype.h \
		contestant.h \
		judgingdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o detaildialog.o detaildialog.cpp

newcontestwidget.o: newcontestwidget.cpp newcontestwidget.h \
		ui_newcontestwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o newcontestwidget.o newcontestwidget.cpp

opencontestwidget.o: opencontestwidget.cpp opencontestwidget.h \
		ui_opencontestwidget.h \
		contest.h \
		globaltype.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o opencontestwidget.o opencontestwidget.cpp

newcontestdialog.o: newcontestdialog.cpp newcontestdialog.h \
		ui_newcontestdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o newcontestdialog.o newcontestdialog.cpp

opencontestdialog.o: opencontestdialog.cpp opencontestdialog.h \
		ui_opencontestdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o opencontestdialog.o opencontestdialog.cpp

welcomedialog.o: welcomedialog.cpp welcomedialog.h \
		ui_welcomedialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o welcomedialog.o welcomedialog.cpp

addtaskdialog.o: addtaskdialog.cpp addtaskdialog.h \
		ui_addtaskdialog.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addtaskdialog.o addtaskdialog.cpp

qtsinglecoreapplication.o: qtsingleapplication/qtsinglecoreapplication.cpp qtsingleapplication/qtsinglecoreapplication.h \
		qtsingleapplication/qtlocalpeer.h \
		qtlockedfile/qtlockedfile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtsinglecoreapplication.o qtsingleapplication/qtsinglecoreapplication.cpp

qtsingleapplication.o: qtsingleapplication/qtsingleapplication.cpp qtsingleapplication/qtsingleapplication.h \
		qtsingleapplication/qtlocalpeer.h \
		qtlockedfile/qtlockedfile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtsingleapplication.o qtsingleapplication/qtsingleapplication.cpp

qtlocalpeer.o: qtsingleapplication/qtlocalpeer.cpp qtsingleapplication/qtlocalpeer.h \
		qtlockedfile/qtlockedfile.h \
		qtlockedfile/qtlockedfile.cpp \
		qtlockedfile/qtlockedfile_win.cpp \
		qtlockedfile/qtlockedfile_unix.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qtlocalpeer.o qtsingleapplication/qtlocalpeer.cpp

advancedcompilersettingsdialog.o: advancedcompilersettingsdialog.cpp advancedcompilersettingsdialog.h \
		ui_advancedcompilersettingsdialog.h \
		environmentvariablesdialog.h \
		compiler.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o advancedcompilersettingsdialog.o advancedcompilersettingsdialog.cpp

environmentvariablesdialog.o: environmentvariablesdialog.cpp environmentvariablesdialog.h \
		ui_environmentvariablesdialog.h \
		editvariabledialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o environmentvariablesdialog.o environmentvariablesdialog.cpp

editvariabledialog.o: editvariabledialog.cpp editvariabledialog.h \
		ui_editvariabledialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o editvariabledialog.o editvariabledialog.cpp

addcompilerwizard.o: addcompilerwizard.cpp addcompilerwizard.h \
		ui_addcompilerwizard.h \
		compiler.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addcompilerwizard.o addcompilerwizard.cpp

selftestutil.o: selftestutil.cpp selftestutil.h \
		contest.h \
		globaltype.h \
		task.h \
		testcase.h \
		settings.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o selftestutil.o selftestutil.cpp

exportutil.o: exportutil.cpp exportutil.h \
		contest.h \
		globaltype.h \
		task.h \
		testcase.h \
		contestant.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o exportutil.o exportutil.cpp

moc_lemon.o: moc_lemon.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_lemon.o moc_lemon.cpp

moc_contest.o: moc_contest.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_contest.o moc_contest.cpp

moc_task.o: moc_task.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_task.o moc_task.cpp

moc_testcase.o: moc_testcase.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_testcase.o moc_testcase.cpp

moc_settings.o: moc_settings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_settings.o moc_settings.cpp

moc_compiler.o: moc_compiler.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_compiler.o moc_compiler.cpp

moc_filelineedit.o: moc_filelineedit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_filelineedit.o moc_filelineedit.cpp

moc_summarytree.o: moc_summarytree.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_summarytree.o moc_summarytree.cpp

moc_taskeditwidget.o: moc_taskeditwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_taskeditwidget.o moc_taskeditwidget.cpp

moc_testcaseeditwidget.o: moc_testcaseeditwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_testcaseeditwidget.o moc_testcaseeditwidget.cpp

moc_generalsettings.o: moc_generalsettings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_generalsettings.o moc_generalsettings.cpp

moc_compilersettings.o: moc_compilersettings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_compilersettings.o moc_compilersettings.cpp

moc_addtestcaseswizard.o: moc_addtestcaseswizard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addtestcaseswizard.o moc_addtestcaseswizard.cpp

moc_contestant.o: moc_contestant.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_contestant.o moc_contestant.cpp

moc_judgingdialog.o: moc_judgingdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_judgingdialog.o moc_judgingdialog.cpp

moc_judgingthread.o: moc_judgingthread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_judgingthread.o moc_judgingthread.cpp

moc_optionsdialog.o: moc_optionsdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_optionsdialog.o moc_optionsdialog.cpp

moc_resultviewer.o: moc_resultviewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_resultviewer.o moc_resultviewer.cpp

moc_assignmentthread.o: moc_assignmentthread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_assignmentthread.o moc_assignmentthread.cpp

moc_detaildialog.o: moc_detaildialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_detaildialog.o moc_detaildialog.cpp

moc_newcontestwidget.o: moc_newcontestwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_newcontestwidget.o moc_newcontestwidget.cpp

moc_opencontestwidget.o: moc_opencontestwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_opencontestwidget.o moc_opencontestwidget.cpp

moc_newcontestdialog.o: moc_newcontestdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_newcontestdialog.o moc_newcontestdialog.cpp

moc_opencontestdialog.o: moc_opencontestdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_opencontestdialog.o moc_opencontestdialog.cpp

moc_welcomedialog.o: moc_welcomedialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_welcomedialog.o moc_welcomedialog.cpp

moc_addtaskdialog.o: moc_addtaskdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addtaskdialog.o moc_addtaskdialog.cpp

moc_qtsinglecoreapplication.o: moc_qtsinglecoreapplication.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtsinglecoreapplication.o moc_qtsinglecoreapplication.cpp

moc_qtsingleapplication.o: moc_qtsingleapplication.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtsingleapplication.o moc_qtsingleapplication.cpp

moc_qtlocalpeer.o: moc_qtlocalpeer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qtlocalpeer.o moc_qtlocalpeer.cpp

moc_advancedcompilersettingsdialog.o: moc_advancedcompilersettingsdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_advancedcompilersettingsdialog.o moc_advancedcompilersettingsdialog.cpp

moc_environmentvariablesdialog.o: moc_environmentvariablesdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_environmentvariablesdialog.o moc_environmentvariablesdialog.cpp

moc_editvariabledialog.o: moc_editvariabledialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_editvariabledialog.o moc_editvariabledialog.cpp

moc_addcompilerwizard.o: moc_addcompilerwizard.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addcompilerwizard.o moc_addcompilerwizard.cpp

moc_selftestutil.o: moc_selftestutil.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_selftestutil.o moc_selftestutil.cpp

moc_exportutil.o: moc_exportutil.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_exportutil.o moc_exportutil.cpp

qrc_resource.o: qrc_resource.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resource.o qrc_resource.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

