# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: validate_session.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x16validate_session.proto\x12\x05login\"\'\n\x0fValidateRequest\x12\t\n\x01\x61\x18\x01 \x01(\x03\x12\t\n\x01\x62\x18\x02 \x01(\x03\"\"\n\x10ValidateResponse\x12\x0e\n\x06result\x18\x01 \x01(\x08\x32M\n\x0cLoginService\x12=\n\x08Validate\x12\x16.login.ValidateRequest\x1a\x17.login.ValidateResponse\"\x00\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'validate_session_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _VALIDATEREQUEST._serialized_start=33
  _VALIDATEREQUEST._serialized_end=72
  _VALIDATERESPONSE._serialized_start=74
  _VALIDATERESPONSE._serialized_end=108
  _LOGINSERVICE._serialized_start=110
  _LOGINSERVICE._serialized_end=187
# @@protoc_insertion_point(module_scope)
