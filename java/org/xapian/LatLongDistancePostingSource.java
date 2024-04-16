/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class LatLongDistancePostingSource extends ValuePostingSource {
  private transient long swigCPtr;

  protected LatLongDistancePostingSource(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.LatLongDistancePostingSource_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(LatLongDistancePostingSource obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(LatLongDistancePostingSource obj) {
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
        XapianJNI.delete_LatLongDistancePostingSource(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, LatLongMetric metric_, double max_range_, double k1_, double k2_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_0(slot_, LatLongCoords.getCPtr(centre_), centre_, LatLongMetric.getCPtr(metric_), metric_, max_range_, k1_, k2_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, LatLongMetric metric_, double max_range_, double k1_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_1(slot_, LatLongCoords.getCPtr(centre_), centre_, LatLongMetric.getCPtr(metric_), metric_, max_range_, k1_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, LatLongMetric metric_, double max_range_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_2(slot_, LatLongCoords.getCPtr(centre_), centre_, LatLongMetric.getCPtr(metric_), metric_, max_range_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, LatLongMetric metric_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_3(slot_, LatLongCoords.getCPtr(centre_), centre_, LatLongMetric.getCPtr(metric_), metric_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, double max_range_, double k1_, double k2_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_4(slot_, LatLongCoords.getCPtr(centre_), centre_, max_range_, k1_, k2_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, double max_range_, double k1_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_5(slot_, LatLongCoords.getCPtr(centre_), centre_, max_range_, k1_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_, double max_range_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_6(slot_, LatLongCoords.getCPtr(centre_), centre_, max_range_), true);
  }

  public LatLongDistancePostingSource(int slot_, LatLongCoords centre_) {
    this(XapianJNI.new_LatLongDistancePostingSource__SWIG_7(slot_, LatLongCoords.getCPtr(centre_), centre_), true);
  }

  public void next(double min_wt) {
    XapianJNI.LatLongDistancePostingSource_next(swigCPtr, this, min_wt);
  }

  public void skipTo(long min_docid, double min_wt) {
    XapianJNI.LatLongDistancePostingSource_skipTo(swigCPtr, this, min_docid, min_wt);
  }

  public boolean check(long min_docid, double min_wt) {
    return XapianJNI.LatLongDistancePostingSource_check(swigCPtr, this, min_docid, min_wt);
  }

  public double getWeight() {
    return XapianJNI.LatLongDistancePostingSource_getWeight(swigCPtr, this);
  }

  public String name() {
    return XapianJNI.LatLongDistancePostingSource_name(swigCPtr, this);
  }

  public void init(Database db_) {
    XapianJNI.LatLongDistancePostingSource_init(swigCPtr, this, Database.getCPtr(db_), db_);
  }

  public String toString() {
    return XapianJNI.LatLongDistancePostingSource_toString(swigCPtr, this);
  }

}
