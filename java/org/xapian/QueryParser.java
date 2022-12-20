/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.13
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.xapian;

public class QueryParser {
  private transient long swigCPtr;
  protected transient boolean swigCMemOwn;

  protected QueryParser(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(QueryParser obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        XapianJNI.delete_QueryParser(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public QueryParser() {
    this(XapianJNI.new_QueryParser(), true);
  }

  public void setStemmer(Stem stemmer) {
    XapianJNI.QueryParser_setStemmer(swigCPtr, this, Stem.getCPtr(stemmer), stemmer);
  }

  public void setStemmingStrategy(QueryParser.stem_strategy strategy) {
    XapianJNI.QueryParser_setStemmingStrategy(swigCPtr, this, strategy.swigValue());
  }

  public void setStopper(Stopper stop) {
    XapianJNI.QueryParser_setStopper__SWIG_0(swigCPtr, this, Stopper.getCPtr(stop), stop);
  }

  public void setStopper() {
    XapianJNI.QueryParser_setStopper__SWIG_1(swigCPtr, this);
  }

  public void setDefaultOp(Query.op default_op) {
    XapianJNI.QueryParser_setDefaultOp(swigCPtr, this, default_op.swigValue());
  }

  public Query.op getDefaultOp() {
    return Query.op.swigToEnum(XapianJNI.QueryParser_getDefaultOp(swigCPtr, this));
  }

  public void setDatabase(Database db) {
    XapianJNI.QueryParser_setDatabase(swigCPtr, this, Database.getCPtr(db), db);
  }

  public void setMaxExpansion(long max_expansion, int max_type, long flags) {
    XapianJNI.QueryParser_setMaxExpansion__SWIG_0(swigCPtr, this, max_expansion, max_type, flags);
  }

  public void setMaxExpansion(long max_expansion, int max_type) {
    XapianJNI.QueryParser_setMaxExpansion__SWIG_1(swigCPtr, this, max_expansion, max_type);
  }

  public void setMaxExpansion(long max_expansion) {
    XapianJNI.QueryParser_setMaxExpansion__SWIG_2(swigCPtr, this, max_expansion);
  }

  public void setMaxWildcardExpansion(long arg0) {
    XapianJNI.QueryParser_setMaxWildcardExpansion(swigCPtr, this, arg0);
  }

  public Query parseQuery(String query_string, long flags, String default_prefix) {
    return new Query(XapianJNI.QueryParser_parseQuery__SWIG_0(swigCPtr, this, query_string, flags, default_prefix), true);
  }

  public Query parseQuery(String query_string, long flags) {
    return new Query(XapianJNI.QueryParser_parseQuery__SWIG_1(swigCPtr, this, query_string, flags), true);
  }

  public Query parseQuery(String query_string) {
    return new Query(XapianJNI.QueryParser_parseQuery__SWIG_2(swigCPtr, this, query_string), true);
  }

  public void addPrefix(String field, String prefix) {
    XapianJNI.QueryParser_addPrefix__SWIG_0(swigCPtr, this, field, prefix);
  }

  public void addPrefix(String field, FieldProcessor proc) {
    XapianJNI.QueryParser_addPrefix__SWIG_1(swigCPtr, this, field, FieldProcessor.getCPtr(proc), proc);
  }

  public void addBooleanPrefix(String field, String prefix, String grouping) {
    XapianJNI.QueryParser_addBooleanPrefix__SWIG_0(swigCPtr, this, field, prefix, grouping);
  }

  public void addBooleanPrefix(String field, String prefix) {
    XapianJNI.QueryParser_addBooleanPrefix__SWIG_1(swigCPtr, this, field, prefix);
  }

  public void addBooleanPrefix(String field, String prefix, boolean exclusive) {
    XapianJNI.QueryParser_addBooleanPrefix__SWIG_2(swigCPtr, this, field, prefix, exclusive);
  }

  public void addBooleanPrefix(String field, FieldProcessor proc, String grouping) {
    XapianJNI.QueryParser_addBooleanPrefix__SWIG_3(swigCPtr, this, field, FieldProcessor.getCPtr(proc), proc, grouping);
  }

  public void addBooleanPrefix(String field, FieldProcessor proc) {
    XapianJNI.QueryParser_addBooleanPrefix__SWIG_4(swigCPtr, this, field, FieldProcessor.getCPtr(proc), proc);
  }

  public void addBooleanPrefix(String field, FieldProcessor proc, boolean exclusive) {
    XapianJNI.QueryParser_addBooleanPrefix__SWIG_5(swigCPtr, this, field, FieldProcessor.getCPtr(proc), proc, exclusive);
  }

  public TermIterator stopListBegin() {
    return new TermIterator(XapianJNI.QueryParser_stopListBegin(swigCPtr, this), true);
  }

  public TermIterator stopListEnd() {
    return new TermIterator(XapianJNI.QueryParser_stopListEnd(swigCPtr, this), true);
  }

  public TermIterator unstemBegin(String term) {
    return new TermIterator(XapianJNI.QueryParser_unstemBegin(swigCPtr, this, term), true);
  }

  public TermIterator unstemEnd(String arg0) {
    return new TermIterator(XapianJNI.QueryParser_unstemEnd(swigCPtr, this, arg0), true);
  }

  public void addRangeprocessor(RangeProcessor range_proc, String grouping) {
    XapianJNI.QueryParser_addRangeprocessor__SWIG_0(swigCPtr, this, RangeProcessor.getCPtr(range_proc), range_proc, grouping);
  }

  public void addRangeprocessor(RangeProcessor range_proc) {
    XapianJNI.QueryParser_addRangeprocessor__SWIG_1(swigCPtr, this, RangeProcessor.getCPtr(range_proc), range_proc);
  }

  public void addValuerangeprocessor(ValueRangeProcessor vrproc) {
    XapianJNI.QueryParser_addValuerangeprocessor(swigCPtr, this, ValueRangeProcessor.getCPtr(vrproc), vrproc);
  }

  public String getCorrectedQueryString() {
    return XapianJNI.QueryParser_getCorrectedQueryString(swigCPtr, this);
  }

  public String toString() {
    return XapianJNI.QueryParser_toString(swigCPtr, this);
  }

  public final static class feature_flag {
    public final static QueryParser.feature_flag FLAG_BOOLEAN = new QueryParser.feature_flag("FLAG_BOOLEAN", XapianJNI.QueryParser_FLAG_BOOLEAN_get());
    public final static QueryParser.feature_flag FLAG_PHRASE = new QueryParser.feature_flag("FLAG_PHRASE", XapianJNI.QueryParser_FLAG_PHRASE_get());
    public final static QueryParser.feature_flag FLAG_LOVEHATE = new QueryParser.feature_flag("FLAG_LOVEHATE", XapianJNI.QueryParser_FLAG_LOVEHATE_get());
    public final static QueryParser.feature_flag FLAG_BOOLEAN_ANY_CASE = new QueryParser.feature_flag("FLAG_BOOLEAN_ANY_CASE", XapianJNI.QueryParser_FLAG_BOOLEAN_ANY_CASE_get());
    public final static QueryParser.feature_flag FLAG_WILDCARD = new QueryParser.feature_flag("FLAG_WILDCARD", XapianJNI.QueryParser_FLAG_WILDCARD_get());
    public final static QueryParser.feature_flag FLAG_PURE_NOT = new QueryParser.feature_flag("FLAG_PURE_NOT", XapianJNI.QueryParser_FLAG_PURE_NOT_get());
    public final static QueryParser.feature_flag FLAG_PARTIAL = new QueryParser.feature_flag("FLAG_PARTIAL", XapianJNI.QueryParser_FLAG_PARTIAL_get());
    public final static QueryParser.feature_flag FLAG_SPELLING_CORRECTION = new QueryParser.feature_flag("FLAG_SPELLING_CORRECTION", XapianJNI.QueryParser_FLAG_SPELLING_CORRECTION_get());
    public final static QueryParser.feature_flag FLAG_SYNONYM = new QueryParser.feature_flag("FLAG_SYNONYM", XapianJNI.QueryParser_FLAG_SYNONYM_get());
    public final static QueryParser.feature_flag FLAG_AUTO_SYNONYMS = new QueryParser.feature_flag("FLAG_AUTO_SYNONYMS", XapianJNI.QueryParser_FLAG_AUTO_SYNONYMS_get());
    public final static QueryParser.feature_flag FLAG_AUTO_MULTIWORD_SYNONYMS = new QueryParser.feature_flag("FLAG_AUTO_MULTIWORD_SYNONYMS", XapianJNI.QueryParser_FLAG_AUTO_MULTIWORD_SYNONYMS_get());
    public final static QueryParser.feature_flag FLAG_CJK_NGRAM = new QueryParser.feature_flag("FLAG_CJK_NGRAM", XapianJNI.QueryParser_FLAG_CJK_NGRAM_get());
    public final static QueryParser.feature_flag FLAG_ACCUMULATE = new QueryParser.feature_flag("FLAG_ACCUMULATE", XapianJNI.QueryParser_FLAG_ACCUMULATE_get());
    public final static QueryParser.feature_flag FLAG_DEFAULT = new QueryParser.feature_flag("FLAG_DEFAULT", XapianJNI.QueryParser_FLAG_DEFAULT_get());

    public final int swigValue() {
      return swigValue;
    }

    public String toString() {
      return swigName;
    }

    public static feature_flag swigToEnum(int swigValue) {
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (int i = 0; i < swigValues.length; i++)
        if (swigValues[i].swigValue == swigValue)
          return swigValues[i];
      throw new IllegalArgumentException("No enum " + feature_flag.class + " with value " + swigValue);
    }

    private feature_flag(String swigName) {
      this.swigName = swigName;
      this.swigValue = swigNext++;
    }

    private feature_flag(String swigName, int swigValue) {
      this.swigName = swigName;
      this.swigValue = swigValue;
      swigNext = swigValue+1;
    }

    private feature_flag(String swigName, feature_flag swigEnum) {
      this.swigName = swigName;
      this.swigValue = swigEnum.swigValue;
      swigNext = this.swigValue+1;
    }

    private static feature_flag[] swigValues = { FLAG_BOOLEAN, FLAG_PHRASE, FLAG_LOVEHATE, FLAG_BOOLEAN_ANY_CASE, FLAG_WILDCARD, FLAG_PURE_NOT, FLAG_PARTIAL, FLAG_SPELLING_CORRECTION, FLAG_SYNONYM, FLAG_AUTO_SYNONYMS, FLAG_AUTO_MULTIWORD_SYNONYMS, FLAG_CJK_NGRAM, FLAG_ACCUMULATE, FLAG_DEFAULT };
    private static int swigNext = 0;
    private final int swigValue;
    private final String swigName;
  }

  public final static class stem_strategy {
    public final static QueryParser.stem_strategy STEM_NONE = new QueryParser.stem_strategy("STEM_NONE");
    public final static QueryParser.stem_strategy STEM_SOME = new QueryParser.stem_strategy("STEM_SOME");
    public final static QueryParser.stem_strategy STEM_ALL = new QueryParser.stem_strategy("STEM_ALL");
    public final static QueryParser.stem_strategy STEM_ALL_Z = new QueryParser.stem_strategy("STEM_ALL_Z");
    public final static QueryParser.stem_strategy STEM_SOME_FULL_POS = new QueryParser.stem_strategy("STEM_SOME_FULL_POS");

    public final int swigValue() {
      return swigValue;
    }

    public String toString() {
      return swigName;
    }

    public static stem_strategy swigToEnum(int swigValue) {
      if (swigValue < swigValues.length && swigValue >= 0 && swigValues[swigValue].swigValue == swigValue)
        return swigValues[swigValue];
      for (int i = 0; i < swigValues.length; i++)
        if (swigValues[i].swigValue == swigValue)
          return swigValues[i];
      throw new IllegalArgumentException("No enum " + stem_strategy.class + " with value " + swigValue);
    }

    private stem_strategy(String swigName) {
      this.swigName = swigName;
      this.swigValue = swigNext++;
    }

    private stem_strategy(String swigName, int swigValue) {
      this.swigName = swigName;
      this.swigValue = swigValue;
      swigNext = swigValue+1;
    }

    private stem_strategy(String swigName, stem_strategy swigEnum) {
      this.swigName = swigName;
      this.swigValue = swigEnum.swigValue;
      swigNext = this.swigValue+1;
    }

    private static stem_strategy[] swigValues = { STEM_NONE, STEM_SOME, STEM_ALL, STEM_ALL_Z, STEM_SOME_FULL_POS };
    private static int swigNext = 0;
    private final int swigValue;
    private final String swigName;
  }

}
