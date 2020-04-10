#ifndef PFLOG_C568B986190A4DFAA601440FFD1A68B8
#define PFLOG_C568B986190A4DFAA601440FFD1A68B8 

#include <Windows.h>
#include "logDef.hh"

extern "C"
{
#ifndef PFLOG_API
#define PFLOG_API extern "C" __declspec(dllexport)
#endif 
};

unsigned long long __stdcall LOG_Init();
int __stdcall LOG_SetConfig(unsigned long long, pf_logger::LogConfig);
int __stdcall LOG_GetConfig(unsigned long long, pf_logger::LogConfig *);
int __stdcall LOG_Log(unsigned long long, const char * log, unsigned short usCategory, unsigned short usType);
void __stdcall LOG_Release(unsigned long long);

#endif 