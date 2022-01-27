// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=66488e9aeed47b626c786d18e6e33a6d24cfef2c$
//

#include "include/capi/cef_app_capi.h"
#include "include/capi/cef_crash_util_capi.h"
#include "include/capi/cef_file_util_capi.h"
#include "include/capi/cef_i18n_util_capi.h"
#include "include/capi/cef_origin_whitelist_capi.h"
#include "include/capi/cef_parser_capi.h"
#include "include/capi/cef_path_util_capi.h"
#include "include/capi/cef_process_util_capi.h"
#include "include/capi/cef_scheme_capi.h"
#include "include/capi/cef_ssl_info_capi.h"
#include "include/capi/cef_task_capi.h"
#include "include/capi/cef_trace_capi.h"
#include "include/capi/cef_v8_capi.h"
#include "include/capi/cef_web_plugin_capi.h"
#include "include/capi/test/cef_test_helpers_capi.h"
#include "include/cef_app.h"
#include "include/cef_crash_util.h"
#include "include/cef_file_util.h"
#include "include/cef_i18n_util.h"
#include "include/cef_origin_whitelist.h"
#include "include/cef_parser.h"
#include "include/cef_path_util.h"
#include "include/cef_process_util.h"
#include "include/cef_scheme.h"
#include "include/cef_ssl_info.h"
#include "include/cef_task.h"
#include "include/cef_trace.h"
#include "include/cef_v8.h"
#include "include/cef_web_plugin.h"
#include "include/test/cef_test_helpers.h"
#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/command_line_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/value_cpptoc.h"
#include "libcef_dll/ctocpp/app_ctocpp.h"
#include "libcef_dll/ctocpp/completion_callback_ctocpp.h"
#include "libcef_dll/ctocpp/end_tracing_callback_ctocpp.h"
#include "libcef_dll/ctocpp/scheme_handler_factory_ctocpp.h"
#include "libcef_dll/ctocpp/task_ctocpp.h"
#include "libcef_dll/ctocpp/v8handler_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_info_visitor_ctocpp.h"
#include "libcef_dll/ctocpp/web_plugin_unstable_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/template_util.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT int cef_execute_process(const struct _cef_main_args_t* args,
                                   struct _cef_app_t* application,
                                   void* windows_sandbox_info) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: args; type: struct_byref_const
  DCHECK(args);
  if (!args)
    return 0;
  if (!template_util::has_valid_size(args)) {
    NOTREACHED() << "invalid args->[base.]size";
    return 0;
  }
  // Unverified params: application, windows_sandbox_info

  // Translate param: args; type: struct_byref_const
  CefMainArgs argsObj;
  if (args)
    argsObj.Set(*args, false);

  // Execute
  int _retval = CefExecuteProcess(argsObj, CefAppCToCpp::Wrap(application),
                                  windows_sandbox_info);

  // Return type: simple
  return _retval;
}

CEF_EXPORT int cef_initialize(const struct _cef_main_args_t* args,
                              const struct _cef_settings_t* settings,
                              struct _cef_app_t* application,
                              void* windows_sandbox_info) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: args; type: struct_byref_const
  DCHECK(args);
  if (!args)
    return 0;
  if (!template_util::has_valid_size(args)) {
    NOTREACHED() << "invalid args->[base.]size";
    return 0;
  }
  // Verify param: settings; type: struct_byref_const
  DCHECK(settings);
  if (!settings)
    return 0;
  if (!template_util::has_valid_size(settings)) {
    NOTREACHED() << "invalid settings->[base.]size";
    return 0;
  }
  // Unverified params: application, windows_sandbox_info

  // Translate param: args; type: struct_byref_const
  CefMainArgs argsObj;
  if (args)
    argsObj.Set(*args, false);
  // Translate param: settings; type: struct_byref_const
  CefSettings settingsObj;
  if (settings)
    settingsObj.Set(*settings, false);

  // Execute
  bool _retval =
      CefInitialize(argsObj, settingsObj, CefAppCToCpp::Wrap(application),
                    windows_sandbox_info);

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_shutdown() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

#if DCHECK_IS_ON()
  shutdown_checker::SetIsShutdown();
#endif

  // Execute
  CefShutdown();
}

CEF_EXPORT void cef_do_message_loop_work() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefDoMessageLoopWork();
}

CEF_EXPORT void cef_run_message_loop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRunMessageLoop();
}

CEF_EXPORT void cef_quit_message_loop() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefQuitMessageLoop();
}

CEF_EXPORT void cef_set_osmodal_loop(int osModalLoop) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefSetOSModalLoop(osModalLoop ? true : false);
}

CEF_EXPORT void cef_enable_highdpi_support() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefEnableHighDPISupport();
}

