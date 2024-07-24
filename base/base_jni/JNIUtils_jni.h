// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     third_party/jni_zero/jni_generator.py
// For
//     android/net/connectivity/org/chromium/base/JNIUtils

#ifndef android_net_connectivity_org_chromium_base_JNIUtils_JNI
#define android_net_connectivity_org_chromium_base_JNIUtils_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "third_party/jni_zero/jni_zero_helper.h"


// Step 1: Forward declarations.

JNI_ZERO_COMPONENT_BUILD_EXPORT extern const char
    kClassPath_android_net_connectivity_org_chromium_base_JNIUtils[];
const char kClassPath_android_net_connectivity_org_chromium_base_JNIUtils[] =
    "android/net/connectivity/org/chromium/base/JNIUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_ZERO_COMPONENT_BUILD_EXPORT std::atomic<jclass>
    g_android_net_connectivity_org_chromium_base_JNIUtils_clazz(nullptr);
#ifndef android_net_connectivity_org_chromium_base_JNIUtils_clazz_defined
#define android_net_connectivity_org_chromium_base_JNIUtils_clazz_defined
inline jclass android_net_connectivity_org_chromium_base_JNIUtils_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_android_net_connectivity_org_chromium_base_JNIUtils,
      &g_android_net_connectivity_org_chromium_base_JNIUtils_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_base_JNIUtils_getSplitClassLoader1(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_JNIUtils_getSplitClassLoader(JNIEnv* env,
    const base::android::JavaRef<jstring>& splitName) {
  jclass clazz = android_net_connectivity_org_chromium_base_JNIUtils_clazz(env);
  CHECK_CLAZZ(env, clazz,
      android_net_connectivity_org_chromium_base_JNIUtils_clazz(env), nullptr);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getSplitClassLoader",
          "(Ljava/lang/String;)Ljava/lang/ClassLoader;",
          &g_android_net_connectivity_org_chromium_base_JNIUtils_getSplitClassLoader1);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, splitName.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

#endif  // android_net_connectivity_org_chromium_base_JNIUtils_JNI
