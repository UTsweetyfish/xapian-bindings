/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class GreatCircleMetric extends LatLongMetric {
  private transient long swigCPtr;

  protected GreatCircleMetric(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.GreatCircleMetric_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(GreatCircleMetric obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(GreatCircleMetric obj) {
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
        XapianJNI.delete_GreatCircleMetric(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public GreatCircleMetric() {
    this(XapianJNI.new_GreatCircleMetric__SWIG_0(), true);
  }

  public GreatCircleMetric(double radius_) {
    this(XapianJNI.new_GreatCircleMetric__SWIG_1(radius_), true);
  }

  public double pointwiseDistance(LatLongCoord a, LatLongCoord b) {
    return XapianJNI.GreatCircleMetric_pointwiseDistance(swigCPtr, this, LatLongCoord.getCPtr(a), a, LatLongCoord.getCPtr(b), b);
  }

  public String name() {
    return XapianJNI.GreatCircleMetric_name(swigCPtr, this);
  }

}
