//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_ROUTABLE_H
#define SLIM_ROUTABLE_H

extern zend_class_entry *slim_routable_ce;
SLIM_MINIT_FUNCTION(routable);

#endif //SLIM_ROUTABLE_H