#include "JsonReader.h"
#include "rapidjson\reader.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>
#include "rapidjson\document.h"

using namespace rapidjson;

JsonReader::JsonReader()
{
	const char* json = "{\"version\":\"1.0.0\"}";
	Document document;
	document.Parse(json);
}

