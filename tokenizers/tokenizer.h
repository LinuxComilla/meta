/**
 * @file tokenizer.h
 */

#ifndef _TOKENIZER_H_
#define _TOKENIZER_H_

#include <unordered_map>
#include "index/document.h"
#include "parse_tree.h"

using std::unordered_map;

/**
 * An abstract class that produces tokens.
 */
class Tokenizer
{
    public:
        /**
         *
         */
        virtual void tokenize(const string & filename, Document & document, unordered_map<TermID, unsigned int>* docFreq) = 0;
};

#endif
