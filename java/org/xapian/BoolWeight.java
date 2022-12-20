/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.13
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class BoolWeight extends Weight {
  private transient long swigCPtr;

  protected BoolWeight(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.BoolWeight_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BoolWeight obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        XapianJNI.delete_BoolWeight(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public BoolWeight() {
    this(XapianJNI.new_BoolWeight(), true);
  }

  public String name() {
    return XapianJNI.BoolWeight_name(swigCPtr, this);
  }

  public double getSumPart(long wdf, long doclen, long uniqterms) {
    return XapianJNI.BoolWeight_getSumPart(swigCPtr, this, wdf, doclen, uniqterms);
  }

  public double getMaxPart() {
    return XapianJNI.BoolWeight_getMaxPart(swigCPtr, this);
  }

  public double getSumExtra(long doclen, long uniqterms) {
    return XapianJNI.BoolWeight_getSumExtra(swigCPtr, this, doclen, uniqterms);
  }

  public double getMaxExtra() {
    return XapianJNI.BoolWeight_getMaxExtra(swigCPtr, this);
  }

}
