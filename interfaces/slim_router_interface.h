//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_ROUTER_INTERFACE_H
#define SLIM_ROUTER_INTERFACE_H

extern zend_class_entry *slim_router_interface_ce;
SLIM_MINIT_FUNCTION(router_interface);

#endif //SLIM_ROUTER_INTERFACE_H