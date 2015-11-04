//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_REQUEST_H
#define SLIM_REQUEST_H

extern zend_class_entry *slim_request_ce;
SLIM_MINIT_FUNCTION(request);

#endif //SLIM_REQUEST_H