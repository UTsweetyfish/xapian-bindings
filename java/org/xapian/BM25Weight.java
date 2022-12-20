/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.13
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class BM25Weight extends Weight {
  private transient long swigCPtr;

  protected BM25Weight(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.BM25Weight_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(BM25Weight obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        XapianJNI.delete_BM25Weight(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public BM25Weight(double k1, double k2, double k3, double b, double min_normlen) {
    this(XapianJNI.new_BM25Weight__SWIG_0(k1, k2, k3, b, min_normlen), true);
  }

  public BM25Weight() {
    this(XapianJNI.new_BM25Weight__SWIG_1(), true);
  }

  public String name() {
    return XapianJNI.BM25Weight_name(swigCPtr, this);
  }

  public double getSumPart(long wdf, long doclen, long uniqterm) {
    return XapianJNI.BM25Weight_getSumPart(swigCPtr, this, wdf, doclen, uniqterm);
  }

  public double getMaxPart() {
    return XapianJNI.BM25Weight_getMaxPart(swigCPtr, this);
  }

  public double getSumExtra(long doclen, long uniqterms) {
    return XapianJNI.BM25Weight_getSumExtra(swigCPtr, this, doclen, uniqterms);
  }

  public double getMaxExtra() {
    return XapianJNI.BM25Weight_getMaxExtra(swigCPtr, this);
  }

}
