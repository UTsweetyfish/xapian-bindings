/** @file
 * @brief Custom Python exception handling.
 */
/* Warning: This file is generated by ./generate-python-exceptions
 * - do not modify directly!
 *
 * Copyright (C) 2003,2004,2006,2007,2008,2009,2012 Olly Betts
 * Copyright (C) 2007 Lemur Consulting Ltd
 * Copyright (C) 2007 Richard Boulton
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

namespace Xapian {

%exceptionclass Error;
%ignore Error::get_description;
%extend Error {
    std::string __str__() const {
	std::string desc($self->get_msg());
	if (!$self->get_context().empty()) {
	    desc += " (context: ";
	    desc += $self->get_context();
	    desc += ')';
	}
	if ($self->get_error_string()) {
	    desc += " (";
	    desc += $self->get_error_string();
	    desc += ')';
	}
	return desc;
    }
}
%exceptionclass LogicError;
%exceptionclass RuntimeError;
%exceptionclass AssertionError;
%exceptionclass InvalidArgumentError;
%exceptionclass InvalidOperationError;
%exceptionclass UnimplementedError;
%exceptionclass DatabaseError;
%exceptionclass DatabaseCorruptError;
%exceptionclass DatabaseCreateError;
%exceptionclass DatabaseLockError;
%exceptionclass DatabaseModifiedError;
%exceptionclass DatabaseOpeningError;
%exceptionclass DatabaseVersionError;
%exceptionclass DocNotFoundError;
%exceptionclass FeatureUnavailableError;
%exceptionclass InternalError;
%exceptionclass NetworkError;
%exceptionclass NetworkTimeoutError;
%exceptionclass QueryParserError;
%exceptionclass SerialisationError;
%exceptionclass RangeError;
%exceptionclass WildcardError;
%exceptionclass DatabaseNotFoundError;
%exceptionclass DatabaseClosedError;
}
%ignore Xapian::Error::Error(const Error&);
%include "xapian/error.h"

%{
namespace Xapian {
SWIGEXPORT void SetPythonException() {
    try {
	throw;
    } catch (Swig::DirectorException &) {
	/* This happens if a director raised an exception.  The standard SWIG
	 * director exception handling code sets the Python error state if
	 * necessary, so we don't need to do anything. */
    } catch (const Xapian::DatabaseClosedError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseClosedError(e)),
					     SWIGTYPE_p_Xapian__DatabaseClosedError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseClosedError",
			  SWIGTYPE_p_Xapian__DatabaseClosedError);
    } catch (const Xapian::DatabaseNotFoundError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseNotFoundError(e)),
					     SWIGTYPE_p_Xapian__DatabaseNotFoundError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseNotFoundError",
			  SWIGTYPE_p_Xapian__DatabaseNotFoundError);
    } catch (const Xapian::WildcardError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::WildcardError(e)),
					     SWIGTYPE_p_Xapian__WildcardError,
					     SWIG_POINTER_OWN),
			  "Xapian::WildcardError",
			  SWIGTYPE_p_Xapian__WildcardError);
    } catch (const Xapian::RangeError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::RangeError(e)),
					     SWIGTYPE_p_Xapian__RangeError,
					     SWIG_POINTER_OWN),
			  "Xapian::RangeError",
			  SWIGTYPE_p_Xapian__RangeError);
    } catch (const Xapian::SerialisationError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::SerialisationError(e)),
					     SWIGTYPE_p_Xapian__SerialisationError,
					     SWIG_POINTER_OWN),
			  "Xapian::SerialisationError",
			  SWIGTYPE_p_Xapian__SerialisationError);
    } catch (const Xapian::QueryParserError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::QueryParserError(e)),
					     SWIGTYPE_p_Xapian__QueryParserError,
					     SWIG_POINTER_OWN),
			  "Xapian::QueryParserError",
			  SWIGTYPE_p_Xapian__QueryParserError);
    } catch (const Xapian::NetworkTimeoutError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::NetworkTimeoutError(e)),
					     SWIGTYPE_p_Xapian__NetworkTimeoutError,
					     SWIG_POINTER_OWN),
			  "Xapian::NetworkTimeoutError",
			  SWIGTYPE_p_Xapian__NetworkTimeoutError);
    } catch (const Xapian::NetworkError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::NetworkError(e)),
					     SWIGTYPE_p_Xapian__NetworkError,
					     SWIG_POINTER_OWN),
			  "Xapian::NetworkError",
			  SWIGTYPE_p_Xapian__NetworkError);
    } catch (const Xapian::InternalError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::InternalError(e)),
					     SWIGTYPE_p_Xapian__InternalError,
					     SWIG_POINTER_OWN),
			  "Xapian::InternalError",
			  SWIGTYPE_p_Xapian__InternalError);
    } catch (const Xapian::FeatureUnavailableError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::FeatureUnavailableError(e)),
					     SWIGTYPE_p_Xapian__FeatureUnavailableError,
					     SWIG_POINTER_OWN),
			  "Xapian::FeatureUnavailableError",
			  SWIGTYPE_p_Xapian__FeatureUnavailableError);
    } catch (const Xapian::DocNotFoundError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DocNotFoundError(e)),
					     SWIGTYPE_p_Xapian__DocNotFoundError,
					     SWIG_POINTER_OWN),
			  "Xapian::DocNotFoundError",
			  SWIGTYPE_p_Xapian__DocNotFoundError);
    } catch (const Xapian::DatabaseVersionError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseVersionError(e)),
					     SWIGTYPE_p_Xapian__DatabaseVersionError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseVersionError",
			  SWIGTYPE_p_Xapian__DatabaseVersionError);
    } catch (const Xapian::DatabaseOpeningError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseOpeningError(e)),
					     SWIGTYPE_p_Xapian__DatabaseOpeningError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseOpeningError",
			  SWIGTYPE_p_Xapian__DatabaseOpeningError);
    } catch (const Xapian::DatabaseModifiedError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseModifiedError(e)),
					     SWIGTYPE_p_Xapian__DatabaseModifiedError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseModifiedError",
			  SWIGTYPE_p_Xapian__DatabaseModifiedError);
    } catch (const Xapian::DatabaseLockError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseLockError(e)),
					     SWIGTYPE_p_Xapian__DatabaseLockError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseLockError",
			  SWIGTYPE_p_Xapian__DatabaseLockError);
    } catch (const Xapian::DatabaseCreateError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseCreateError(e)),
					     SWIGTYPE_p_Xapian__DatabaseCreateError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseCreateError",
			  SWIGTYPE_p_Xapian__DatabaseCreateError);
    } catch (const Xapian::DatabaseCorruptError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseCorruptError(e)),
					     SWIGTYPE_p_Xapian__DatabaseCorruptError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseCorruptError",
			  SWIGTYPE_p_Xapian__DatabaseCorruptError);
    } catch (const Xapian::DatabaseError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::DatabaseError(e)),
					     SWIGTYPE_p_Xapian__DatabaseError,
					     SWIG_POINTER_OWN),
			  "Xapian::DatabaseError",
			  SWIGTYPE_p_Xapian__DatabaseError);
    } catch (const Xapian::UnimplementedError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::UnimplementedError(e)),
					     SWIGTYPE_p_Xapian__UnimplementedError,
					     SWIG_POINTER_OWN),
			  "Xapian::UnimplementedError",
			  SWIGTYPE_p_Xapian__UnimplementedError);
    } catch (const Xapian::InvalidOperationError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::InvalidOperationError(e)),
					     SWIGTYPE_p_Xapian__InvalidOperationError,
					     SWIG_POINTER_OWN),
			  "Xapian::InvalidOperationError",
			  SWIGTYPE_p_Xapian__InvalidOperationError);
    } catch (const Xapian::InvalidArgumentError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::InvalidArgumentError(e)),
					     SWIGTYPE_p_Xapian__InvalidArgumentError,
					     SWIG_POINTER_OWN),
			  "Xapian::InvalidArgumentError",
			  SWIGTYPE_p_Xapian__InvalidArgumentError);
    } catch (const Xapian::AssertionError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::AssertionError(e)),
					     SWIGTYPE_p_Xapian__AssertionError,
					     SWIG_POINTER_OWN),
			  "Xapian::AssertionError",
			  SWIGTYPE_p_Xapian__AssertionError);
    } catch (const Xapian::RuntimeError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::RuntimeError(e)),
					     SWIGTYPE_p_Xapian__RuntimeError,
					     SWIG_POINTER_OWN),
			  "Xapian::RuntimeError",
			  SWIGTYPE_p_Xapian__RuntimeError);
    } catch (const Xapian::LogicError &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::LogicError(e)),
					     SWIGTYPE_p_Xapian__LogicError,
					     SWIG_POINTER_OWN),
			  "Xapian::LogicError",
			  SWIGTYPE_p_Xapian__LogicError);
    } catch (const Xapian::Error &e) {
	SWIG_Python_Raise(SWIG_NewPointerObj((new Xapian::Error(e)),
					     SWIGTYPE_p_Xapian__Error,
					     SWIG_POINTER_OWN),
			  "Xapian::Error",
			  SWIGTYPE_p_Xapian__Error);
    } catch (const std::exception& e) {
	SWIG_Error(SWIG_RuntimeError, e.what());
    } catch (...) {
	SWIG_Error(SWIG_UnknownError, "unknown error in Xapian");
    }
}
}
%}

