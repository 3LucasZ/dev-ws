// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__VECTOR2__STRUCT_H_
#define INTERFACES__MSG__VECTOR2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Vector2 in the package interfaces.
typedef struct interfaces__msg__Vector2
{
  int32_t x;
  int32_t y;
} interfaces__msg__Vector2;

// Struct for a sequence of interfaces__msg__Vector2.
typedef struct interfaces__msg__Vector2__Sequence
{
  interfaces__msg__Vector2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Vector2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__VECTOR2__STRUCT_H_
