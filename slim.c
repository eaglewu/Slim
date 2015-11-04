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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_slim.h"
#include "slim_components.h"

static int le_slim;

const zend_function_entry slim_functions[] = {
    PHP_FE_END    /* Must be the last line in slim_functions[] */
};

zend_module_entry slim_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    "slim",
    slim_functions,
    PHP_MINIT(slim),
    PHP_MSHUTDOWN(slim),
    PHP_RINIT(slim),        /* Replace with NULL if there's nothing to do at request start */
    PHP_RSHUTDOWN(slim),    /* Replace with NULL if there's nothing to do at request end */
    PHP_MINFO(slim),
#if ZEND_MODULE_API_NO >= 20010901
    PHP_SLIM_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_SLIM
ZEND_GET_MODULE(slim)
#endif

PHP_MINIT_FUNCTION (slim)
{

  /** 注册组件 **/
  /** Namespace \Slim **/
  SLIM_MODULE_STARTUP (app);
  SLIM_MODULE_STARTUP (callable_resolver);
  SLIM_MODULE_STARTUP (callable_resolver_aware_trait);
  SLIM_MODULE_STARTUP (container);
  SLIM_MODULE_STARTUP (middleware_aware_trait);
  SLIM_MODULE_STARTUP (routable);
  SLIM_MODULE_STARTUP (route);
  SLIM_MODULE_STARTUP (route_group);
  SLIM_MODULE_STARTUP (router);

  /** Namespace \Slim\Exception **/
  SLIM_MODULE_STARTUP (exception);
  SLIM_MODULE_STARTUP (not_found_exception);

  /** Namespace \Slim\Handlers\Strategies **/
  SLIM_MODULE_STARTUP (request_response);
  SLIM_MODULE_STARTUP (request_response_args);

  /** Namespace \Slim\Handlers **/
  SLIM_MODULE_STARTUP (error);
  SLIM_MODULE_STARTUP (not_allowed);
  SLIM_MODULE_STARTUP (not_found);

  /** Namespace \Slim\Http **/
  SLIM_MODULE_STARTUP (body);
  SLIM_MODULE_STARTUP (collection);
  SLIM_MODULE_STARTUP (cookies);
  SLIM_MODULE_STARTUP (environment);
  SLIM_MODULE_STARTUP (headers);
  SLIM_MODULE_STARTUP (message);
  SLIM_MODULE_STARTUP (request);
  SLIM_MODULE_STARTUP (request_body);
  SLIM_MODULE_STARTUP (response);
  SLIM_MODULE_STARTUP (stream);
  SLIM_MODULE_STARTUP (upload_file);
  SLIM_MODULE_STARTUP (uri);

  /** Namespace \Slim\Interfaces\Http **/
  SLIM_MODULE_STARTUP (callable_resolver_interface);
  SLIM_MODULE_STARTUP (invocation_strategy_interface);
  SLIM_MODULE_STARTUP (route_group_interface);
  SLIM_MODULE_STARTUP (route_interface);
  SLIM_MODULE_STARTUP (router_interface);

  /** Namespace \Slim\Interfaces **/
  SLIM_MODULE_STARTUP (collection_interface);
  SLIM_MODULE_STARTUP (environment_interface);
  SLIM_MODULE_STARTUP (headers_interface);

  return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION (slim)
{
  return SUCCESS;
}

PHP_RINIT_FUNCTION (slim)
{
  return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION (slim)
{
  return SUCCESS;
}

PHP_MINFO_FUNCTION (slim)
{
  php_info_print_table_start ();
  php_info_print_table_header (2, "Slim support", "enabled");
  php_info_print_table_header (2, "Slim version", PHP_SLIM_VERSION);
  php_info_print_table_end ();
}





