//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_CALLABLE_RESOLVER_H
#define SLIM_CALLABLE_RESOLVER_H

extern zend_class_entry *slim_callable_resolver_ce;
SLIM_MINIT_FUNCTION(callable_resolver);

#endif //SLIM_CALLABLE_RESOLVER_H