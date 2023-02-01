#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h> // `bool`
#include <stddef.h>  // `size_t`
#include <stdint.h>  // `int64_t`

typedef void* ujrpc_server_t;
typedef void* ujrpc_call_t;
typedef char const* ujrpc_str_t;

typedef void (*ujrpc_callback_t)(ujrpc_call_t);

typedef struct ujrpc_config_t {
    int port;
    int queue_depth;
    int batch_capacity;
    int max_callbacks;
} ujrpc_config_t;

void ujrpc_init(ujrpc_config_t const*, ujrpc_server_t*);
void ujrpc_add_procedure(ujrpc_server_t, ujrpc_str_t, ujrpc_callback_t);
void ujrpc_take_call(ujrpc_server_t);
void ujrpc_take_calls(ujrpc_server_t);
void ujrpc_free(ujrpc_server_t);

bool ujrpc_param_named_i64(ujrpc_call_t, ujrpc_str_t, int64_t*);
bool ujrpc_param_named_f64(ujrpc_call_t, ujrpc_str_t, double*);
bool ujrpc_param_named_str(ujrpc_call_t, ujrpc_str_t, ujrpc_str_t*, size_t*);
bool ujrpc_param_named_json(ujrpc_call_t, ujrpc_str_t, ujrpc_str_t*, size_t*);

bool ujrpc_param_positional_i64(ujrpc_call_t, size_t, int64_t*);
bool ujrpc_param_positional_f64(ujrpc_call_t, size_t, double*);
bool ujrpc_param_positional_str(ujrpc_call_t, size_t, ujrpc_str_t*, size_t*);
bool ujrpc_param_positional_json(ujrpc_call_t, size_t, ujrpc_str_t*, size_t*);

void ujrpc_call_reply_content(ujrpc_call_t, ujrpc_str_t, size_t);
void ujrpc_call_reply_error(ujrpc_call_t, int, ujrpc_str_t, size_t);

void ujrpc_call_send_content(ujrpc_call_t, ujrpc_str_t, size_t);
void ujrpc_call_send_error(ujrpc_call_t, int, ujrpc_str_t, size_t);
void ujrpc_call_send_error_invalid_params(ujrpc_call_t);
void ujrpc_call_send_error_out_of_memory(ujrpc_call_t);
void ujrpc_call_send_error_unknown(ujrpc_call_t);

#ifdef __cplusplus
} /* end extern "C" */
#endif