/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.0
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_XAPIAN_H
#define PHP_XAPIAN_H

extern zend_module_entry xapian_module_entry;
#define phpext_xapian_ptr &xapian_module_entry

#ifdef PHP_WIN32
# define PHP_XAPIAN_API __declspec(dllexport)
#else
# define PHP_XAPIAN_API
#endif

static PHP_FUNCTION(version_string);
static PHP_FUNCTION(major_version);
static PHP_FUNCTION(minor_version);
static PHP_FUNCTION(revision);
static PHP_METHOD(XapianPositionIterator,__construct);
static PHP_METHOD(XapianPositionIterator,skip_to);
static PHP_METHOD(XapianPositionIterator,get_description);
static PHP_METHOD(XapianPositionIterator,key);
static PHP_METHOD(XapianPositionIterator,current);
static PHP_METHOD(XapianPositionIterator,valid);
static PHP_METHOD(XapianPositionIterator,rewind);
static PHP_METHOD(XapianPositionIterator,equals);
static PHP_METHOD(XapianPositionIterator,get_termpos);
static PHP_METHOD(XapianPositionIterator,next);
PHP_METHOD(XapianPositionIterator,__set);
PHP_METHOD(XapianPositionIterator,__get);
PHP_METHOD(XapianPositionIterator,__isset);
static PHP_METHOD(XapianPostingIterator,__construct);
static PHP_METHOD(XapianPostingIterator,get_wdf);
static PHP_METHOD(XapianPostingIterator,get_doclength);
static PHP_METHOD(XapianPostingIterator,get_unique_terms);
static PHP_METHOD(XapianPostingIterator,positionlist_begin);
static PHP_METHOD(XapianPostingIterator,positionlist_end);
static PHP_METHOD(XapianPostingIterator,skip_to);
static PHP_METHOD(XapianPostingIterator,get_description);
static PHP_METHOD(XapianPostingIterator,key);
static PHP_METHOD(XapianPostingIterator,current);
static PHP_METHOD(XapianPostingIterator,valid);
static PHP_METHOD(XapianPostingIterator,rewind);
static PHP_METHOD(XapianPostingIterator,equals);
static PHP_METHOD(XapianPostingIterator,get_docid);
static PHP_METHOD(XapianPostingIterator,next);
PHP_METHOD(XapianPostingIterator,__set);
PHP_METHOD(XapianPostingIterator,__get);
PHP_METHOD(XapianPostingIterator,__isset);
static PHP_METHOD(XapianTermIterator,__construct);
static PHP_METHOD(XapianTermIterator,get_wdf);
static PHP_METHOD(XapianTermIterator,get_termfreq);
static PHP_METHOD(XapianTermIterator,positionlist_count);
static PHP_METHOD(XapianTermIterator,positionlist_begin);
static PHP_METHOD(XapianTermIterator,positionlist_end);
static PHP_METHOD(XapianTermIterator,skip_to);
static PHP_METHOD(XapianTermIterator,get_description);
static PHP_METHOD(XapianTermIterator,key);
static PHP_METHOD(XapianTermIterator,current);
static PHP_METHOD(XapianTermIterator,valid);
static PHP_METHOD(XapianTermIterator,rewind);
static PHP_METHOD(XapianTermIterator,equals);
static PHP_METHOD(XapianTermIterator,get_term);
static PHP_METHOD(XapianTermIterator,next);
PHP_METHOD(XapianTermIterator,__set);
PHP_METHOD(XapianTermIterator,__get);
PHP_METHOD(XapianTermIterator,__isset);
static PHP_METHOD(XapianValueIterator,__construct);
static PHP_METHOD(XapianValueIterator,get_docid);
static PHP_METHOD(XapianValueIterator,get_valueno);
static PHP_METHOD(XapianValueIterator,skip_to);
static PHP_METHOD(XapianValueIterator,check);
static PHP_METHOD(XapianValueIterator,get_description);
static PHP_METHOD(XapianValueIterator,key);
static PHP_METHOD(XapianValueIterator,current);
static PHP_METHOD(XapianValueIterator,valid);
static PHP_METHOD(XapianValueIterator,rewind);
static PHP_METHOD(XapianValueIterator,equals);
static PHP_METHOD(XapianValueIterator,get_value);
static PHP_METHOD(XapianValueIterator,next);
PHP_METHOD(XapianValueIterator,__set);
PHP_METHOD(XapianValueIterator,__get);
PHP_METHOD(XapianValueIterator,__isset);
static PHP_METHOD(XapianDocument,__construct);
static PHP_METHOD(XapianDocument,get_value);
static PHP_METHOD(XapianDocument,add_value);
static PHP_METHOD(XapianDocument,remove_value);
static PHP_METHOD(XapianDocument,clear_values);
static PHP_METHOD(XapianDocument,get_data);
static PHP_METHOD(XapianDocument,set_data);
static PHP_METHOD(XapianDocument,add_posting);
static PHP_METHOD(XapianDocument,add_term);
static PHP_METHOD(XapianDocument,add_boolean_term);
static PHP_METHOD(XapianDocument,remove_posting);
static PHP_METHOD(XapianDocument,remove_postings);
static PHP_METHOD(XapianDocument,remove_term);
static PHP_METHOD(XapianDocument,clear_terms);
static PHP_METHOD(XapianDocument,termlist_count);
static PHP_METHOD(XapianDocument,termlist_begin);
static PHP_METHOD(XapianDocument,termlist_end);
static PHP_METHOD(XapianDocument,values_count);
static PHP_METHOD(XapianDocument,values_begin);
static PHP_METHOD(XapianDocument,values_end);
static PHP_METHOD(XapianDocument,get_docid);
static PHP_METHOD(XapianDocument,serialise);
static PHP_METHOD(XapianDocument,unserialise);
static PHP_METHOD(XapianDocument,get_description);
PHP_METHOD(XapianDocument,__set);
PHP_METHOD(XapianDocument,__get);
PHP_METHOD(XapianDocument,__isset);
static PHP_METHOD(XapianRegistry,__construct);
static PHP_METHOD(XapianRegistry,register_weighting_scheme);
static PHP_METHOD(XapianRegistry,get_weighting_scheme);
static PHP_METHOD(XapianRegistry,register_posting_source);
static PHP_METHOD(XapianRegistry,get_posting_source);
static PHP_METHOD(XapianRegistry,register_match_spy);
static PHP_METHOD(XapianRegistry,get_match_spy);
static PHP_METHOD(XapianRegistry,register_lat_long_metric);
static PHP_METHOD(XapianRegistry,get_lat_long_metric);
PHP_METHOD(XapianRegistry,__set);
PHP_METHOD(XapianRegistry,__get);
PHP_METHOD(XapianRegistry,__isset);
static PHP_METHOD(XapianQuery,MatchNothing);
static PHP_METHOD(XapianQuery,MatchAll);
static PHP_METHOD(XapianQuery,get_terms_begin);
static PHP_METHOD(XapianQuery,get_terms_end);
static PHP_METHOD(XapianQuery,get_unique_terms_begin);
static PHP_METHOD(XapianQuery,get_unique_terms_end);
static PHP_METHOD(XapianQuery,get_length);
static PHP_METHOD(XapianQuery,is_empty);
static PHP_METHOD(XapianQuery,serialise);
static PHP_METHOD(XapianQuery,unserialise);
static PHP_METHOD(XapianQuery,get_type);
static PHP_METHOD(XapianQuery,get_num_subqueries);
static PHP_METHOD(XapianQuery,get_subquery);
static PHP_METHOD(XapianQuery,get_description);
static PHP_METHOD(XapianQuery,__construct);
PHP_METHOD(XapianQuery,__set);
PHP_METHOD(XapianQuery,__get);
PHP_METHOD(XapianQuery,__isset);
static PHP_METHOD(XapianStemImplementation,__construct);
static PHP_METHOD(XapianStemImplementation,apply);
static PHP_METHOD(XapianStemImplementation,get_description);
PHP_METHOD(XapianStemImplementation,__set);
PHP_METHOD(XapianStemImplementation,__get);
PHP_METHOD(XapianStemImplementation,__isset);
static PHP_METHOD(XapianStem,__construct);
static PHP_METHOD(XapianStem,apply);
static PHP_METHOD(XapianStem,is_none);
static PHP_METHOD(XapianStem,get_description);
static PHP_METHOD(XapianStem,get_available_languages);
PHP_METHOD(XapianStem,__set);
PHP_METHOD(XapianStem,__get);
PHP_METHOD(XapianStem,__isset);
static PHP_METHOD(XapianTermGenerator,__construct);
static PHP_METHOD(XapianTermGenerator,set_stemmer);
static PHP_METHOD(XapianTermGenerator,set_stopper);
static PHP_METHOD(XapianTermGenerator,set_document);
static PHP_METHOD(XapianTermGenerator,get_document);
static PHP_METHOD(XapianTermGenerator,set_database);
static PHP_METHOD(XapianTermGenerator,set_flags);
static PHP_METHOD(XapianTermGenerator,set_stemming_strategy);
static PHP_METHOD(XapianTermGenerator,set_stopper_strategy);
static PHP_METHOD(XapianTermGenerator,set_max_word_length);
static PHP_METHOD(XapianTermGenerator,index_text);
static PHP_METHOD(XapianTermGenerator,index_text_without_positions);
static PHP_METHOD(XapianTermGenerator,increase_termpos);
static PHP_METHOD(XapianTermGenerator,get_termpos);
static PHP_METHOD(XapianTermGenerator,set_termpos);
static PHP_METHOD(XapianTermGenerator,get_description);
PHP_METHOD(XapianTermGenerator,__set);
PHP_METHOD(XapianTermGenerator,__get);
PHP_METHOD(XapianTermGenerator,__isset);
static PHP_METHOD(XapianMSet,__construct);
static PHP_METHOD(XapianMSet,convert_to_percent);
static PHP_METHOD(XapianMSet,get_termfreq);
static PHP_METHOD(XapianMSet,get_termweight);
static PHP_METHOD(XapianMSet,get_firstitem);
static PHP_METHOD(XapianMSet,get_matches_lower_bound);
static PHP_METHOD(XapianMSet,get_matches_estimated);
static PHP_METHOD(XapianMSet,get_matches_upper_bound);
static PHP_METHOD(XapianMSet,get_uncollapsed_matches_lower_bound);
static PHP_METHOD(XapianMSet,get_uncollapsed_matches_estimated);
static PHP_METHOD(XapianMSet,get_uncollapsed_matches_upper_bound);
static PHP_METHOD(XapianMSet,get_max_attained);
static PHP_METHOD(XapianMSet,get_max_possible);
static PHP_METHOD(XapianMSet,snippet);
static PHP_METHOD(XapianMSet,fetch);
static PHP_METHOD(XapianMSet,size);
static PHP_METHOD(XapianMSet,is_empty);
static PHP_METHOD(XapianMSet,begin);
static PHP_METHOD(XapianMSet,end);
static PHP_METHOD(XapianMSet,back);
static PHP_METHOD(XapianMSet,get_description);
static PHP_METHOD(XapianMSet,get_docid);
static PHP_METHOD(XapianMSet,get_document);
static PHP_METHOD(XapianMSet,get_hit);
static PHP_METHOD(XapianMSet,get_document_percentage);
PHP_METHOD(XapianMSet,__set);
PHP_METHOD(XapianMSet,__get);
PHP_METHOD(XapianMSet,__isset);
static PHP_METHOD(XapianMSetIterator,mset_set);
static PHP_METHOD(XapianMSetIterator,mset_get);
static PHP_METHOD(XapianMSetIterator,off_from_end_set);
static PHP_METHOD(XapianMSetIterator,off_from_end_get);
static PHP_METHOD(XapianMSetIterator,__construct);
static PHP_METHOD(XapianMSetIterator,get_rank);
static PHP_METHOD(XapianMSetIterator,get_document);
static PHP_METHOD(XapianMSetIterator,get_weight);
static PHP_METHOD(XapianMSetIterator,get_collapse_key);
static PHP_METHOD(XapianMSetIterator,get_collapse_count);
static PHP_METHOD(XapianMSetIterator,get_sort_key);
static PHP_METHOD(XapianMSetIterator,get_percent);
static PHP_METHOD(XapianMSetIterator,get_description);
static PHP_METHOD(XapianMSetIterator,key);
static PHP_METHOD(XapianMSetIterator,current);
static PHP_METHOD(XapianMSetIterator,valid);
static PHP_METHOD(XapianMSetIterator,rewind);
static PHP_METHOD(XapianMSetIterator,equals);
static PHP_METHOD(XapianMSetIterator,get_docid);
static PHP_METHOD(XapianMSetIterator,next);
static PHP_METHOD(XapianMSetIterator,prev);
PHP_METHOD(XapianMSetIterator,__set);
PHP_METHOD(XapianMSetIterator,__get);
PHP_METHOD(XapianMSetIterator,__isset);
static PHP_METHOD(XapianESet,__construct);
static PHP_METHOD(XapianESet,size);
static PHP_METHOD(XapianESet,is_empty);
static PHP_METHOD(XapianESet,get_ebound);
static PHP_METHOD(XapianESet,begin);
static PHP_METHOD(XapianESet,end);
static PHP_METHOD(XapianESet,back);
static PHP_METHOD(XapianESet,get_description);
PHP_METHOD(XapianESet,__set);
PHP_METHOD(XapianESet,__get);
PHP_METHOD(XapianESet,__isset);
static PHP_METHOD(XapianESetIterator,eset_set);
static PHP_METHOD(XapianESetIterator,eset_get);
static PHP_METHOD(XapianESetIterator,off_from_end_set);
static PHP_METHOD(XapianESetIterator,off_from_end_get);
static PHP_METHOD(XapianESetIterator,__construct);
static PHP_METHOD(XapianESetIterator,get_weight);
static PHP_METHOD(XapianESetIterator,get_description);
static PHP_METHOD(XapianESetIterator,key);
static PHP_METHOD(XapianESetIterator,current);
static PHP_METHOD(XapianESetIterator,valid);
static PHP_METHOD(XapianESetIterator,rewind);
static PHP_METHOD(XapianESetIterator,equals);
static PHP_METHOD(XapianESetIterator,get_term);
static PHP_METHOD(XapianESetIterator,next);
static PHP_METHOD(XapianESetIterator,prev);
PHP_METHOD(XapianESetIterator,__set);
PHP_METHOD(XapianESetIterator,__get);
PHP_METHOD(XapianESetIterator,__isset);
static PHP_METHOD(XapianRSet,__construct);
static PHP_METHOD(XapianRSet,size);
static PHP_METHOD(XapianRSet,is_empty);
static PHP_METHOD(XapianRSet,add_document);
static PHP_METHOD(XapianRSet,remove_document);
static PHP_METHOD(XapianRSet,contains);
static PHP_METHOD(XapianRSet,get_description);
PHP_METHOD(XapianRSet,__set);
PHP_METHOD(XapianRSet,__get);
PHP_METHOD(XapianRSet,__isset);
static PHP_METHOD(XapianMatchDecider,__construct);
static PHP_METHOD(XapianMatchDecider,apply);
PHP_METHOD(XapianMatchDecider,__set);
PHP_METHOD(XapianMatchDecider,__get);
PHP_METHOD(XapianMatchDecider,__isset);
static PHP_METHOD(XapianEnquire,__construct);
static PHP_METHOD(XapianEnquire,set_query);
static PHP_METHOD(XapianEnquire,get_query);
static PHP_METHOD(XapianEnquire,add_matchspy);
static PHP_METHOD(XapianEnquire,clear_matchspies);
static PHP_METHOD(XapianEnquire,set_weighting_scheme);
static PHP_METHOD(XapianEnquire,set_expansion_scheme);
static PHP_METHOD(XapianEnquire,set_collapse_key);
static PHP_METHOD(XapianEnquire,set_docid_order);
static PHP_METHOD(XapianEnquire,set_cutoff);
static PHP_METHOD(XapianEnquire,set_sort_by_relevance);
static PHP_METHOD(XapianEnquire,set_sort_by_value);
static PHP_METHOD(XapianEnquire,set_sort_by_key);
static PHP_METHOD(XapianEnquire,set_sort_by_value_then_relevance);
static PHP_METHOD(XapianEnquire,set_sort_by_key_then_relevance);
static PHP_METHOD(XapianEnquire,set_sort_by_relevance_then_value);
static PHP_METHOD(XapianEnquire,set_sort_by_relevance_then_key);
static PHP_METHOD(XapianEnquire,set_time_limit);
static PHP_METHOD(XapianEnquire,get_mset);
static PHP_METHOD(XapianEnquire,get_eset);
static PHP_METHOD(XapianEnquire,get_matching_terms_begin);
static PHP_METHOD(XapianEnquire,get_matching_terms_end);
static PHP_METHOD(XapianEnquire,get_description);
static PHP_METHOD(XapianEnquire,get_matching_terms);
PHP_METHOD(XapianEnquire,__set);
PHP_METHOD(XapianEnquire,__get);
PHP_METHOD(XapianEnquire,__isset);
static PHP_METHOD(XapianExpandDecider,__construct);
static PHP_METHOD(XapianExpandDecider,apply);
static PHP_METHOD(XapianExpandDecider,release);
PHP_METHOD(XapianExpandDecider,__set);
PHP_METHOD(XapianExpandDecider,__get);
PHP_METHOD(XapianExpandDecider,__isset);
static PHP_METHOD(XapianExpandDeciderAnd,__construct);
static PHP_METHOD(XapianExpandDeciderAnd,apply);
PHP_METHOD(XapianExpandDeciderAnd,__set);
PHP_METHOD(XapianExpandDeciderAnd,__get);
PHP_METHOD(XapianExpandDeciderAnd,__isset);
static PHP_METHOD(XapianExpandDeciderFilterPrefix,__construct);
static PHP_METHOD(XapianExpandDeciderFilterPrefix,apply);
PHP_METHOD(XapianExpandDeciderFilterPrefix,__set);
PHP_METHOD(XapianExpandDeciderFilterPrefix,__get);
PHP_METHOD(XapianExpandDeciderFilterPrefix,__isset);
static PHP_METHOD(XapianKeyMaker,__construct);
static PHP_METHOD(XapianKeyMaker,apply);
static PHP_METHOD(XapianKeyMaker,release);
PHP_METHOD(XapianKeyMaker,__set);
PHP_METHOD(XapianKeyMaker,__get);
PHP_METHOD(XapianKeyMaker,__isset);
static PHP_METHOD(XapianMultiValueKeyMaker,__construct);
static PHP_METHOD(XapianMultiValueKeyMaker,apply);
static PHP_METHOD(XapianMultiValueKeyMaker,add_value);
PHP_METHOD(XapianMultiValueKeyMaker,__set);
PHP_METHOD(XapianMultiValueKeyMaker,__get);
PHP_METHOD(XapianMultiValueKeyMaker,__isset);
static PHP_METHOD(XapianStopper,__construct);
static PHP_METHOD(XapianStopper,apply);
static PHP_METHOD(XapianStopper,get_description);
static PHP_METHOD(XapianStopper,release);
PHP_METHOD(XapianStopper,__set);
PHP_METHOD(XapianStopper,__get);
PHP_METHOD(XapianStopper,__isset);
static PHP_METHOD(XapianSimpleStopper,add);
static PHP_METHOD(XapianSimpleStopper,apply);
static PHP_METHOD(XapianSimpleStopper,get_description);
static PHP_METHOD(XapianSimpleStopper,__construct);
PHP_METHOD(XapianSimpleStopper,__set);
PHP_METHOD(XapianSimpleStopper,__get);
PHP_METHOD(XapianSimpleStopper,__isset);
static PHP_METHOD(XapianRangeProcessor,__construct);
static PHP_METHOD(XapianRangeProcessor,check_range);
static PHP_METHOD(XapianRangeProcessor,apply);
static PHP_METHOD(XapianRangeProcessor,release);
PHP_METHOD(XapianRangeProcessor,__set);
PHP_METHOD(XapianRangeProcessor,__get);
PHP_METHOD(XapianRangeProcessor,__isset);
static PHP_METHOD(XapianDateRangeProcessor,__construct);
static PHP_METHOD(XapianDateRangeProcessor,apply);
PHP_METHOD(XapianDateRangeProcessor,__set);
PHP_METHOD(XapianDateRangeProcessor,__get);
PHP_METHOD(XapianDateRangeProcessor,__isset);
static PHP_METHOD(XapianNumberRangeProcessor,__construct);
static PHP_METHOD(XapianNumberRangeProcessor,apply);
PHP_METHOD(XapianNumberRangeProcessor,__set);
PHP_METHOD(XapianNumberRangeProcessor,__get);
PHP_METHOD(XapianNumberRangeProcessor,__isset);
static PHP_METHOD(XapianValueRangeProcessor,__construct);
static PHP_METHOD(XapianValueRangeProcessor,apply);
static PHP_METHOD(XapianValueRangeProcessor,release);
PHP_METHOD(XapianValueRangeProcessor,__set);
PHP_METHOD(XapianValueRangeProcessor,__get);
PHP_METHOD(XapianValueRangeProcessor,__isset);
static PHP_METHOD(XapianStringValueRangeProcessor,__construct);
static PHP_METHOD(XapianStringValueRangeProcessor,apply);
PHP_METHOD(XapianStringValueRangeProcessor,__set);
PHP_METHOD(XapianStringValueRangeProcessor,__get);
PHP_METHOD(XapianStringValueRangeProcessor,__isset);
static PHP_METHOD(XapianDateValueRangeProcessor,__construct);
static PHP_METHOD(XapianDateValueRangeProcessor,apply);
PHP_METHOD(XapianDateValueRangeProcessor,__set);
PHP_METHOD(XapianDateValueRangeProcessor,__get);
PHP_METHOD(XapianDateValueRangeProcessor,__isset);
static PHP_METHOD(XapianNumberValueRangeProcessor,__construct);
static PHP_METHOD(XapianNumberValueRangeProcessor,apply);
PHP_METHOD(XapianNumberValueRangeProcessor,__set);
PHP_METHOD(XapianNumberValueRangeProcessor,__get);
PHP_METHOD(XapianNumberValueRangeProcessor,__isset);
static PHP_METHOD(XapianFieldProcessor,__construct);
static PHP_METHOD(XapianFieldProcessor,apply);
static PHP_METHOD(XapianFieldProcessor,release);
PHP_METHOD(XapianFieldProcessor,__set);
PHP_METHOD(XapianFieldProcessor,__get);
PHP_METHOD(XapianFieldProcessor,__isset);
static PHP_METHOD(XapianQueryParser,__construct);
static PHP_METHOD(XapianQueryParser,set_stemmer);
static PHP_METHOD(XapianQueryParser,set_stemming_strategy);
static PHP_METHOD(XapianQueryParser,set_stopper);
static PHP_METHOD(XapianQueryParser,set_default_op);
static PHP_METHOD(XapianQueryParser,get_default_op);
static PHP_METHOD(XapianQueryParser,set_database);
static PHP_METHOD(XapianQueryParser,set_max_expansion);
static PHP_METHOD(XapianQueryParser,set_max_wildcard_expansion);
static PHP_METHOD(XapianQueryParser,parse_query);
static PHP_METHOD(XapianQueryParser,add_prefix);
static PHP_METHOD(XapianQueryParser,add_boolean_prefix);
static PHP_METHOD(XapianQueryParser,stoplist_begin);
static PHP_METHOD(XapianQueryParser,stoplist_end);
static PHP_METHOD(XapianQueryParser,unstem_begin);
static PHP_METHOD(XapianQueryParser,unstem_end);
static PHP_METHOD(XapianQueryParser,add_rangeprocessor);
static PHP_METHOD(XapianQueryParser,add_valuerangeprocessor);
static PHP_METHOD(XapianQueryParser,get_corrected_query_string);
static PHP_METHOD(XapianQueryParser,get_description);
PHP_METHOD(XapianQueryParser,__set);
PHP_METHOD(XapianQueryParser,__get);
PHP_METHOD(XapianQueryParser,__isset);
static PHP_FUNCTION(sortable_serialise);
static PHP_FUNCTION(sortable_unserialise);
static PHP_METHOD(XapianValueSetMatchDecider,__construct);
static PHP_METHOD(XapianValueSetMatchDecider,add_value);
static PHP_METHOD(XapianValueSetMatchDecider,remove_value);
static PHP_METHOD(XapianValueSetMatchDecider,apply);
PHP_METHOD(XapianValueSetMatchDecider,__set);
PHP_METHOD(XapianValueSetMatchDecider,__get);
PHP_METHOD(XapianValueSetMatchDecider,__isset);
static PHP_METHOD(XapianWeight,name);
static PHP_METHOD(XapianWeight,get_sumpart);
static PHP_METHOD(XapianWeight,get_maxpart);
static PHP_METHOD(XapianWeight,get_sumextra);
static PHP_METHOD(XapianWeight,get_maxextra);
PHP_METHOD(XapianWeight,__set);
PHP_METHOD(XapianWeight,__get);
PHP_METHOD(XapianWeight,__isset);
static PHP_METHOD(XapianBoolWeight,__construct);
static PHP_METHOD(XapianBoolWeight,name);
static PHP_METHOD(XapianBoolWeight,get_sumpart);
static PHP_METHOD(XapianBoolWeight,get_maxpart);
static PHP_METHOD(XapianBoolWeight,get_sumextra);
static PHP_METHOD(XapianBoolWeight,get_maxextra);
PHP_METHOD(XapianBoolWeight,__set);
PHP_METHOD(XapianBoolWeight,__get);
PHP_METHOD(XapianBoolWeight,__isset);
static PHP_METHOD(XapianTfIdfWeight,__construct);
static PHP_METHOD(XapianTfIdfWeight,name);
static PHP_METHOD(XapianTfIdfWeight,get_sumpart);
static PHP_METHOD(XapianTfIdfWeight,get_maxpart);
static PHP_METHOD(XapianTfIdfWeight,get_sumextra);
static PHP_METHOD(XapianTfIdfWeight,get_maxextra);
PHP_METHOD(XapianTfIdfWeight,__set);
PHP_METHOD(XapianTfIdfWeight,__get);
PHP_METHOD(XapianTfIdfWeight,__isset);
static PHP_METHOD(XapianBM25Weight,__construct);
static PHP_METHOD(XapianBM25Weight,name);
static PHP_METHOD(XapianBM25Weight,get_sumpart);
static PHP_METHOD(XapianBM25Weight,get_maxpart);
static PHP_METHOD(XapianBM25Weight,get_sumextra);
static PHP_METHOD(XapianBM25Weight,get_maxextra);
PHP_METHOD(XapianBM25Weight,__set);
PHP_METHOD(XapianBM25Weight,__get);
PHP_METHOD(XapianBM25Weight,__isset);
static PHP_METHOD(XapianBM25PlusWeight,__construct);
static PHP_METHOD(XapianBM25PlusWeight,name);
static PHP_METHOD(XapianBM25PlusWeight,get_sumpart);
static PHP_METHOD(XapianBM25PlusWeight,get_maxpart);
static PHP_METHOD(XapianBM25PlusWeight,get_sumextra);
static PHP_METHOD(XapianBM25PlusWeight,get_maxextra);
PHP_METHOD(XapianBM25PlusWeight,__set);
PHP_METHOD(XapianBM25PlusWeight,__get);
PHP_METHOD(XapianBM25PlusWeight,__isset);
static PHP_METHOD(XapianTradWeight,__construct);
static PHP_METHOD(XapianTradWeight,name);
static PHP_METHOD(XapianTradWeight,get_sumpart);
static PHP_METHOD(XapianTradWeight,get_maxpart);
static PHP_METHOD(XapianTradWeight,get_sumextra);
static PHP_METHOD(XapianTradWeight,get_maxextra);
PHP_METHOD(XapianTradWeight,__set);
PHP_METHOD(XapianTradWeight,__get);
PHP_METHOD(XapianTradWeight,__isset);
static PHP_METHOD(XapianInL2Weight,__construct);
static PHP_METHOD(XapianInL2Weight,name);
static PHP_METHOD(XapianInL2Weight,get_sumpart);
static PHP_METHOD(XapianInL2Weight,get_maxpart);
static PHP_METHOD(XapianInL2Weight,get_sumextra);
static PHP_METHOD(XapianInL2Weight,get_maxextra);
PHP_METHOD(XapianInL2Weight,__set);
PHP_METHOD(XapianInL2Weight,__get);
PHP_METHOD(XapianInL2Weight,__isset);
static PHP_METHOD(XapianIfB2Weight,__construct);
static PHP_METHOD(XapianIfB2Weight,name);
static PHP_METHOD(XapianIfB2Weight,get_sumpart);
static PHP_METHOD(XapianIfB2Weight,get_maxpart);
static PHP_METHOD(XapianIfB2Weight,get_sumextra);
static PHP_METHOD(XapianIfB2Weight,get_maxextra);
PHP_METHOD(XapianIfB2Weight,__set);
PHP_METHOD(XapianIfB2Weight,__get);
PHP_METHOD(XapianIfB2Weight,__isset);
static PHP_METHOD(XapianIneB2Weight,__construct);
static PHP_METHOD(XapianIneB2Weight,name);
static PHP_METHOD(XapianIneB2Weight,get_sumpart);
static PHP_METHOD(XapianIneB2Weight,get_maxpart);
static PHP_METHOD(XapianIneB2Weight,get_sumextra);
static PHP_METHOD(XapianIneB2Weight,get_maxextra);
PHP_METHOD(XapianIneB2Weight,__set);
PHP_METHOD(XapianIneB2Weight,__get);
PHP_METHOD(XapianIneB2Weight,__isset);
static PHP_METHOD(XapianBB2Weight,__construct);
static PHP_METHOD(XapianBB2Weight,name);
static PHP_METHOD(XapianBB2Weight,get_sumpart);
static PHP_METHOD(XapianBB2Weight,get_maxpart);
static PHP_METHOD(XapianBB2Weight,get_sumextra);
static PHP_METHOD(XapianBB2Weight,get_maxextra);
PHP_METHOD(XapianBB2Weight,__set);
PHP_METHOD(XapianBB2Weight,__get);
PHP_METHOD(XapianBB2Weight,__isset);
static PHP_METHOD(XapianDLHWeight,__construct);
static PHP_METHOD(XapianDLHWeight,name);
static PHP_METHOD(XapianDLHWeight,get_sumpart);
static PHP_METHOD(XapianDLHWeight,get_maxpart);
static PHP_METHOD(XapianDLHWeight,get_sumextra);
static PHP_METHOD(XapianDLHWeight,get_maxextra);
PHP_METHOD(XapianDLHWeight,__set);
PHP_METHOD(XapianDLHWeight,__get);
PHP_METHOD(XapianDLHWeight,__isset);
static PHP_METHOD(XapianPL2Weight,__construct);
static PHP_METHOD(XapianPL2Weight,name);
static PHP_METHOD(XapianPL2Weight,get_sumpart);
static PHP_METHOD(XapianPL2Weight,get_maxpart);
static PHP_METHOD(XapianPL2Weight,get_sumextra);
static PHP_METHOD(XapianPL2Weight,get_maxextra);
PHP_METHOD(XapianPL2Weight,__set);
PHP_METHOD(XapianPL2Weight,__get);
PHP_METHOD(XapianPL2Weight,__isset);
static PHP_METHOD(XapianPL2PlusWeight,__construct);
static PHP_METHOD(XapianPL2PlusWeight,name);
static PHP_METHOD(XapianPL2PlusWeight,get_sumpart);
static PHP_METHOD(XapianPL2PlusWeight,get_maxpart);
static PHP_METHOD(XapianPL2PlusWeight,get_sumextra);
static PHP_METHOD(XapianPL2PlusWeight,get_maxextra);
PHP_METHOD(XapianPL2PlusWeight,__set);
PHP_METHOD(XapianPL2PlusWeight,__get);
PHP_METHOD(XapianPL2PlusWeight,__isset);
static PHP_METHOD(XapianDPHWeight,__construct);
static PHP_METHOD(XapianDPHWeight,name);
static PHP_METHOD(XapianDPHWeight,get_sumpart);
static PHP_METHOD(XapianDPHWeight,get_maxpart);
static PHP_METHOD(XapianDPHWeight,get_sumextra);
static PHP_METHOD(XapianDPHWeight,get_maxextra);
PHP_METHOD(XapianDPHWeight,__set);
PHP_METHOD(XapianDPHWeight,__get);
PHP_METHOD(XapianDPHWeight,__isset);
static PHP_METHOD(XapianLMWeight,__construct);
static PHP_METHOD(XapianLMWeight,name);
static PHP_METHOD(XapianLMWeight,get_sumpart);
static PHP_METHOD(XapianLMWeight,get_maxpart);
static PHP_METHOD(XapianLMWeight,get_sumextra);
static PHP_METHOD(XapianLMWeight,get_maxextra);
PHP_METHOD(XapianLMWeight,__set);
PHP_METHOD(XapianLMWeight,__get);
PHP_METHOD(XapianLMWeight,__isset);
static PHP_METHOD(XapianCoordWeight,init);
static PHP_METHOD(XapianCoordWeight,__construct);
static PHP_METHOD(XapianCoordWeight,name);
static PHP_METHOD(XapianCoordWeight,get_sumpart);
static PHP_METHOD(XapianCoordWeight,get_maxpart);
static PHP_METHOD(XapianCoordWeight,get_sumextra);
static PHP_METHOD(XapianCoordWeight,get_maxextra);
PHP_METHOD(XapianCoordWeight,__set);
PHP_METHOD(XapianCoordWeight,__get);
PHP_METHOD(XapianCoordWeight,__isset);
static PHP_METHOD(XapianCompactor,__construct);
static PHP_METHOD(XapianCompactor,set_block_size);
static PHP_METHOD(XapianCompactor,set_renumber);
static PHP_METHOD(XapianCompactor,set_multipass);
static PHP_METHOD(XapianCompactor,set_compaction_level);
static PHP_METHOD(XapianCompactor,set_destdir);
static PHP_METHOD(XapianCompactor,add_source);
static PHP_METHOD(XapianCompactor,compact);
static PHP_METHOD(XapianCompactor,set_status);
static PHP_METHOD(XapianCompactor,resolve_duplicate_metadata);
PHP_METHOD(XapianCompactor,__set);
PHP_METHOD(XapianCompactor,__get);
PHP_METHOD(XapianCompactor,__isset);
static PHP_METHOD(XapianPostingSource,__construct);
static PHP_METHOD(XapianPostingSource,get_termfreq_min);
static PHP_METHOD(XapianPostingSource,get_termfreq_est);
static PHP_METHOD(XapianPostingSource,get_termfreq_max);
static PHP_METHOD(XapianPostingSource,set_maxweight);
static PHP_METHOD(XapianPostingSource,get_maxweight);
static PHP_METHOD(XapianPostingSource,get_weight);
static PHP_METHOD(XapianPostingSource,get_docid);
static PHP_METHOD(XapianPostingSource,next);
static PHP_METHOD(XapianPostingSource,skip_to);
static PHP_METHOD(XapianPostingSource,check);
static PHP_METHOD(XapianPostingSource,at_end);
static PHP_METHOD(XapianPostingSource,name);
static PHP_METHOD(XapianPostingSource,init);
static PHP_METHOD(XapianPostingSource,get_description);
static PHP_METHOD(XapianPostingSource,release);
PHP_METHOD(XapianPostingSource,__set);
PHP_METHOD(XapianPostingSource,__get);
PHP_METHOD(XapianPostingSource,__isset);
static PHP_METHOD(XapianValuePostingSource,__construct);
static PHP_METHOD(XapianValuePostingSource,get_termfreq_min);
static PHP_METHOD(XapianValuePostingSource,get_termfreq_est);
static PHP_METHOD(XapianValuePostingSource,get_termfreq_max);
static PHP_METHOD(XapianValuePostingSource,next);
static PHP_METHOD(XapianValuePostingSource,skip_to);
static PHP_METHOD(XapianValuePostingSource,check);
static PHP_METHOD(XapianValuePostingSource,at_end);
static PHP_METHOD(XapianValuePostingSource,get_docid);
static PHP_METHOD(XapianValuePostingSource,init);
static PHP_METHOD(XapianValuePostingSource,get_database);
static PHP_METHOD(XapianValuePostingSource,get_slot);
static PHP_METHOD(XapianValuePostingSource,get_value);
static PHP_METHOD(XapianValuePostingSource,done);
static PHP_METHOD(XapianValuePostingSource,get_started);
static PHP_METHOD(XapianValuePostingSource,set_termfreq_min);
static PHP_METHOD(XapianValuePostingSource,set_termfreq_est);
static PHP_METHOD(XapianValuePostingSource,set_termfreq_max);
PHP_METHOD(XapianValuePostingSource,__set);
PHP_METHOD(XapianValuePostingSource,__get);
PHP_METHOD(XapianValuePostingSource,__isset);
static PHP_METHOD(XapianValueWeightPostingSource,__construct);
static PHP_METHOD(XapianValueWeightPostingSource,get_weight);
static PHP_METHOD(XapianValueWeightPostingSource,name);
static PHP_METHOD(XapianValueWeightPostingSource,init);
static PHP_METHOD(XapianValueWeightPostingSource,get_description);
PHP_METHOD(XapianValueWeightPostingSource,__set);
PHP_METHOD(XapianValueWeightPostingSource,__get);
PHP_METHOD(XapianValueWeightPostingSource,__isset);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,__construct);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,get_weight);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,name);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,init);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,next);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,skip_to);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,check);
static PHP_METHOD(XapianDecreasingValueWeightPostingSource,get_description);
PHP_METHOD(XapianDecreasingValueWeightPostingSource,__set);
PHP_METHOD(XapianDecreasingValueWeightPostingSource,__get);
PHP_METHOD(XapianDecreasingValueWeightPostingSource,__isset);
static PHP_METHOD(XapianValueMapPostingSource,__construct);
static PHP_METHOD(XapianValueMapPostingSource,add_mapping);
static PHP_METHOD(XapianValueMapPostingSource,clear_mappings);
static PHP_METHOD(XapianValueMapPostingSource,set_default_weight);
static PHP_METHOD(XapianValueMapPostingSource,get_weight);
static PHP_METHOD(XapianValueMapPostingSource,name);
static PHP_METHOD(XapianValueMapPostingSource,init);
static PHP_METHOD(XapianValueMapPostingSource,get_description);
PHP_METHOD(XapianValueMapPostingSource,__set);
PHP_METHOD(XapianValueMapPostingSource,__get);
PHP_METHOD(XapianValueMapPostingSource,__isset);
static PHP_METHOD(XapianFixedWeightPostingSource,__construct);
static PHP_METHOD(XapianFixedWeightPostingSource,get_termfreq_min);
static PHP_METHOD(XapianFixedWeightPostingSource,get_termfreq_est);
static PHP_METHOD(XapianFixedWeightPostingSource,get_termfreq_max);
static PHP_METHOD(XapianFixedWeightPostingSource,get_weight);
static PHP_METHOD(XapianFixedWeightPostingSource,next);
static PHP_METHOD(XapianFixedWeightPostingSource,skip_to);
static PHP_METHOD(XapianFixedWeightPostingSource,check);
static PHP_METHOD(XapianFixedWeightPostingSource,at_end);
static PHP_METHOD(XapianFixedWeightPostingSource,get_docid);
static PHP_METHOD(XapianFixedWeightPostingSource,name);
static PHP_METHOD(XapianFixedWeightPostingSource,init);
static PHP_METHOD(XapianFixedWeightPostingSource,get_description);
PHP_METHOD(XapianFixedWeightPostingSource,__set);
PHP_METHOD(XapianFixedWeightPostingSource,__get);
PHP_METHOD(XapianFixedWeightPostingSource,__isset);
static PHP_METHOD(XapianMatchSpy,__construct);
static PHP_METHOD(XapianMatchSpy,apply);
static PHP_METHOD(XapianMatchSpy,name);
static PHP_METHOD(XapianMatchSpy,merge_results);
static PHP_METHOD(XapianMatchSpy,get_description);
static PHP_METHOD(XapianMatchSpy,release);
PHP_METHOD(XapianMatchSpy,__set);
PHP_METHOD(XapianMatchSpy,__get);
PHP_METHOD(XapianMatchSpy,__isset);
static PHP_METHOD(XapianValueCountMatchSpy,__construct);
static PHP_METHOD(XapianValueCountMatchSpy,get_total);
static PHP_METHOD(XapianValueCountMatchSpy,values_begin);
static PHP_METHOD(XapianValueCountMatchSpy,values_end);
static PHP_METHOD(XapianValueCountMatchSpy,top_values_begin);
static PHP_METHOD(XapianValueCountMatchSpy,top_values_end);
static PHP_METHOD(XapianValueCountMatchSpy,apply);
static PHP_METHOD(XapianValueCountMatchSpy,name);
static PHP_METHOD(XapianValueCountMatchSpy,merge_results);
static PHP_METHOD(XapianValueCountMatchSpy,get_description);
PHP_METHOD(XapianValueCountMatchSpy,__set);
PHP_METHOD(XapianValueCountMatchSpy,__get);
PHP_METHOD(XapianValueCountMatchSpy,__isset);
static PHP_FUNCTION(miles_to_metres);
static PHP_FUNCTION(metres_to_miles);
static PHP_METHOD(XapianLatLongCoord,latitude_set);
static PHP_METHOD(XapianLatLongCoord,latitude_get);
static PHP_METHOD(XapianLatLongCoord,longitude_set);
static PHP_METHOD(XapianLatLongCoord,longitude_get);
static PHP_METHOD(XapianLatLongCoord,__construct);
static PHP_METHOD(XapianLatLongCoord,unserialise);
static PHP_METHOD(XapianLatLongCoord,serialise);
static PHP_METHOD(XapianLatLongCoord,get_description);
PHP_METHOD(XapianLatLongCoord,__set);
PHP_METHOD(XapianLatLongCoord,__get);
PHP_METHOD(XapianLatLongCoord,__isset);
static PHP_METHOD(XapianLatLongCoordsIterator,__construct);
static PHP_METHOD(XapianLatLongCoordsIterator,equals);
static PHP_METHOD(XapianLatLongCoordsIterator,get_coord);
static PHP_METHOD(XapianLatLongCoordsIterator,next);
PHP_METHOD(XapianLatLongCoordsIterator,__set);
PHP_METHOD(XapianLatLongCoordsIterator,__get);
PHP_METHOD(XapianLatLongCoordsIterator,__isset);
static PHP_METHOD(XapianLatLongCoords,begin);
static PHP_METHOD(XapianLatLongCoords,end);
static PHP_METHOD(XapianLatLongCoords,size);
static PHP_METHOD(XapianLatLongCoords,is_empty);
static PHP_METHOD(XapianLatLongCoords,append);
static PHP_METHOD(XapianLatLongCoords,__construct);
static PHP_METHOD(XapianLatLongCoords,unserialise);
static PHP_METHOD(XapianLatLongCoords,serialise);
static PHP_METHOD(XapianLatLongCoords,get_description);
PHP_METHOD(XapianLatLongCoords,__set);
PHP_METHOD(XapianLatLongCoords,__get);
PHP_METHOD(XapianLatLongCoords,__isset);
static PHP_METHOD(XapianLatLongMetric,pointwise_distance);
static PHP_METHOD(XapianLatLongMetric,apply);
static PHP_METHOD(XapianLatLongMetric,name);
static PHP_METHOD(XapianLatLongMetric,__construct);
PHP_METHOD(XapianLatLongMetric,__set);
PHP_METHOD(XapianLatLongMetric,__get);
PHP_METHOD(XapianLatLongMetric,__isset);
static PHP_METHOD(XapianGreatCircleMetric,__construct);
static PHP_METHOD(XapianGreatCircleMetric,pointwise_distance);
static PHP_METHOD(XapianGreatCircleMetric,name);
PHP_METHOD(XapianGreatCircleMetric,__set);
PHP_METHOD(XapianGreatCircleMetric,__get);
PHP_METHOD(XapianGreatCircleMetric,__isset);
static PHP_METHOD(XapianLatLongDistancePostingSource,__construct);
static PHP_METHOD(XapianLatLongDistancePostingSource,next);
static PHP_METHOD(XapianLatLongDistancePostingSource,skip_to);
static PHP_METHOD(XapianLatLongDistancePostingSource,check);
static PHP_METHOD(XapianLatLongDistancePostingSource,get_weight);
static PHP_METHOD(XapianLatLongDistancePostingSource,name);
static PHP_METHOD(XapianLatLongDistancePostingSource,init);
static PHP_METHOD(XapianLatLongDistancePostingSource,get_description);
PHP_METHOD(XapianLatLongDistancePostingSource,__set);
PHP_METHOD(XapianLatLongDistancePostingSource,__get);
PHP_METHOD(XapianLatLongDistancePostingSource,__isset);
static PHP_METHOD(XapianLatLongDistanceKeyMaker,__construct);
static PHP_METHOD(XapianLatLongDistanceKeyMaker,apply);
PHP_METHOD(XapianLatLongDistanceKeyMaker,__set);
PHP_METHOD(XapianLatLongDistanceKeyMaker,__get);
PHP_METHOD(XapianLatLongDistanceKeyMaker,__isset);
static PHP_METHOD(XapianDatabase,add_database);
static PHP_METHOD(XapianDatabase,size);
static PHP_METHOD(XapianDatabase,__construct);
static PHP_METHOD(XapianDatabase,reopen);
static PHP_METHOD(XapianDatabase,close);
static PHP_METHOD(XapianDatabase,get_description);
static PHP_METHOD(XapianDatabase,postlist_begin);
static PHP_METHOD(XapianDatabase,postlist_end);
static PHP_METHOD(XapianDatabase,termlist_begin);
static PHP_METHOD(XapianDatabase,termlist_end);
static PHP_METHOD(XapianDatabase,has_positions);
static PHP_METHOD(XapianDatabase,positionlist_begin);
static PHP_METHOD(XapianDatabase,positionlist_end);
static PHP_METHOD(XapianDatabase,allterms_begin);
static PHP_METHOD(XapianDatabase,allterms_end);
static PHP_METHOD(XapianDatabase,get_doccount);
static PHP_METHOD(XapianDatabase,get_lastdocid);
static PHP_METHOD(XapianDatabase,get_avlength);
static PHP_METHOD(XapianDatabase,get_average_length);
static PHP_METHOD(XapianDatabase,get_total_length);
static PHP_METHOD(XapianDatabase,get_termfreq);
static PHP_METHOD(XapianDatabase,term_exists);
static PHP_METHOD(XapianDatabase,get_collection_freq);
static PHP_METHOD(XapianDatabase,get_value_freq);
static PHP_METHOD(XapianDatabase,get_value_lower_bound);
static PHP_METHOD(XapianDatabase,get_value_upper_bound);
static PHP_METHOD(XapianDatabase,get_doclength_lower_bound);
static PHP_METHOD(XapianDatabase,get_doclength_upper_bound);
static PHP_METHOD(XapianDatabase,get_wdf_upper_bound);
static PHP_METHOD(XapianDatabase,valuestream_begin);
static PHP_METHOD(XapianDatabase,valuestream_end);
static PHP_METHOD(XapianDatabase,get_doclength);
static PHP_METHOD(XapianDatabase,get_unique_terms);
static PHP_METHOD(XapianDatabase,keep_alive);
static PHP_METHOD(XapianDatabase,get_document);
static PHP_METHOD(XapianDatabase,get_spelling_suggestion);
static PHP_METHOD(XapianDatabase,spellings_begin);
static PHP_METHOD(XapianDatabase,spellings_end);
static PHP_METHOD(XapianDatabase,synonyms_begin);
static PHP_METHOD(XapianDatabase,synonyms_end);
static PHP_METHOD(XapianDatabase,synonym_keys_begin);
static PHP_METHOD(XapianDatabase,synonym_keys_end);
static PHP_METHOD(XapianDatabase,get_metadata);
static PHP_METHOD(XapianDatabase,metadata_keys_begin);
static PHP_METHOD(XapianDatabase,metadata_keys_end);
static PHP_METHOD(XapianDatabase,get_uuid);
static PHP_METHOD(XapianDatabase,locked);
static PHP_METHOD(XapianDatabase,get_revision);
static PHP_METHOD(XapianDatabase,check);
static PHP_METHOD(XapianDatabase,compact);
PHP_METHOD(XapianDatabase,__set);
PHP_METHOD(XapianDatabase,__get);
PHP_METHOD(XapianDatabase,__isset);
static PHP_METHOD(XapianWritableDatabase,__construct);
static PHP_METHOD(XapianWritableDatabase,add_database);
static PHP_METHOD(XapianWritableDatabase,commit);
static PHP_METHOD(XapianWritableDatabase,flush);
static PHP_METHOD(XapianWritableDatabase,begin_transaction);
static PHP_METHOD(XapianWritableDatabase,commit_transaction);
static PHP_METHOD(XapianWritableDatabase,cancel_transaction);
static PHP_METHOD(XapianWritableDatabase,add_document);
static PHP_METHOD(XapianWritableDatabase,delete_document);
static PHP_METHOD(XapianWritableDatabase,replace_document);
static PHP_METHOD(XapianWritableDatabase,add_spelling);
static PHP_METHOD(XapianWritableDatabase,remove_spelling);
static PHP_METHOD(XapianWritableDatabase,add_synonym);
static PHP_METHOD(XapianWritableDatabase,remove_synonym);
static PHP_METHOD(XapianWritableDatabase,clear_synonyms);
static PHP_METHOD(XapianWritableDatabase,set_metadata);
static PHP_METHOD(XapianWritableDatabase,get_description);
PHP_METHOD(XapianWritableDatabase,__set);
PHP_METHOD(XapianWritableDatabase,__get);
PHP_METHOD(XapianWritableDatabase,__isset);
static ZEND_NAMED_FUNCTION(_wrap_auto_open_stub);
static PHP_FUNCTION(inmemory_open);
static ZEND_NAMED_FUNCTION(_wrap_chert_open);
static ZEND_NAMED_FUNCTION(_wrap_remote_open);
static ZEND_NAMED_FUNCTION(_wrap_remote_open_writable);
static PHP_FUNCTION(BAD_VALUENO_get);
PHP_RINIT_FUNCTION(xapian);
PHP_MINIT_FUNCTION(xapian);
PHP_MINFO_FUNCTION(xapian);

#endif /* PHP_XAPIAN_H */