CEF_EXPORT int cef_crash_reporting_enabled() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefCrashReportingEnabled();

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_set_crash_key_value(const cef_string_t* key,
                                        const cef_string_t* value) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key)
    return;
  // Unverified params: value

  // Execute
  CefSetCrashKeyValue(CefString(key), CefString(value));
}

CEF_EXPORT int cef_create_directory(const cef_string_t* full_path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: full_path; type: string_byref_const
  DCHECK(full_path);
  if (!full_path)
    return 0;

  // Execute
  bool _retval = CefCreateDirectory(CefString(full_path));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_get_temp_directory(cef_string_t* temp_dir) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: temp_dir; type: string_byref
  DCHECK(temp_dir);
  if (!temp_dir)
    return 0;

  // Translate param: temp_dir; type: string_byref
  CefString temp_dirStr(temp_dir);

  // Execute
  bool _retval = CefGetTempDirectory(temp_dirStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_create_new_temp_directory(const cef_string_t* prefix,
                                             cef_string_t* new_temp_path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: new_temp_path; type: string_byref
  DCHECK(new_temp_path);
  if (!new_temp_path)
    return 0;
  // Unverified params: prefix

  // Translate param: new_temp_path; type: string_byref
  CefString new_temp_pathStr(new_temp_path);

  // Execute
  bool _retval = CefCreateNewTempDirectory(CefString(prefix), new_temp_pathStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_create_temp_directory_in_directory(
    const cef_string_t* base_dir,
    const cef_string_t* prefix,
    cef_string_t* new_dir) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: base_dir; type: string_byref_const
  DCHECK(base_dir);
  if (!base_dir)
    return 0;
  // Verify param: new_dir; type: string_byref
  DCHECK(new_dir);
  if (!new_dir)
    return 0;
  // Unverified params: prefix

  // Translate param: new_dir; type: string_byref
  CefString new_dirStr(new_dir);

  // Execute
  bool _retval = CefCreateTempDirectoryInDirectory(
      CefString(base_dir), CefString(prefix), new_dirStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_directory_exists(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return 0;

  // Execute
  bool _retval = CefDirectoryExists(CefString(path));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_delete_file(const cef_string_t* path, int recursive) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return 0;

  // Execute
  bool _retval = CefDeleteFile(CefString(path), recursive ? true : false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_zip_directory(const cef_string_t* src_dir,
                                 const cef_string_t* dest_file,
                                 int include_hidden_files) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: src_dir; type: string_byref_const
  DCHECK(src_dir);
  if (!src_dir)
    return 0;
  // Verify param: dest_file; type: string_byref_const
  DCHECK(dest_file);
  if (!dest_file)
    return 0;

  // Execute
  bool _retval = CefZipDirectory(CefString(src_dir), CefString(dest_file),
                                 include_hidden_files ? true : false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_load_crlsets_file(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefLoadCRLSetsFile(CefString(path));
}

CEF_EXPORT int cef_is_rtl() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefIsRTL();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_add_cross_origin_whitelist_entry(
    const cef_string_t* source_origin,
    const cef_string_t* target_protocol,
    const cef_string_t* target_domain,
    int allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(source_origin);
  if (!source_origin)
    return 0;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(target_protocol);
  if (!target_protocol)
    return 0;
  // Unverified params: target_domain

  // Execute
  bool _retval = CefAddCrossOriginWhitelistEntry(
      CefString(source_origin), CefString(target_protocol),
      CefString(target_domain), allow_target_subdomains ? true : false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_remove_cross_origin_whitelist_entry(
    const cef_string_t* source_origin,
    const cef_string_t* target_protocol,
    const cef_string_t* target_domain,
    int allow_target_subdomains) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: source_origin; type: string_byref_const
  DCHECK(source_origin);
  if (!source_origin)
    return 0;
  // Verify param: target_protocol; type: string_byref_const
  DCHECK(target_protocol);
  if (!target_protocol)
    return 0;
  // Unverified params: target_domain

  // Execute
  bool _retval = CefRemoveCrossOriginWhitelistEntry(
      CefString(source_origin), CefString(target_protocol),
      CefString(target_domain), allow_target_subdomains ? true : false);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_clear_cross_origin_whitelist() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefClearCrossOriginWhitelist();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_parse_url(const cef_string_t* url,
                             struct _cef_urlparts_t* parts) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: url; type: string_byref_const
  DCHECK(url);
  if (!url)
    return 0;
  // Verify param: parts; type: struct_byref
  DCHECK(parts);
  if (!parts)
    return 0;
  if (!template_util::has_valid_size(parts)) {
    NOTREACHED() << "invalid parts->[base.]size";
    return 0;
  }

  // Translate param: parts; type: struct_byref
  CefURLParts partsObj;
  if (parts)
    partsObj.AttachTo(*parts);

  // Execute
  bool _retval = CefParseURL(CefString(url), partsObj);

  // Restore param: parts; type: struct_byref
  if (parts)
    partsObj.DetachTo(*parts);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_create_url(const struct _cef_urlparts_t* parts,
                              cef_string_t* url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: parts; type: struct_byref_const
  DCHECK(parts);
  if (!parts)
    return 0;
  if (!template_util::has_valid_size(parts)) {
    NOTREACHED() << "invalid parts->[base.]size";
    return 0;
  }
  // Verify param: url; type: string_byref
  DCHECK(url);
  if (!url)
    return 0;

  // Translate param: parts; type: struct_byref_const
  CefURLParts partsObj;
  if (parts)
    partsObj.Set(*parts, false);
  // Translate param: url; type: string_byref
  CefString urlStr(url);

  // Execute
  bool _retval = CefCreateURL(partsObj, urlStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT cef_string_userfree_t
cef_format_url_for_security_display(const cef_string_t* origin_url) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: origin_url; type: string_byref_const
  DCHECK(origin_url);
  if (!origin_url)
    return NULL;

  // Execute
  CefString _retval = CefFormatUrlForSecurityDisplay(CefString(origin_url));

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT cef_string_userfree_t
cef_get_mime_type(const cef_string_t* extension) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension; type: string_byref_const
  DCHECK(extension);
  if (!extension)
    return NULL;

  // Execute
  CefString _retval = CefGetMimeType(CefString(extension));

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT void cef_get_extensions_for_mime_type(const cef_string_t* mime_type,
                                                 cef_string_list_t extensions) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: mime_type; type: string_byref_const
  DCHECK(mime_type);
  if (!mime_type)
    return;
  // Verify param: extensions; type: string_vec_byref
  DCHECK(extensions);
  if (!extensions)
    return;

  // Translate param: extensions; type: string_vec_byref
  std::vector<CefString> extensionsList;
  transfer_string_list_contents(extensions, extensionsList);

  // Execute
  CefGetExtensionsForMimeType(CefString(mime_type), extensionsList);

  // Restore param: extensions; type: string_vec_byref
  cef_string_list_clear(extensions);
  transfer_string_list_contents(extensionsList, extensions);
}

CEF_EXPORT cef_string_userfree_t cef_base64encode(const void* data,
                                                  size_t data_size) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: simple_byaddr
  DCHECK(data);
  if (!data)
    return NULL;

  // Execute
  CefString _retval = CefBase64Encode(data, data_size);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT struct _cef_binary_value_t* cef_base64decode(
    const cef_string_t* data) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data; type: string_byref_const
  DCHECK(data);
  if (!data)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefBase64Decode(CefString(data));

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

CEF_EXPORT cef_string_userfree_t cef_uriencode(const cef_string_t* text,
                                               int use_plus) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(text);
  if (!text)
    return NULL;

  // Execute
  CefString _retval = CefURIEncode(CefString(text), use_plus ? true : false);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT cef_string_userfree_t
cef_uridecode(const cef_string_t* text,
              int convert_to_utf8,
              cef_uri_unescape_rule_t unescape_rule) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(text);
  if (!text)
    return NULL;

  // Execute
  CefString _retval = CefURIDecode(
      CefString(text), convert_to_utf8 ? true : false, unescape_rule);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT struct _cef_value_t* cef_parse_json(
    const cef_string_t* json_string,
    cef_json_parser_options_t options) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: json_string; type: string_byref_const
  DCHECK(json_string);
  if (!json_string)
    return NULL;

  // Execute
  CefRefPtr<CefValue> _retval = CefParseJSON(CefString(json_string), options);

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

CEF_EXPORT struct _cef_value_t* cef_parse_json_buffer(
    const void* json,
    size_t json_size,
    cef_json_parser_options_t options) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: json; type: simple_byaddr
  DCHECK(json);
  if (!json)
    return NULL;

  // Execute
  CefRefPtr<CefValue> _retval = CefParseJSON(json, json_size, options);

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

CEF_EXPORT struct _cef_value_t* cef_parse_jsonand_return_error(
    const cef_string_t* json_string,
    cef_json_parser_options_t options,
    cef_string_t* error_msg_out) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: json_string; type: string_byref_const
  DCHECK(json_string);
  if (!json_string)
    return NULL;
  // Verify param: error_msg_out; type: string_byref
  DCHECK(error_msg_out);
  if (!error_msg_out)
    return NULL;

  // Translate param: error_msg_out; type: string_byref
  CefString error_msg_outStr(error_msg_out);

  // Execute
  CefRefPtr<CefValue> _retval = CefParseJSONAndReturnError(
      CefString(json_string), options, error_msg_outStr);

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

CEF_EXPORT cef_string_userfree_t
cef_write_json(struct _cef_value_t* node, cef_json_writer_options_t options) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: node; type: refptr_same
  DCHECK(node);
  if (!node)
    return NULL;

  // Execute
  CefString _retval = CefWriteJSON(CefValueCppToC::Unwrap(node), options);

  // Return type: string
  return _retval.DetachToUserFree();
}

CEF_EXPORT int cef_get_path(cef_path_key_t key, cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref
  DCHECK(path);
  if (!path)
    return 0;

  // Translate param: path; type: string_byref
  CefString pathStr(path);

  // Execute
  bool _retval = CefGetPath(key, pathStr);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_launch_process(struct _cef_command_line_t* command_line) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: command_line; type: refptr_same
  DCHECK(command_line);
  if (!command_line)
    return 0;

  // Execute
  bool _retval = CefLaunchProcess(CefCommandLineCppToC::Unwrap(command_line));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_register_scheme_handler_factory(
    const cef_string_t* scheme_name,
    const cef_string_t* domain_name,
    struct _cef_scheme_handler_factory_t* factory) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(scheme_name);
  if (!scheme_name)
    return 0;
  // Unverified params: domain_name, factory

  // Execute
  bool _retval = CefRegisterSchemeHandlerFactory(
      CefString(scheme_name), CefString(domain_name),
      CefSchemeHandlerFactoryCToCpp::Wrap(factory));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_clear_scheme_handler_factories() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefClearSchemeHandlerFactories();

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_is_cert_status_error(cef_cert_status_t status) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefIsCertStatusError(status);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_currently_on(cef_thread_id_t threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  bool _retval = CefCurrentlyOn(threadId);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_post_task(cef_thread_id_t threadId,
                             struct _cef_task_t* task) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefPostTask(threadId, CefTaskCToCpp::Wrap(task));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_post_delayed_task(cef_thread_id_t threadId,
                                     struct _cef_task_t* task,
                                     int64 delay_ms) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval =
      CefPostDelayedTask(threadId, CefTaskCToCpp::Wrap(task), delay_ms);

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_begin_tracing(const cef_string_t* categories,
                                 struct _cef_completion_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: categories, callback

  // Execute
  bool _retval = CefBeginTracing(CefString(categories),
                                 CefCompletionCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int cef_end_tracing(const cef_string_t* tracing_file,
                               struct _cef_end_tracing_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: tracing_file, callback

  // Execute
  bool _retval = CefEndTracing(CefString(tracing_file),
                               CefEndTracingCallbackCToCpp::Wrap(callback));

  // Return type: bool
  return _retval;
}

CEF_EXPORT int64 cef_now_from_system_trace_time() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int64 _retval = CefNowFromSystemTraceTime();

  // Return type: simple
  return _retval;
}

CEF_EXPORT int cef_register_extension(const cef_string_t* extension_name,
                                      const cef_string_t* javascript_code,
                                      struct _cef_v8handler_t* handler) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: extension_name; type: string_byref_const
  DCHECK(extension_name);
  if (!extension_name)
    return 0;
  // Verify param: javascript_code; type: string_byref_const
  DCHECK(javascript_code);
  if (!javascript_code)
    return 0;
  // Unverified params: handler

  // Execute
  bool _retval = CefRegisterExtension(CefString(extension_name),
                                      CefString(javascript_code),
                                      CefV8HandlerCToCpp::Wrap(handler));

  // Return type: bool
  return _retval;
}

CEF_EXPORT void cef_visit_web_plugin_info(
    struct _cef_web_plugin_info_visitor_t* visitor) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: visitor; type: refptr_diff
  DCHECK(visitor);
  if (!visitor)
    return;

  // Execute
  CefVisitWebPluginInfo(CefWebPluginInfoVisitorCToCpp::Wrap(visitor));
}

CEF_EXPORT void cef_refresh_web_plugins() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefreshWebPlugins();
}

CEF_EXPORT void cef_unregister_internal_web_plugin(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefUnregisterInternalWebPlugin(CefString(path));
}

CEF_EXPORT void cef_register_web_plugin_crash(const cef_string_t* path) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;

  // Execute
  CefRegisterWebPluginCrash(CefString(path));
}

CEF_EXPORT void cef_is_web_plugin_unstable(
    const cef_string_t* path,
    struct _cef_web_plugin_unstable_callback_t* callback) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path)
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback);
  if (!callback)
    return;

  // Execute
  CefIsWebPluginUnstable(CefString(path),
                         CefWebPluginUnstableCallbackCToCpp::Wrap(callback));
}

CEF_EXPORT void cef_execute_java_script_with_user_gesture_for_tests(
    struct _cef_frame_t* frame,
    const cef_string_t* javascript) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: frame; type: refptr_same
  DCHECK(frame);
  if (!frame)
    return;
  // Unverified params: javascript

  // Execute
  CefExecuteJavaScriptWithUserGestureForTests(CefFrameCppToC::Unwrap(frame),
                                              CefString(javascript));
}
