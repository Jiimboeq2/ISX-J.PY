#pragma once
#include <stdlib.h>
#include <stdarg.h>
#include <pyconfig.h>
#ifdef _DEBUG
#undef Py_DEBUG
#endif
#include <Python.h>
#include "stackless_api.h"
#define BOOST_PYTHON_STATIC_LIB
#include <boost/python.hpp>
#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>
#include <list>
