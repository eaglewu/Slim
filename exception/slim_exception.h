//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_EXCEPTION_H
#define SLIM_EXCEPTION_H

extern zend_class_entry *slim_exception_ce;
SLIM_MINIT_FUNCTION(exception);

#endif //SLIM_EXCEPTION_H