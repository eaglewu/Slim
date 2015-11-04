//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_ROUTE_GROUP_INTERFACE_H
#define SLIM_ROUTE_GROUP_INTERFACE_H

extern zend_class_entry *slim_route_group_interface_ce;
SLIM_MINIT_FUNCTION(route_group_interface);

#endif //SLIM_ROUTE_GROUP_INTERFACE_H