/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v2/http_tracer.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/trace/v2/http_tracer.upbdefs.h"

extern upb_def_init google_protobuf_any_proto_upbdefinit;
extern upb_def_init google_protobuf_struct_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_config_trace_v2_Tracing_msginit;
extern const upb_msglayout envoy_config_trace_v2_Tracing_Http_msginit;

static const upb_msglayout *layouts[2] = {
  &envoy_config_trace_v2_Tracing_msginit,
  &envoy_config_trace_v2_Tracing_Http_msginit,
};

static const char descriptor[487] = {'\n', '\'', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 't', 'r', 'a', 'c', 'e', '/', 'v', '2', '/', 'h', 
't', 't', 'p', '_', 't', 'r', 'a', 'c', 'e', 'r', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 'c', 
'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 'v', '2', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 
'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'g', 'o', 'o', 'g', 'l', 'e', '/', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 's', 't', 'r', 'u', 'c', 't', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 
'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 
't', 'o', '\"', '\351', '\001', '\n', '\007', 'T', 'r', 'a', 'c', 'i', 'n', 'g', '\022', '7', '\n', '\004', 'h', 't', 't', 'p', '\030', '\001', ' ', 
'\001', '(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 
'v', '2', '.', 'T', 'r', 'a', 'c', 'i', 'n', 'g', '.', 'H', 't', 't', 'p', 'R', '\004', 'h', 't', 't', 'p', '\032', '\244', '\001', '\n', 
'\004', 'H', 't', 't', 'p', '\022', '\033', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 'r', 
'\002', ' ', '\001', 'R', '\004', 'n', 'a', 'm', 'e', '\022', '5', '\n', '\006', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\002', ' ', '\001', '(', '\013', 
'2', '\027', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'S', 't', 'r', 'u', 'c', 't', 
'B', '\002', '\030', '\001', 'H', '\000', 'R', '\006', 'c', 'o', 'n', 'f', 'i', 'g', '\022', '9', '\n', '\014', 't', 'y', 'p', 'e', 'd', '_', 'c', 
'o', 'n', 'f', 'i', 'g', '\030', '\003', ' ', '\001', '(', '\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 
'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'H', '\000', 'R', '\013', 't', 'y', 'p', 'e', 'd', 'C', 'o', 'n', 'f', 'i', 'g', 'B', '\r', 
'\n', '\013', 'c', 'o', 'n', 'f', 'i', 'g', '_', 't', 'y', 'p', 'e', 'B', '@', '\n', '#', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 
'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 
'v', '2', 'B', '\017', 'H', 't', 't', 'p', 'T', 'r', 'a', 'c', 'e', 'r', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', 
'\006', '\002', '\020', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[5] = {
  &google_protobuf_any_proto_upbdefinit,
  &google_protobuf_struct_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_config_trace_v2_http_tracer_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/config/trace/v2/http_tracer.proto",
  UPB_STRVIEW_INIT(descriptor, 487)
};
