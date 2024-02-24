/*
business functions for the application that require the application to be initialized with the
specified configuration settings. The application should then call this function before starting the
application and initialize the scaling and translation functions. The scaling and translation functions
to be used are defined in the application configuration file.

@param scaling The scaling and translation function 
@param translation The translation function
@param application The application to be initialized

Author: Peter Pan, University of Massachusetts Institute of Computer Science,
Copyright (C) 2024 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <iostream>

using namespace std;
#ifdef _WIN32 /* windows */
#elif defined(_WIN32) /* windows */
namespace ROOT {
    // This file contains a specialised ROOT message handler to test for diagnostic in unit tests. 
namespace ROOT::ROOTMessageHandler {
    /**
     * Special implementation of ROOT::RRangeCast for TCollection, including a check that the cast 
     * target type inherits from TObject and a new constructor that takes the TCollection by pointer.
    */
   <template class TCollection> class ROOT::RRangeCast<TCollection>  : public TObject<TCollection> {
        constexpr const & operator()(const TCollection & collection) const {
            return collection.cast<TCollection>();
        }
   }
   <template class TCollections> class ROOT::RRangeCast<TCollection> : public TObject<TCollection> {
       constexpr const & operator()(const TCollection & collate) const {
            return collate.cast<TCollection>().cast<TCollection>().cast<TCollection>();
       }
   }
   // ----------------------------------------------------------------
   auto ROOT::RRangeCast<TCollection>::operator()(const TCollection & collate) const {
        return collate.cast<TCollection>().cast<TCollection>().cast<TCollection>();
   }

   <template class TCollections, TCollections::TCollection, thread_local const, thread_local const> 
   static inline void ROOT::RRangeCast<TCollection>::operator()(const TCollection & compl) const {
       constexpr auto collate = compl.cast<TCollection>();
   } 

   <template class TCollections, TCollections::TCollection, thread_local const, thread_local const>
   static inline void ROOT::RRangeCast<TCollection>::operator()(const TCollection & compl) const {
      constexpr auto collate = const_cast<TCollection*>(compl.cast<TCollection>());
   }     

}    
}
#endif /* _WIN32 */
