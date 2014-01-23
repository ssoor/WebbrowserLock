// x3c - C++ PluginFramework
#include <UtilFunc/PluginInc.h>
#include <Module/XModuleMacro.h>
#include <Module/XModuleImpl.h>

#include "ClsID_Internal.h"
#include "Cx_ConfigFactory.h"
#include "Cx_CfgDatabase.h"
#include "Cx_CfgDbSection.h"

XBEGIN_DEFINE_MODULE()
    XDEFINE_CLASSMAP_ENTRY_Singleton(x3::CLSID_ConfigDBFactory, Cx_ConfigFactory)
	XDEFINE_CLASSMAP_ENTRY(x3::CLSID_CfgDatabase, Cx_CfgDatabase)
	XDEFINE_CLASSMAP_ENTRY(CLSID_NullObject, Cx_CfgDbSection)
XEND_DEFINE_MODULE_MFCDLL()
