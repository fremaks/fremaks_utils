#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT(fremaks_utils, 1.0.0, [fremaks@163.com])
AM_INIT_AUTOMAKE(fremaks_utils, 1.0.0)
AC_CONFIG_SRCDIR([fms_common/src/fms_file.c])
#AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_LIBTOOL
# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_INT32_T
AC_TYPE_MODE_T
AC_TYPE_PID_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

# Checks for library functions.
#AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset mkdir rmdir strrchr])

AC_OUTPUT(Makefile fms_common/Makefile fms_common/src/Makefile fms_common/test/Makefile)
