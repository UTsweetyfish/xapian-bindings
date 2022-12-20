/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.13
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class CoordWeight extends Weight {
  private transient long swigCPtr;

  protected CoordWeight(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.CoordWeight_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(CoordWeight obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        XapianJNI.delete_CoordWeight(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public void init(double factor_) {
    XapianJNI.CoordWeight_init(swigCPtr, this, factor_);
  }

  public CoordWeight() {
    this(XapianJNI.new_CoordWeight(), true);
  }

  public String name() {
    return XapianJNI.CoordWeight_name(swigCPtr, this);
  }

  public double getSumPart(long wdf, long doclen, long uniqterm) {
    return XapianJNI.CoordWeight_getSumPart(swigCPtr, this, wdf, doclen, uniqterm);
  }

  public double getMaxPart() {
    return XapianJNI.CoordWeight_getMaxPart(swigCPtr, this);
  }

  public double getSumExtra(long arg0, long arg1) {
    return XapianJNI.CoordWeight_getSumExtra(swigCPtr, this, arg0, arg1);
  }

  public double getMaxExtra() {
    return XapianJNI.CoordWeight_getMaxExtra(swigCPtr, this);
  }

}
