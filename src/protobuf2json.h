/*
 * Copyright (c) 2014 Oleg Efimov <efimovov@gmail.com>
 *
 * protobuf2json-c is free software; you can redistribute it
 * and/or modify it under the terms of the MIT license.
 * See LICENSE for details.
 */

#ifndef PROTOBUF2JSON_H
#define PROTOBUF2JSON_H 1

#include <jansson.h>
/*#include <google/protobuf-c/protobuf-c.h>*/
#include <protobuf-c.h>

#ifdef __cplusplus
extern "C" {
#endif

/* === Protobuf -> JSON === */
int protobuf2json_object(ProtobufCMessage *protobuf, json_t *json);

/* === JSON -> Protobuf === */
int json2protobuf(json_t *json, ProtobufCMessage *protobuf);

/* === END === */

#ifdef __cplusplus
}
#endif

#endif