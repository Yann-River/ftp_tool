#ifndef LOGDEF_B40F0C7E0BB2454C95BF4D65D78140CF
#define LOGDEF_B40F0C7E0BB2454C95BF4D65D78140CF 

namespace pf_logger
{
	enum eLogPriority
	{
		eLOGPRIO_ALL = 0,
		eLOGPRIO_FAULT = 1,
		eLOGPRIO_DEBUG = 2,
		eLOGPRIO_WARN = 3,
		eLOGPRIO_INFO = 4,
		eLOGPRIO_STATE = 5,
	};
	enum eLogType
	{
		eLOGTYPE_NOLOG = 0,
		eLOGTYPE_FILE = 1,
		eLOGTYPE_CMD = 2,
	};
	enum eLogCategory
	{
		eLOGCATEGORY_DEFAULT = 0,
		eLOGCATEGORY_FAULT = 1,
		eLOGCATEGORY_DEBUG = 2,
		eLOGCATEGORY_WARN = 3,
		eLOGCATEGORY_INFO = 4,
		eLOGCATEGORY_STATE = 5,
	};
	typedef struct _tagLogConfig
	{
		unsigned short usLogType;
		unsigned short usLogPriority;
		char szLogPath[256];
		_tagLogConfig()
		{
			usLogType = (unsigned short)eLOGTYPE_NOLOG;
			usLogPriority = (unsigned short)eLOGPRIO_ALL;
			szLogPath[0] = '\0';
		}
	} LogConfig;
}

#endif 