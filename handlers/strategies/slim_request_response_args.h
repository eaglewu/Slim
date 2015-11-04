//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_REQUEST_RESPONSE_ARGS_H
#define SLIM_REQUEST_RESPONSE_ARGS_H

extern zend_class_entry *slim_request_response_args_ce;
SLIM_MINIT_FUNCTION(request_response_args);

#endif //SLIM_REQUEST_RESPONSE_ARGS_H