//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_APP_H
#define SLIM_APP_H

extern zend_class_entry *slim_app_ce;
SLIM_MINIT_FUNCTION(app);

#endif //SLIM_APP_H