// Copyright (c) 2020 The Chromium Embedded Framework Authors. All rights
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
// $hash=0710e94a6132f440de0c46ce73ca1d4a36af2857$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_POST_DATA_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_POST_DATA_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_request_capi.h"
#include "include/cef_request.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefPostDataCToCpp : public CefCToCppRefCounted<CefPostDataCToCpp,
                                                     CefPostData,
                                                     cef_post_data_t> {
 public:
  CefPostDataCToCpp();
  virtual ~CefPostDataCToCpp();

  // CefPostData methods.
  bool IsReadOnly() OVERRIDE;
  bool HasExcludedElements() OVERRIDE;
  size_t GetElementCount() OVERRIDE;
  void GetElements(ElementVector& elements) OVERRIDE;
  bool RemoveElement(CefRefPtr<CefPostDataElement> element) OVERRIDE;
  bool AddElement(CefRefPtr<CefPostDataElement> element) OVERRIDE;
  void RemoveElements() OVERRIDE;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_POST_DATA_CTOCPP_H_
