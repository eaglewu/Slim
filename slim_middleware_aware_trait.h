//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_MIDDLEWARE_AWARE_TRAIT_H
#define SLIM_MIDDLEWARE_AWARE_TRAIT_H

extern zend_class_entry *slim_middleware_aware_trait_ce;
SLIM_MINIT_FUNCTION(middleware_aware_trait);

#endif //SLIM_MIDDLEWARE_AWARE_TRAIT_H