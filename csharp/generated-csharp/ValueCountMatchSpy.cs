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

public class ValueCountMatchSpy : MatchSpy {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;

  internal ValueCountMatchSpy(global::System.IntPtr cPtr, bool cMemoryOwn) : base(XapianPINVOKE.ValueCountMatchSpy_SWIGUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(ValueCountMatchSpy obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(ValueCountMatchSpy obj) {
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
          XapianPINVOKE.delete_ValueCountMatchSpy(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
      base.Dispose(disposing);
    }
  }

  public ValueCountMatchSpy() : this(XapianPINVOKE.new_ValueCountMatchSpy__SWIG_0(), true) {
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public ValueCountMatchSpy(uint slot_) : this(XapianPINVOKE.new_ValueCountMatchSpy__SWIG_1(slot_), true) {
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public uint GetTotal() {
    uint ret = XapianPINVOKE.ValueCountMatchSpy_GetTotal(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator ValuesBegin() {
    TermIterator ret = new TermIterator(XapianPINVOKE.ValueCountMatchSpy_ValuesBegin(swigCPtr), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator ValuesEnd() {
    TermIterator ret = new TermIterator(XapianPINVOKE.ValueCountMatchSpy_ValuesEnd(swigCPtr), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator TopValuesBegin(uint maxvalues) {
    TermIterator ret = new TermIterator(XapianPINVOKE.ValueCountMatchSpy_TopValuesBegin(swigCPtr, maxvalues), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator TopValuesEnd(uint arg0) {
    TermIterator ret = new TermIterator(XapianPINVOKE.ValueCountMatchSpy_TopValuesEnd(swigCPtr, arg0), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override void Apply(Document doc, double wt) {
    XapianPINVOKE.ValueCountMatchSpy_Apply(swigCPtr, Document.getCPtr(doc), wt);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override string Name() {
    string ret = XapianPINVOKE.ValueCountMatchSpy_Name(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override void MergeResults(string serialised) {
    XapianPINVOKE.ValueCountMatchSpy_MergeResults(swigCPtr, serialised);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override string GetDescription() {
    string ret = XapianPINVOKE.ValueCountMatchSpy_GetDescription(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

}

}
