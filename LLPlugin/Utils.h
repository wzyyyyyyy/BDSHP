#pragma once
#include "CodeDef.h"
#include <json/json.h>
#define set_content(resjson,code) Json::Value json;\
json["code"] = code;\
json["res"] = res;\
res.status = 200;\
res.set_content(json.toStyledString(), "application/json");\
