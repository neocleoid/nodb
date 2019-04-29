#ifndef _UTIL_H_
#define _UTIL_H_

#define nil NULL

#define METADATA_T 0
#define OVERFLOW_T 1
#define SIGNATURE_T 2

enum nodb_type
{
    t_int,
    t_long,
    t_float,
    t_double,
    t_fixed_string,
    t_vchar,
    t_text,
    t_blob,
};

#endif