//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_URI_H
#define SLIM_URI_H

extern zend_class_entry *slim_uri_ce;
SLIM_MINIT_FUNCTION(uri);

#endif //SLIM_URI_H