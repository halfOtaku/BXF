/********************************************************************
/* Copyright (c) 2013 The BOLT UIEngine. All rights reserved.
/* Use of this source code is governed by a BOLT license that can be
/* found in the LICENSE file.
********************************************************************/ 
#include "stdafx.h"
#include "./SvgObjectRegister.h"
#include "./SvgObject.h"
#include "./SvgObjectCreator.h"
#include "./SvgObjectParser.h"
#include "./LuaSvgObject.h"

BOOL SvgObjectRegister::RegisterSvgObject()
{
	unsigned long attribute = ExtObjAttribute_clipsens;

	return ExtObjRegisterHelper<ExtObjType_renderableObj, SvgObject, SvgObjectCreator, 
		SvgObjectParser, LuaSvgObject>::Register(EXTCLASSNAME_SVGOBJECT, attribute);
}