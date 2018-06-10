#ifndef _RPC_CONFIG_H_INCLUDED
#define _RPC_CONFIG_H_INCLUDED

#define _USE_TEXT_ARCHIVE
//#define _USE_XML_ARCHIVE
#define _USE_BINARY_ARCHIVE
#define _USE_SERIALIZATION_STRING
#define _USE_SERIALIZATION_VECTOR
#define _USE_SERIALIZATION_LIST
//#define _USE_SERIALIZATION_MAP
//#define _USE_SERIALIZATION_SHARE_PTR

#ifdef _WIN32
#define _USE_MEMORY_POOL
#endif   //#ifdef _WIN32

#endif //_RPC_CONFIG_H_INCLUDED
