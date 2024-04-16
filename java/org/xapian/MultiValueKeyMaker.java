/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class MultiValueKeyMaker extends KeyMaker {
  private transient long swigCPtr;

  protected MultiValueKeyMaker(long cPtr, boolean cMemoryOwn) {
    super(XapianJNI.MultiValueKeyMaker_SWIGUpcast(cPtr), cMemoryOwn);
    swigCPtr = cPtr;
  }

  protected static long getCPtr(MultiValueKeyMaker obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected static long swigRelease(MultiValueKeyMaker obj) {
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
        XapianJNI.delete_MultiValueKeyMaker(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  public MultiValueKeyMaker() {
    this(XapianJNI.new_MultiValueKeyMaker(), true);
  }

  public String apply(Document doc) {
    return XapianJNI.MultiValueKeyMaker_apply(swigCPtr, this, Document.getCPtr(doc), doc);
  }

  public void addValue(int slot, boolean reverse, String defvalue) {
    XapianJNI.MultiValueKeyMaker_addValue__SWIG_0(swigCPtr, this, slot, reverse, defvalue);
  }

  public void addValue(int slot, boolean reverse) {
    XapianJNI.MultiValueKeyMaker_addValue__SWIG_1(swigCPtr, this, slot, reverse);
  }

  public void addValue(int slot) {
    XapianJNI.MultiValueKeyMaker_addValue__SWIG_2(swigCPtr, this, slot);
  }

}
