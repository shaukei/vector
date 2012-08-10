/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2012 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_VECTOR_H
#define PHP_VECTOR_H

extern zend_module_entry vector_module_entry;
#define phpext_vector_ptr &vector_module_entry

#ifdef PHP_WIN32
#	define PHP_VECTOR_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_VECTOR_API __attribute__ ((visibility("default")))
#else
#	define PHP_VECTOR_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(vector);
PHP_MSHUTDOWN_FUNCTION(vector);
PHP_RINIT_FUNCTION(vector);
PHP_RSHUTDOWN_FUNCTION(vector);
PHP_MINFO_FUNCTION(vector);

PHP_FUNCTION(vector_pi);	/* For testing, remove later. */

/* 
  	Declare any global variables you may need between the BEGIN
	and END macros here:     

ZEND_BEGIN_MODULE_GLOBALS(vector)
	long  global_value;
	char *global_string;
ZEND_END_MODULE_GLOBALS(vector)
*/

/* In every utility function you add that needs to use variables 
   in php_vector_globals, call TSRMLS_FETCH(); after declaring other 
   variables used by that function, or better yet, pass in TSRMLS_CC
   after the last function argument and declare your utility function
   with TSRMLS_DC after the last declared argument.  Always refer to
   the globals in your function as VECTOR_G(variable).  You are 
   encouraged to rename these macros something shorter, see
   examples in any other php module directory.
*/

#ifdef ZTS
#define VECTOR_G(v) TSRMG(vector_globals_id, zend_vector_globals *, v)
#else
#define VECTOR_G(v) (vector_globals.v)
#endif

#endif	/* PHP_VECTOR_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
