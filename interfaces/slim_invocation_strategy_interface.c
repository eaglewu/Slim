//
// Created by eagle on 15/11/4.
//
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_slim.h"
#include "slim_invocation_strategy_interface.h"

zend_class_entry *slim_invocation_strategy_interface_ce;

/** 构造函数 **/
PHP_METHOD(slim_invocation_strategy_interface, __construct)
{

}

/** 方法参数个数声明 **/
ZEND_BEGIN_ARG_INFO_EX(slim_invocation_strategy_interface_void_arginfo, 0, 0, 0)
ZEND_END_ARG_INFO()

zend_function_entry slim_invocation_strategy_interface_methods[] = {
   PHP_ME(slim_invocation_strategy_interface,     __construct,    slim_invocation_strategy_interface_void_arginfo,    ZEND_ACC_PUBLIC | ZEND_ACC_CTOR)
   {NULL, NULL, NULL}
};

SLIM_MINIT_FUNCTION(invocation_strategy_interface)
{
   //声明属性,设置累修饰符等
   zend_class_entry ce;
   INIT_CLASS_ENTRY(ce, "Slim\\Interfaces\\InvocationStrategyInterface", slim_invocation_strategy_interface_methods);
   slim_invocation_strategy_interface_ce = zend_register_internal_class_ex(&ce, NULL, NULL TSRMLS_CC);
   //slim_invocation_strategy_interface_ce->ce_flags |= ZEND_ACC_FINAL_CLASS;

   return SUCCESS;
}
