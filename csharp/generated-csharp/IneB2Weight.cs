//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 3.0.13
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace Xapian {

public class IneB2Weight : Weight {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;

  internal IneB2Weight(global::System.IntPtr cPtr, bool cMemoryOwn) : base(XapianPINVOKE.IneB2Weight_SWIGUpcast(cPtr), cMemoryOwn) {
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(IneB2Weight obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~IneB2Weight() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          XapianPINVOKE.delete_IneB2Weight(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
      global::System.GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public IneB2Weight(double c) : this(XapianPINVOKE.new_IneB2Weight__SWIG_0(c), true) {
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public IneB2Weight() : this(XapianPINVOKE.new_IneB2Weight__SWIG_1(), true) {
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public override string Name() {
    string ret = XapianPINVOKE.IneB2Weight_Name(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override double GetSumPart(uint wdf, uint doclen, uint uniqterms) {
    double ret = XapianPINVOKE.IneB2Weight_GetSumPart(swigCPtr, wdf, doclen, uniqterms);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override double GetMaxPart() {
    double ret = XapianPINVOKE.IneB2Weight_GetMaxPart(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override double GetSumExtra(uint doclen, uint uniqterms) {
    double ret = XapianPINVOKE.IneB2Weight_GetSumExtra(swigCPtr, doclen, uniqterms);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public override double GetMaxExtra() {
    double ret = XapianPINVOKE.IneB2Weight_GetMaxExtra(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

}

}
