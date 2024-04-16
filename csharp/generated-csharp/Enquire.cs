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

public class Enquire : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal Enquire(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(Enquire obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  internal static global::System.Runtime.InteropServices.HandleRef swigRelease(Enquire obj) {
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

  ~Enquire() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          XapianPINVOKE.delete_Enquire(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public Enquire(Database database) : this(XapianPINVOKE.new_Enquire(Database.getCPtr(database)), true) {
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetQuery(Query query, uint qlen) {
    XapianPINVOKE.Enquire_SetQuery__SWIG_0(swigCPtr, Query.getCPtr(query), qlen);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetQuery(Query query) {
    XapianPINVOKE.Enquire_SetQuery__SWIG_1(swigCPtr, Query.getCPtr(query));
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public Query GetQuery() {
    Query ret = new Query(XapianPINVOKE.Enquire_GetQuery(swigCPtr), false);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public void AddMatchspy(MatchSpy spy) {
    XapianPINVOKE.Enquire_AddMatchspy(swigCPtr, MatchSpy.getCPtr(spy));
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void ClearMatchspies() {
    XapianPINVOKE.Enquire_ClearMatchspies(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetWeightingScheme(Weight weight_) {
    XapianPINVOKE.Enquire_SetWeightingScheme(swigCPtr, Weight.getCPtr(weight_));
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetExpansionScheme(string eweightname_, double expand_k_) {
    XapianPINVOKE.Enquire_SetExpansionScheme__SWIG_0(swigCPtr, eweightname_, expand_k_);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetExpansionScheme(string eweightname_) {
    XapianPINVOKE.Enquire_SetExpansionScheme__SWIG_1(swigCPtr, eweightname_);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetCollapseKey(uint collapse_key, uint collapse_max) {
    XapianPINVOKE.Enquire_SetCollapseKey__SWIG_0(swigCPtr, collapse_key, collapse_max);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetCollapseKey(uint collapse_key) {
    XapianPINVOKE.Enquire_SetCollapseKey__SWIG_1(swigCPtr, collapse_key);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetDocidOrder(Enquire.docid_order order) {
    XapianPINVOKE.Enquire_SetDocidOrder(swigCPtr, (int)order);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetCutoff(int percent_cutoff, double weight_cutoff) {
    XapianPINVOKE.Enquire_SetCutoff__SWIG_0(swigCPtr, percent_cutoff, weight_cutoff);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetCutoff(int percent_cutoff) {
    XapianPINVOKE.Enquire_SetCutoff__SWIG_1(swigCPtr, percent_cutoff);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByRelevance() {
    XapianPINVOKE.Enquire_SetSortByRelevance(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByValue(uint sort_key, bool reverse) {
    XapianPINVOKE.Enquire_SetSortByValue(swigCPtr, sort_key, reverse);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByKey(KeyMaker sorter, bool reverse) {
    XapianPINVOKE.Enquire_SetSortByKey(swigCPtr, KeyMaker.getCPtr(sorter), reverse);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByValueThenRelevance(uint sort_key, bool reverse) {
    XapianPINVOKE.Enquire_SetSortByValueThenRelevance(swigCPtr, sort_key, reverse);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByKeyThenRelevance(KeyMaker sorter, bool reverse) {
    XapianPINVOKE.Enquire_SetSortByKeyThenRelevance(swigCPtr, KeyMaker.getCPtr(sorter), reverse);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByRelevanceThenValue(uint sort_key, bool reverse) {
    XapianPINVOKE.Enquire_SetSortByRelevanceThenValue(swigCPtr, sort_key, reverse);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetSortByRelevanceThenKey(KeyMaker sorter, bool reverse) {
    XapianPINVOKE.Enquire_SetSortByRelevanceThenKey(swigCPtr, KeyMaker.getCPtr(sorter), reverse);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public void SetTimeLimit(double time_limit) {
    XapianPINVOKE.Enquire_SetTimeLimit(swigCPtr, time_limit);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
  }

  public MSet GetMSet(uint first, uint maxitems, uint checkatleast, RSet omrset, MatchDecider mdecider) {
    MSet ret = new MSet(XapianPINVOKE.Enquire_GetMSet__SWIG_0(swigCPtr, first, maxitems, checkatleast, RSet.getCPtr(omrset), MatchDecider.getCPtr(mdecider)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public MSet GetMSet(uint first, uint maxitems, uint checkatleast, RSet omrset) {
    MSet ret = new MSet(XapianPINVOKE.Enquire_GetMSet__SWIG_1(swigCPtr, first, maxitems, checkatleast, RSet.getCPtr(omrset)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public MSet GetMSet(uint first, uint maxitems, uint checkatleast) {
    MSet ret = new MSet(XapianPINVOKE.Enquire_GetMSet__SWIG_2(swigCPtr, first, maxitems, checkatleast), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public MSet GetMSet(uint first, uint maxitems) {
    MSet ret = new MSet(XapianPINVOKE.Enquire_GetMSet__SWIG_3(swigCPtr, first, maxitems), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public MSet GetMSet(uint first, uint maxitems, RSet omrset, MatchDecider mdecider) {
    MSet ret = new MSet(XapianPINVOKE.Enquire_GetMSet__SWIG_4(swigCPtr, first, maxitems, RSet.getCPtr(omrset), MatchDecider.getCPtr(mdecider)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public MSet GetMSet(uint first, uint maxitems, RSet omrset) {
    MSet ret = new MSet(XapianPINVOKE.Enquire_GetMSet__SWIG_5(swigCPtr, first, maxitems, RSet.getCPtr(omrset)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet omrset, int flags, ExpandDecider edecider, double min_wt) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_0(swigCPtr, maxitems, RSet.getCPtr(omrset), flags, ExpandDecider.getCPtr(edecider), min_wt), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet omrset, int flags, ExpandDecider edecider) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_1(swigCPtr, maxitems, RSet.getCPtr(omrset), flags, ExpandDecider.getCPtr(edecider)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet omrset, int flags) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_2(swigCPtr, maxitems, RSet.getCPtr(omrset), flags), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet omrset) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_3(swigCPtr, maxitems, RSet.getCPtr(omrset)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet omrset, ExpandDecider edecider) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_4(swigCPtr, maxitems, RSet.getCPtr(omrset), ExpandDecider.getCPtr(edecider)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet rset, int flags, double k, ExpandDecider edecider, double min_wt) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_5(swigCPtr, maxitems, RSet.getCPtr(rset), flags, k, ExpandDecider.getCPtr(edecider), min_wt), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet rset, int flags, double k, ExpandDecider edecider) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_6(swigCPtr, maxitems, RSet.getCPtr(rset), flags, k, ExpandDecider.getCPtr(edecider)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ESet GetESet(uint maxitems, RSet rset, int flags, double k) {
    ESet ret = new ESet(XapianPINVOKE.Enquire_GetESet__SWIG_7(swigCPtr, maxitems, RSet.getCPtr(rset), flags, k), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator GetMatchingTermsBegin(uint did) {
    TermIterator ret = new TermIterator(XapianPINVOKE.Enquire_GetMatchingTermsBegin__SWIG_0(swigCPtr, did), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator GetMatchingTermsEnd(uint arg0) {
    TermIterator ret = new TermIterator(XapianPINVOKE.Enquire_GetMatchingTermsEnd__SWIG_0(swigCPtr, arg0), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator GetMatchingTermsBegin(MSetIterator it) {
    TermIterator ret = new TermIterator(XapianPINVOKE.Enquire_GetMatchingTermsBegin__SWIG_1(swigCPtr, MSetIterator.getCPtr(it)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public TermIterator GetMatchingTermsEnd(MSetIterator arg0) {
    TermIterator ret = new TermIterator(XapianPINVOKE.Enquire_GetMatchingTermsEnd__SWIG_1(swigCPtr, MSetIterator.getCPtr(arg0)), true);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string GetDescription() {
    string ret = XapianPINVOKE.Enquire_GetDescription(swigCPtr);
    if (XapianPINVOKE.SWIGPendingException.Pending) throw XapianPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public enum docid_order {
    ASCENDING = 1,
    DESCENDING = 0,
    DONT_CARE = 2
  }

  public static readonly int INCLUDE_QUERY_TERMS = XapianPINVOKE.Enquire_INCLUDE_QUERY_TERMS_get();
  public static readonly int USE_EXACT_TERMFREQ = XapianPINVOKE.Enquire_USE_EXACT_TERMFREQ_get();
}

}
