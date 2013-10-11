/********************************************************************
/* Copyright (c) 2013 The BOLT UIEngine. All rights reserved.
/* Use of this source code is governed by a BOLT license that can be
/* found in the LICENSE file.
********************************************************************/ 

#ifndef __SVGOBJECTPARSER_H__
#define __SVGOBJECTPARSER_H__

#include "./SvgObject.h"

class SVGObjectParser
	: public ExtObjParserImpl<SVGObject>
{
public:
	SVGObjectParser(void);
	virtual ~SVGObjectParser(void);

private:

	// ExtObjParserImpl
	virtual bool ParserAttribute(SVGObject* lpObj, const char* key, const char* value);
};

#endif // __SVGOBJECTPARSER_H__