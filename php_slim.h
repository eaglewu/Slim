/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2015 The PHP Group                                |
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

#ifndef PHP_SLIM_H
#define PHP_SLIM_H

#include "php.h"
#include "php_ini.h"

extern zend_module_entry slim_module_entry;
#define phpext_slim_ptr &slim_module_entry

#define PHP_SLIM_VERSION "0.1.0" /* Replace with version number for your extension */

//
#define SLIM_MINIT_FUNCTION(module)      ZEND_MINIT_FUNCTION(slim_##module)
#define SLIM_RINIT_FUNCTION(module)      ZEND_RINIT_FUNCTION(slim_##module)
#define SLIM_MODULE_STARTUP(module)             ZEND_MODULE_STARTUP_N(slim_##module)(INIT_FUNC_ARGS_PASSTHRU)
#define SLIM_SHUTDOWN_FUNCTION(module)   ZEND_MSHUTDOWN_FUNCTION(slim_##module)
#define SLIM_SHUTDOWN(module)            ZEND_MODULE_SHUTDOWN_N(slim_##module)(INIT_FUNC_ARGS_PASSTHRU)

#ifdef PHP_WIN32
#	define PHP_SLIM_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_SLIM_API __attribute__ ((visibility("default")))
#else
#	define PHP_SLIM_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION (slim);
PHP_MSHUTDOWN_FUNCTION (slim);
PHP_RINIT_FUNCTION (slim);
PHP_RSHUTDOWN_FUNCTION (slim);
PHP_MINFO_FUNCTION (slim);

#ifdef ZTS
#define SLIM_G(v) TSRMG(slim_globals_id, zend_slim_globals *, v)
#else
#define SLIM_G(v) (slim_globals.v)
#endif

#endif	/* PHP_SLIM_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
