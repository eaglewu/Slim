//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_COOKIES_INTERFACE_H
#define SLIM_COOKIES_INTERFACE_H

extern zend_class_entry *slim_cookies_interface_ce;
SLIM_MINIT_FUNCTION(cookies_interface);

#endif //SLIM_COOKIES_INTERFACE_H