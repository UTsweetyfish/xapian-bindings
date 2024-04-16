//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (https://www.swig.org).
// Version 4.2.0
//
// Do not make changes to this file unless you know what you are doing - modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace Xapian {

public class FixedWeightPostingSource : PostingSource {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;

  internal FixedWeightPostingSource(global::System.IntPtr cPtr, bool cMemoryOwn) : base(XapianPINVOKE.FixedWeightPostingSource_SWIGUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(FixedWeightPostingSource obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(FixedWeightPostingSource obj) {
    if (obj != null) {
      if (!obj.swigCMemOwn)
        throw new global::System.ApplicationException("Cannot release ownership as memory is not owned");
      global::System.Runtime.InteropServices.HandleRef ptr = obj.swigCPtr;
      obj.swigCMemOwn = false;
      obj.Dispose();
      return ptr;
    } else {
      return new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
    }
  }

  protected override void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          XapianPINVOKE.delete_FixedWeightPostingSource(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
      base.Dispose(disposing);
    }
  }

  public FixedWeightPostingSource(double wt) : this(XapianPINVOKE.new_FixedWeightPostingSource(wt), true) {
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override uint GetTermfreqMin() {
    uint ret = XapianPINVOKE.FixedWeightPostingSource_GetTermfreqMin(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override uint GetTermfreqEst() {
    uint ret = XapianPINVOKE.FixedWeightPostingSource_GetTermfreqEst(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override uint GetTermfreqMax() {
    uint ret = XapianPINVOKE.FixedWeightPostingSource_GetTermfreqMax(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override double GetWeight() {
    double ret = XapianPINVOKE.FixedWeightPostingSource_GetWeight(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override void Next(double min_wt) {
    XapianPINVOKE.FixedWeightPostingSource_Next(swigCPtr, min_wt);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override void SkipTo(uint min_docid, double min_wt) {
    XapianPINVOKE.FixedWeightPostingSource_SkipTo(swigCPtr, min_docid, min_wt);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override bool Check(uint min_docid, double min_wt) {
    bool ret = XapianPINVOKE.FixedWeightPostingSource_Check(swigCPtr, min_docid, min_wt);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override bool AtEnd() {
    bool ret = XapianPINVOKE.FixedWeightPostingSource_AtEnd(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override uint GetDocId() {
    uint ret = XapianPINVOKE.FixedWeightPostingSource_GetDocId(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override string Name() {
    string ret = XapianPINVOKE.FixedWeightPostingSource_Name(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override void Init(Database db_) {
    XapianPINVOKE.FixedWeightPostingSource_Init(swigCPtr, Database.getCPtr(db_));
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override string GetDescription() {
    string ret = XapianPINVOKE.FixedWeightPostingSource_GetDescription(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

}

}
