//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_REQUEST_RESPONSE_H
#define SLIM_REQUEST_RESPONSE_H

extern zend_class_entry *slim_request_response_ce;
SLIM_MINIT_FUNCTION(request_response);

#endif //SLIM_REQUEST_RESPONSE_H