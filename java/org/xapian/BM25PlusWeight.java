/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class BM25PlusWeight extends Weight {
  private transient long swigCPtr;

  protected BM25PlusWeight(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.BM25PlusWeight_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BM25PlusWeight obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(BM25PlusWeight obj) {
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
        XapianJNI.delete_BM25PlusWeight(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public BM25PlusWeight(double k1, double k2, double k3, double b, double min_normlen, double delta) {
    this(XapianJNI.new_BM25PlusWeight__SWIG_0(k1, k2, k3, b, min_normlen, delta), true);
  }

  public BM25PlusWeight() {
    this(XapianJNI.new_BM25PlusWeight__SWIG_1(), true);
  }

  public String name() {
    return XapianJNI.BM25PlusWeight_name(swigCPtr, this);
  }

  public double getSumPart(long wdf, long doclen, long uniqterm) {
    return XapianJNI.BM25PlusWeight_getSumPart(swigCPtr, this, wdf, doclen, uniqterm);
  }

  public double getMaxPart() {
    return XapianJNI.BM25PlusWeight_getMaxPart(swigCPtr, this);
  }

  public double getSumExtra(long doclen, long uniqterms) {
    return XapianJNI.BM25PlusWeight_getSumExtra(swigCPtr, this, doclen, uniqterms);
  }

  public double getMaxExtra() {
    return XapianJNI.BM25PlusWeight_getMaxExtra(swigCPtr, this);
  }

}
