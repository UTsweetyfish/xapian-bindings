/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class IneB2Weight extends Weight {
  private transient long swigCPtr;

  protected IneB2Weight(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.IneB2Weight_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(IneB2Weight obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(IneB2Weight obj) {
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
        XapianJNI.delete_IneB2Weight(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public IneB2Weight(double c) {
    this(XapianJNI.new_IneB2Weight__SWIG_0(c), true);
  }

  public IneB2Weight() {
    this(XapianJNI.new_IneB2Weight__SWIG_1(), true);
  }

  public String name() {
    return XapianJNI.IneB2Weight_name(swigCPtr, this);
  }

  public double getSumPart(long wdf, long doclen, long uniqterms) {
    return XapianJNI.IneB2Weight_getSumPart(swigCPtr, this, wdf, doclen, uniqterms);
  }

  public double getMaxPart() {
    return XapianJNI.IneB2Weight_getMaxPart(swigCPtr, this);
  }

  public double getSumExtra(long doclen, long uniqterms) {
    return XapianJNI.IneB2Weight_getSumExtra(swigCPtr, this, doclen, uniqterms);
  }

  public double getMaxExtra() {
    return XapianJNI.IneB2Weight_getMaxExtra(swigCPtr, this);
  }

}
