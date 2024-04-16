/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class ValueRangeProcessor {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected ValueRangeProcessor(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(ValueRangeProcessor obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(ValueRangeProcessor obj) {
    long ptr = 0;
    if (obj != null) {
      if (!obj.swigCMemOwn)
        throw new RuntimeException("Cannot release ownership as memory is not owned");
      ptr = obj.swigCPtr;
      obj.swigCMemOwn = false;
      obj.delete();
    }
    return ptr;
  }

  @SuppressWarnings({"deprecation", "removal"})
  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        XapianJNI.delete_ValueRangeProcessor(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  protected void swigDirectorDisconnect() {
    swigCMemOwn = false;
    delete();
  }

  public void swigReleaseOwnership() {
    swigCMemOwn = false;
    XapianJNI.ValueRangeProcessor_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    XapianJNI.ValueRangeProcessor_change_ownership(this, swigCPtr, true);
  }

  public ValueRangeProcessor() {
    this(XapianJNI.new_ValueRangeProcessor(), true);
    XapianJNI.ValueRangeProcessor_director_connect(this, swigCPtr, true, true);
  }

  public int apply(SWIGTYPE_p_std__string begin, SWIGTYPE_p_std__string end) {
    return XapianJNI.ValueRangeProcessor_apply(swigCPtr, this, SWIGTYPE_p_std__string.getCPtr(begin), SWIGTYPE_p_std__string.getCPtr(end));
  }

  public ValueRangeProcessor release() {
    long cPtr = XapianJNI.ValueRangeProcessor_release(swigCPtr, this);
    return (cPtr == 0) ? null : new ValueRangeProcessor(cPtr, false);
  }

}
