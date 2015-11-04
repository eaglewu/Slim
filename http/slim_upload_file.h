//
// Created by eagle on 15/11/4.
//
#ifndef PHP_SLIM_H
#include "php.h"
#include "php_slim.h"
#endif

#ifndef SLIM_UPLOAD_FILE_H
#define SLIM_UPLOAD_FILE_H

extern zend_class_entry *slim_upload_file_ce;
SLIM_MINIT_FUNCTION(upload_file);

#endif //SLIM_UPLOAD_FILE_H