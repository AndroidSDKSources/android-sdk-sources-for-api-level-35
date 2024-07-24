// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     third_party/jni_zero/jni_generator.py
// For
//     android/net/connectivity/org/chromium/net/impl/CronetUploadDataStream

#ifndef android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_JNI
#define android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "third_party/jni_zero/jni_zero_helper.h"


// Step 1: Forward declarations.

JNI_ZERO_COMPONENT_BUILD_EXPORT extern const char
    kClassPath_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream[];
const char kClassPath_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream[] =
    "android/net/connectivity/org/chromium/net/impl/CronetUploadDataStream";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_ZERO_COMPONENT_BUILD_EXPORT std::atomic<jclass>
    g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(nullptr);
#ifndef android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz_defined
#define android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz_defined
inline jclass android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(JNIEnv*
    env) {
  return base::android::LazyGetClass(env,
      kClassPath_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream,
      &g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace cronet {

static jlong JNI_CronetUploadDataStream_AttachUploadDataToRequest(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller,
    jlong urlRequestAdapter,
    jlong length);

JNI_BOUNDARY_EXPORT jlong Java_android_net_connectivity_J_N_MWTaR_00024k2(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jlong urlRequestAdapter,
    jlong length) {
  return JNI_CronetUploadDataStream_AttachUploadDataToRequest(env,
      base::android::JavaParamRef<jobject>(env, caller), urlRequestAdapter, length);
}

static jlong JNI_CronetUploadDataStream_CreateAdapterForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller);

JNI_BOUNDARY_EXPORT jlong Java_android_net_connectivity_J_N_Mp2IXjpG_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jobject caller) {
  return JNI_CronetUploadDataStream_CreateAdapterForTesting(env,
      base::android::JavaParamRef<jobject>(env, caller));
}

static jlong JNI_CronetUploadDataStream_CreateUploadDataStreamForTesting(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& caller,
    jlong length,
    jlong adapter);

JNI_BOUNDARY_EXPORT jlong Java_android_net_connectivity_J_N_Mg_1bd8Ro_1ForTesting(
    JNIEnv* env,
    jclass jcaller,
    jobject caller,
    jlong length,
    jlong adapter) {
  return JNI_CronetUploadDataStream_CreateUploadDataStreamForTesting(env,
      base::android::JavaParamRef<jobject>(env, caller), length, adapter);
}

JNI_BOUNDARY_EXPORT void Java_android_net_connectivity_J_N_MYiWO19g(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePtr) {
  CronetUploadDataStreamAdapter* native =
      reinterpret_cast<CronetUploadDataStreamAdapter*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env);
}

JNI_BOUNDARY_EXPORT void Java_android_net_connectivity_J_N_MbUU7LW2(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePtr,
    jobject caller,
    jint bytesRead,
    jboolean finalChunk) {
  CronetUploadDataStreamAdapter* native =
      reinterpret_cast<CronetUploadDataStreamAdapter*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnReadSucceeded");
  return native->OnReadSucceeded(env, base::android::JavaParamRef<jobject>(env, caller), bytesRead,
      finalChunk);
}

JNI_BOUNDARY_EXPORT void Java_android_net_connectivity_J_N_MzjkTAnn(
    JNIEnv* env,
    jclass jcaller,
    jlong nativePtr,
    jobject caller) {
  CronetUploadDataStreamAdapter* native =
      reinterpret_cast<CronetUploadDataStreamAdapter*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "OnRewindSucceeded");
  return native->OnRewindSucceeded(env, base::android::JavaParamRef<jobject>(env, caller));
}


static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_onUploadDataStreamDestroyed0(nullptr);
static void Java_CronetUploadDataStream_onUploadDataStreamDestroyed(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "onUploadDataStreamDestroyed",
          "()V",
&g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_onUploadDataStreamDestroyed0);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_readData1(nullptr);
static void Java_CronetUploadDataStream_readData(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, const base::android::JavaRef<jobject>& byteBuffer) {
  jclass clazz = android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "readData",
          "(Ljava/nio/ByteBuffer;)V",
          &g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_readData1);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, byteBuffer.obj());
}

static std::atomic<jmethodID>
    g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_rewind0(nullptr);
static void Java_CronetUploadDataStream_rewind(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj) {
  jclass clazz = android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "rewind",
          "()V",
          &g_android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_rewind0);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace cronet

#endif  // android_net_connectivity_org_chromium_net_impl_CronetUploadDataStream_JNI
