//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_HEADERS_INTERFACE_H
#define SLIM_HEADERS_INTERFACE_H

extern zend_class_entry *slim_headers_interface_ce;
SLIM_MINIT_FUNCTION(headers_interface);

#endif //SLIM_HEADERS_INTERFACE_H