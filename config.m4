dnl $Id$
dnl config.m4 for extension vector

dnl Comments in this file start with the string 'dnl'.
dnl Remove where necessary. This file will not work
dnl without editing.

dnl If your extension references something external, use with:

dnl PHP_ARG_WITH(vector, for vector support,
dnl Make sure that the comment is aligned:
dnl [  --with-vector             Include vector support])

dnl Otherwise use enable:

dnl PHP_ARG_ENABLE(vector, whether to enable vector support,
dnl Make sure that the comment is aligned:
dnl [  --enable-vector           Enable vector support])

if test "$PHP_VECTOR" != "no"; then
  dnl Write more examples of tests here...

  dnl # --with-vector -> check with-path
  dnl SEARCH_PATH="/usr/local /usr"     # you might want to change this
  dnl SEARCH_FOR="/include/vector.h"  # you most likely want to change this
  dnl if test -r $PHP_VECTOR/$SEARCH_FOR; then # path given as parameter
  dnl   VECTOR_DIR=$PHP_VECTOR
  dnl else # search default path list
  dnl   AC_MSG_CHECKING([for vector files in default path])
  dnl   for i in $SEARCH_PATH ; do
  dnl     if test -r $i/$SEARCH_FOR; then
  dnl       VECTOR_DIR=$i
  dnl       AC_MSG_RESULT(found in $i)
  dnl     fi
  dnl   done
  dnl fi
  dnl
  dnl if test -z "$VECTOR_DIR"; then
  dnl   AC_MSG_RESULT([not found])
  dnl   AC_MSG_ERROR([Please reinstall the vector distribution])
  dnl fi

  dnl # --with-vector -> add include path
  dnl PHP_ADD_INCLUDE($VECTOR_DIR/include)

  dnl # --with-vector -> check for lib and symbol presence
  dnl LIBNAME=vector # you may want to change this
  dnl LIBSYMBOL=vector # you most likely want to change this 

  dnl PHP_CHECK_LIBRARY($LIBNAME,$LIBSYMBOL,
  dnl [
  dnl   PHP_ADD_LIBRARY_WITH_PATH($LIBNAME, $VECTOR_DIR/lib, VECTOR_SHARED_LIBADD)
  dnl   AC_DEFINE(HAVE_VECTORLIB,1,[ ])
  dnl ],[
  dnl   AC_MSG_ERROR([wrong vector lib version or lib not found])
  dnl ],[
  dnl   -L$VECTOR_DIR/lib -lm
  dnl ])
  dnl
  dnl PHP_SUBST(VECTOR_SHARED_LIBADD)

  PHP_NEW_EXTENSION(vector, vector.c, $ext_shared)
fi
