//
// Created by eagle on 15/11/4.
//
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_slim.h"
#include "slim_headers.h"

zend_class_entry *slim_headers_ce;

/** 构造函数 **/
PHP_METHOD(slim_headers, __construct)
{

}

/** 方法参数个数声明 **/
ZEND_BEGIN_ARG_INFO_EX(slim_headers_void_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

zend_function_entry slim_headers_methods[] = {
   PHP_ME(slim_headers,     __construct,    slim_headers_void_arginfo,    ZEND_ACC_PUBLIC | ZEND_ACC_CTOR)
   {NULL, NULL, NULL}
};

SLIM_MINIT_FUNCTION(headers)
{
   //声明属性,设置累修饰符等
   zend_class_entry ce;
   INIT_CLASS_ENTRY(ce, "Slim\\Http\\Headers", slim_headers_methods);
   slim_headers_ce = zend_register_internal_class_ex(&ce, NULL, NULL TSRMLS_CC);
   //slim_headers_ce->ce_flags |= ZEND_ACC_FINAL_CLASS;

   return SUCCESS;
}
