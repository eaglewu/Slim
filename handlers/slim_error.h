//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_ERROR_H
#define SLIM_ERROR_H

extern zend_class_entry *slim_error_ce;
SLIM_MINIT_FUNCTION(error);

#endif //SLIM_ERROR_H