/* Functions and methods which are marked as "nothrow": */
%exception Xapian::Compactor::~Compactor;
%exception Xapian::Compactor::get_constinfo_();
%exception Xapian::Database::~Database;
%exception Xapian::Database::postlist_end(const std::string &) const;
%exception Xapian::Database::termlist_end(Xapian::docid) const;
%exception Xapian::Database::positionlist_end(Xapian::docid, const std::string &) const;
%exception Xapian::Database::allterms_end(const std::string & = std::string()) const;
%exception Xapian::Database::valuestream_end(Xapian::valueno) const;
%exception Xapian::Database::spellings_end() const;
%exception Xapian::Database::synonyms_end(const std::string &) const;
%exception Xapian::Database::synonym_keys_end(const std::string & = std::string()) const;
%exception Xapian::Database::metadata_keys_end(const std::string & = std::string()) const;
%exception Xapian::WritableDatabase::~WritableDatabase;
%exception Xapian::Document::~Document;
%exception Xapian::Document::termlist_end() const;
%exception Xapian::Document::values_end() const;
%exception Xapian::RSet::~RSet;
%exception Xapian::MatchDecider::~MatchDecider;
%exception Xapian::Enquire::~Enquire;
%exception Xapian::Enquire::get_matching_terms_end(Xapian::docid  ) const;
%exception Xapian::Enquire::get_matching_terms_end(const MSetIterator & ) const;
%exception Xapian::ErrorHandler::~ErrorHandler;
%exception Xapian::ErrorHandler::ErrorHandler();
%exception Xapian::ESet::~ESet;
%exception Xapian::ESetIterator::~ESetIterator;
%exception Xapian::ESetIterator::operator==(const ESetIterator &a, const ESetIterator &b);
%exception Xapian::ESetIterator::operator!=(const ESetIterator &a, const ESetIterator &b);
%exception Xapian::ESetIterator::operator<(const ESetIterator &a, const ESetIterator &b);
%exception Xapian::ESetIterator::operator>(const ESetIterator &a, const ESetIterator &b);
%exception Xapian::ESetIterator::operator>=(const ESetIterator &a, const ESetIterator &b);
%exception Xapian::ESetIterator::operator<=(const ESetIterator &a, const ESetIterator &b);
%exception Xapian::ExpandDecider::~ExpandDecider;
%exception Xapian::ExpandDeciderAnd::~ExpandDeciderAnd;
%exception Xapian::ExpandDeciderFilterTerms::~ExpandDeciderFilterTerms;
%exception Xapian::ExpandDeciderFilterPrefix::~ExpandDeciderFilterPrefix;
%exception Xapian::ExpandDeciderFilterPrefix::miles_to_metres(double miles);
%exception Xapian::ExpandDeciderFilterPrefix::metres_to_miles(double metres);
%exception Xapian::ExpandDeciderFilterPrefix::LatLongCoord();
%exception Xapian::ExpandDeciderFilterPrefix::operator<(const LatLongCoord & other) const;
%exception Xapian::LatLongCoordsIterator::~LatLongCoordsIterator;
%exception Xapian::LatLongCoords::~LatLongCoords;
%exception Xapian::LatLongMetric::~LatLongMetric;
%exception Xapian::GreatCircleMetric::~GreatCircleMetric;
%exception Xapian::LatLongDistancePostingSource::~LatLongDistancePostingSource;
%exception Xapian::LatLongDistanceKeyMaker::~LatLongDistanceKeyMaker;
%exception Xapian::opt_intrusive_base::~opt_intrusive_base;
%exception Xapian::KeyMaker::~KeyMaker;
%exception Xapian::MultiValueKeyMaker::~MultiValueKeyMaker;
%exception Xapian::MatchSpy::~MatchSpy;
%exception Xapian::MatchSpy::MatchSpy();
%exception Xapian::ValueCountMatchSpy::~ValueCountMatchSpy;
%exception Xapian::ValueCountMatchSpy::get_total() const;
%exception Xapian::ValueCountMatchSpy::values_end() const;
%exception Xapian::ValueCountMatchSpy::top_values_end(size_t) const;
%exception Xapian::MSet::~MSet;
%exception Xapian::MSetIterator::~MSetIterator;
%exception Xapian::MSetIterator::operator==(const MSetIterator &a, const MSetIterator &b);
%exception Xapian::MSetIterator::operator!=(const MSetIterator &a, const MSetIterator &b);
%exception Xapian::MSetIterator::operator<(const MSetIterator &a, const MSetIterator &b);
%exception Xapian::MSetIterator::operator>(const MSetIterator &a, const MSetIterator &b);
%exception Xapian::MSetIterator::operator>=(const MSetIterator &a, const MSetIterator &b);
%exception Xapian::MSetIterator::operator<=(const MSetIterator &a, const MSetIterator &b);
%exception Xapian::PositionIterator::~PositionIterator;
%exception Xapian::PositionIterator::PositionIterator();
%exception Xapian::PositionIterator::operator==(const PositionIterator &a, const PositionIterator &b);
%exception Xapian::PositionIterator::operator!=(const PositionIterator &a, const PositionIterator &b);
%exception Xapian::PostingIterator::~PostingIterator;
%exception Xapian::PostingIterator::PostingIterator();
%exception Xapian::PostingIterator::positionlist_end() const;
%exception Xapian::PostingIterator::operator==(const PostingIterator &a, const PostingIterator &b);
%exception Xapian::PostingIterator::operator!=(const PostingIterator &a, const PostingIterator &b);
%exception Xapian::PostingSource::~PostingSource;
%exception Xapian::PostingSource::PostingSource();
%exception Xapian::PostingSource::get_maxweight() const;
%exception Xapian::ValuePostingSource::~ValuePostingSource;
%exception Xapian::ValueWeightPostingSource::~ValueWeightPostingSource;
%exception Xapian::DecreasingValueWeightPostingSource::~DecreasingValueWeightPostingSource;
%exception Xapian::ValueMapPostingSource::~ValueMapPostingSource;
%exception Xapian::FixedWeightPostingSource::~FixedWeightPostingSource;
%exception Xapian::Query::~Query;
%exception Xapian::Query::Query();
%exception Xapian::Query::get_terms_end() const;
%exception Xapian::Query::get_unique_terms_end() const;
%exception Xapian::Query::get_length() const;
%exception Xapian::Query::empty() const;
%exception Xapian::Query::get_type() const;
%exception Xapian::Query::get_num_subqueries() const;
%exception Xapian::Query::Internal();
%exception Xapian::Query::get_length() const;
%exception Xapian::Query::get_type() const;
%exception Xapian::Query::get_num_subqueries() const;
%exception Xapian::Stopper::~Stopper;
%exception Xapian::SimpleStopper::~SimpleStopper;
%exception Xapian::RangeProcessor::~RangeProcessor;
%exception Xapian::DateRangeProcessor::~DateRangeProcessor;
%exception Xapian::NumberRangeProcessor::~NumberRangeProcessor;
%exception Xapian::ValueRangeProcessor::~ValueRangeProcessor;
%exception Xapian::FieldProcessor::~FieldProcessor;
%exception Xapian::QueryParser::~QueryParser;
%exception Xapian::QueryParser::stoplist_end() const;
%exception Xapian::QueryParser::unstem_end(const std::string &) const;
%exception Xapian::QueryParser::sortable_serialise_(double value, char * buf);
%exception Xapian::QueryParser::sortable_unserialise(const std::string & serialised);
%exception Xapian::Registry::~Registry;
%exception Xapian::StemImplementation::~StemImplementation;
%exception Xapian::Stem::~Stem;
%exception Xapian::TermGenerator::~TermGenerator;
%exception Xapian::TermIterator::~TermIterator;
%exception Xapian::TermIterator::TermIterator();
%exception Xapian::TermIterator::positionlist_end() const;
%exception Xapian::TermIterator::operator==(const TermIterator &a, const TermIterator &b);
%exception Xapian::TermIterator::operator!=(const TermIterator &a, const TermIterator &b);
%exception Xapian::Utf8Iterator::~Utf8Iterator;
%exception Xapian::Utf8Iterator::calculate_sequence_length() const;
%exception Xapian::Utf8Iterator::Utf8Iterator();
%exception Xapian::Utf8Iterator::operator*() const;
%exception Xapian::Utf8Iterator::strict_deref() const;
%exception Xapian::Utf8Iterator::operator==(const Utf8Iterator& other) const;
%exception Xapian::Utf8Iterator::operator!=(const Utf8Iterator& other) const;
%exception Xapian::Utf8Iterator::get_character_info(unsigned ch);
%exception Xapian::ValueIterator::~ValueIterator;
%exception Xapian::ValueIterator::ValueIterator();
%exception Xapian::ValueIterator::operator==(const ValueIterator &a, const ValueIterator &b);
%exception Xapian::ValueIterator::operator!=(const ValueIterator &a, const ValueIterator &b);
%exception Xapian::ValueSetMatchDecider::~ValueSetMatchDecider;
%exception Xapian::Weight::~Weight;
%exception Xapian::BoolWeight::~BoolWeight;
%exception Xapian::TfIdfWeight::~TfIdfWeight;
%exception Xapian::BM25Weight::~BM25Weight;
%exception Xapian::BM25PlusWeight::~BM25PlusWeight;
%exception Xapian::TradWeight::~TradWeight;
%exception Xapian::InL2Weight::~InL2Weight;
%exception Xapian::IfB2Weight::~IfB2Weight;
%exception Xapian::IneB2Weight::~IneB2Weight;
%exception Xapian::BB2Weight::~BB2Weight;
%exception Xapian::DLHWeight::~DLHWeight;
%exception Xapian::PL2Weight::~PL2Weight;
%exception Xapian::PL2PlusWeight::~PL2PlusWeight;
%exception Xapian::DPHWeight::~DPHWeight;
%exception Xapian::LMWeight::~LMWeight;
%exception Xapian::CoordWeight::~CoordWeight;

%exception {
    try {
	$action
    } catch (...) {
	Xapian::SetPythonException();
	SWIG_fail;
    }
}

/* If a Python error is raised by a call to a director function, the following
 * code should cause a C++ exception to be thrown.
 */
%feature("director:except") {
    if ($error != NULL) {
	throw Swig::DirectorMethodException();
    }
}

/* vim:syntax=cpp:set noexpandtab: */
