/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class Stopper {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected Stopper(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Stopper obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(Stopper obj) {
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
        XapianJNI.delete_Stopper(swigCPtr);
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
    XapianJNI.Stopper_change_ownership(this, swigCPtr, false);
  }

  public void swigTakeOwnership() {
    swigCMemOwn = true;
    XapianJNI.Stopper_change_ownership(this, swigCPtr, true);
  }

  public Stopper() {
    this(XapianJNI.new_Stopper(), true);
    XapianJNI.Stopper_director_connect(this, swigCPtr, true, true);
  }

  public boolean apply(String term) {
    return XapianJNI.Stopper_apply(swigCPtr, this, term);
  }

  public String toString() {
    return (getClass() == Stopper.class) ? XapianJNI.Stopper_toString(swigCPtr, this) : XapianJNI.Stopper_toStringSwigExplicitStopper(swigCPtr, this);
  }

  public Stopper release() {
    long cPtr = XapianJNI.Stopper_release(swigCPtr, this);
    return (cPtr == 0) ? null : new Stopper(cPtr, false);
  }

}
