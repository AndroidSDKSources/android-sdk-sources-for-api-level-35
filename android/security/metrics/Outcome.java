/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=java -Weverything -Wno-missing-permission-annotation -t --min_sdk_version platform_apis -pout/soong/.intermediates/system/hardware/interfaces/keystore2/aidl/android.system.keystore2_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/system/security/keystore2/aidl/android.security.metrics-java-source/gen/android/security/metrics/Outcome.java.d -o out/soong/.intermediates/system/security/keystore2/aidl/android.security.metrics-java-source/gen -Nsystem/security/keystore2/aidl system/security/keystore2/aidl/android/security/metrics/Outcome.aidl
 */
package android.security.metrics;
/**
 * Outcome enum as defined in Keystore2KeyOperationWithGeneralInfo of
 * frameworks/proto_logging/stats/atoms.proto.
 * @hide
 */
public @interface Outcome {
  public static final int OUTCOME_UNSPECIFIED = 0;
  public static final int DROPPED = 1;
  public static final int SUCCESS = 2;
  public static final int ABORT = 3;
  public static final int PRUNED = 4;
  public static final int ERROR = 5;
}
