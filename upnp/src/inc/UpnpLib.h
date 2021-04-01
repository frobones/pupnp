#ifndef UPNPLIB_H
#define UPNPLIB_H

/*!
 * \file
 *
 * \brief Header file for UpnpLib methods.
 *
 * Do not edit this file, it is automatically generated.
 * Please look at generator.c.
 *
 * \author Marcelo Roberto Jimenez
 */

/*!
 * UpnpLib
 */
typedef struct s_UpnpLib UpnpLib;

#include "ThreadPool.h"
#include "TimerThread.h"
#include "UpnpGlobal.h" /* for EXPORT_SPEC */
#include "UpnpString.h"
#include "VirtualDir.h"
#include "document_type.h"
#include "handle_table.h"
#include "ithread.h"
#include "membuffer.h"
#include "upnpapi.h"
#include "xml_alias.h"

#include <stdlib.h> /* for size_t */
#ifdef UPNP_ENABLE_OPEN_SSL
#include <openssl/ssl.h>
#endif
#include "UpnpLog.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*! Constructor */
EXPORT_SPEC UpnpLib *UpnpLib_new();
/*! Destructor */
EXPORT_SPEC void UpnpLib_delete(UpnpLib *p);
/*! Copy Constructor */
EXPORT_SPEC UpnpLib *UpnpLib_dup(const UpnpLib *p);
/*! Assignment operator */
EXPORT_SPEC int UpnpLib_assign(UpnpLib *p, const UpnpLib *q);

/*! UpnpLib_get_virtualDirCallback */
EXPORT_SPEC const struct VirtualDirCallbacks *UpnpLib_get_virtualDirCallback(
        const UpnpLib *p);
/*! UpnpLib_getnc_virtualDirCallback */
EXPORT_SPEC struct VirtualDirCallbacks *UpnpLib_getnc_virtualDirCallback(
        UpnpLib *p);
/*! UpnpLib_get_virtualDirCallback */
EXPORT_SPEC int UpnpLib_set_virtualDirCallback(
        UpnpLib *p, const struct VirtualDirCallbacks *buf);
/*! UpnpLib_get_virtualDirCallback */
EXPORT_SPEC void UpnpLib_clear_virtualDirCallback(UpnpLib *p);

/*! UpnpLib_get_pVirtualDirList */
EXPORT_SPEC virtualDirList *UpnpLib_get_pVirtualDirList(const UpnpLib *p);
/*! UpnpLib_set_pVirtualDirList */
EXPORT_SPEC int UpnpLib_set_pVirtualDirList(UpnpLib *p, virtualDirList *n);

/*! UpnpLib_get_GlobalClientSubscribeMutex */
EXPORT_SPEC const ithread_mutex_t *UpnpLib_get_GlobalClientSubscribeMutex(
        const UpnpLib *p);
/*! UpnpLib_getnc_GlobalClientSubscribeMutex */
EXPORT_SPEC ithread_mutex_t *UpnpLib_getnc_GlobalClientSubscribeMutex(
        UpnpLib *p);
/*! UpnpLib_get_GlobalClientSubscribeMutex */
EXPORT_SPEC int UpnpLib_set_GlobalClientSubscribeMutex(
        UpnpLib *p, const ithread_mutex_t *buf);
/*! UpnpLib_get_GlobalClientSubscribeMutex */
EXPORT_SPEC void UpnpLib_clear_GlobalClientSubscribeMutex(UpnpLib *p);

/*! UpnpLib_get_GlobalHndRWLock */
EXPORT_SPEC const ithread_rwlock_t *UpnpLib_get_GlobalHndRWLock(
        const UpnpLib *p);
/*! UpnpLib_getnc_GlobalHndRWLock */
EXPORT_SPEC ithread_rwlock_t *UpnpLib_getnc_GlobalHndRWLock(UpnpLib *p);
/*! UpnpLib_get_GlobalHndRWLock */
EXPORT_SPEC int UpnpLib_set_GlobalHndRWLock(
        UpnpLib *p, const ithread_rwlock_t *buf);
/*! UpnpLib_get_GlobalHndRWLock */
EXPORT_SPEC void UpnpLib_clear_GlobalHndRWLock(UpnpLib *p);

/*! UpnpLib_get_gUUIDMutex */
EXPORT_SPEC const ithread_mutex_t *UpnpLib_get_gUUIDMutex(const UpnpLib *p);
/*! UpnpLib_getnc_gUUIDMutex */
EXPORT_SPEC ithread_mutex_t *UpnpLib_getnc_gUUIDMutex(UpnpLib *p);
/*! UpnpLib_get_gUUIDMutex */
EXPORT_SPEC int UpnpLib_set_gUUIDMutex(UpnpLib *p, const ithread_mutex_t *buf);
/*! UpnpLib_get_gUUIDMutex */
EXPORT_SPEC void UpnpLib_clear_gUUIDMutex(UpnpLib *p);

/*! UpnpLib_get_gSDKInitMutex */
EXPORT_SPEC const ithread_mutex_t *UpnpLib_get_gSDKInitMutex(const UpnpLib *p);
/*! UpnpLib_getnc_gSDKInitMutex */
EXPORT_SPEC ithread_mutex_t *UpnpLib_getnc_gSDKInitMutex(UpnpLib *p);
/*! UpnpLib_get_gSDKInitMutex */
EXPORT_SPEC int UpnpLib_set_gSDKInitMutex(
        UpnpLib *p, const ithread_mutex_t *buf);
/*! UpnpLib_get_gSDKInitMutex */
EXPORT_SPEC void UpnpLib_clear_gSDKInitMutex(UpnpLib *p);

/*! UpnpLib_get_gTimerThread */
EXPORT_SPEC const TimerThread *UpnpLib_get_gTimerThread(const UpnpLib *p);
/*! UpnpLib_getnc_gTimerThread */
EXPORT_SPEC TimerThread *UpnpLib_getnc_gTimerThread(UpnpLib *p);
/*! UpnpLib_get_gTimerThread */
EXPORT_SPEC int UpnpLib_set_gTimerThread(UpnpLib *p, const TimerThread *buf);
/*! UpnpLib_get_gTimerThread */
EXPORT_SPEC void UpnpLib_clear_gTimerThread(UpnpLib *p);

/*! UpnpLib_get_gSendThreadPool */
EXPORT_SPEC const ThreadPool *UpnpLib_get_gSendThreadPool(const UpnpLib *p);
/*! UpnpLib_getnc_gSendThreadPool */
EXPORT_SPEC ThreadPool *UpnpLib_getnc_gSendThreadPool(UpnpLib *p);
/*! UpnpLib_get_gSendThreadPool */
EXPORT_SPEC int UpnpLib_set_gSendThreadPool(UpnpLib *p, const ThreadPool *buf);
/*! UpnpLib_get_gSendThreadPool */
EXPORT_SPEC void UpnpLib_clear_gSendThreadPool(UpnpLib *p);

/*! UpnpLib_get_gRecvThreadPool */
EXPORT_SPEC const ThreadPool *UpnpLib_get_gRecvThreadPool(const UpnpLib *p);
/*! UpnpLib_getnc_gRecvThreadPool */
EXPORT_SPEC ThreadPool *UpnpLib_getnc_gRecvThreadPool(UpnpLib *p);
/*! UpnpLib_get_gRecvThreadPool */
EXPORT_SPEC int UpnpLib_set_gRecvThreadPool(UpnpLib *p, const ThreadPool *buf);
/*! UpnpLib_get_gRecvThreadPool */
EXPORT_SPEC void UpnpLib_clear_gRecvThreadPool(UpnpLib *p);

/*! UpnpLib_get_gMiniServerThreadPool */
EXPORT_SPEC const ThreadPool *UpnpLib_get_gMiniServerThreadPool(
        const UpnpLib *p);
/*! UpnpLib_getnc_gMiniServerThreadPool */
EXPORT_SPEC ThreadPool *UpnpLib_getnc_gMiniServerThreadPool(UpnpLib *p);
/*! UpnpLib_get_gMiniServerThreadPool */
EXPORT_SPEC int UpnpLib_set_gMiniServerThreadPool(
        UpnpLib *p, const ThreadPool *buf);
/*! UpnpLib_get_gMiniServerThreadPool */
EXPORT_SPEC void UpnpLib_clear_gMiniServerThreadPool(UpnpLib *p);

/*! UpnpLib_get_bWebServerState */
EXPORT_SPEC WebServerState UpnpLib_get_bWebServerState(const UpnpLib *p);
/*! UpnpLib_set_bWebServerState */
EXPORT_SPEC int UpnpLib_set_bWebServerState(UpnpLib *p, WebServerState n);

/*! UpnpLib_get_gIF_NAME */
EXPORT_SPEC const UpnpString *UpnpLib_get_gIF_NAME(const UpnpLib *p);
/*! UpnpLib_set_gIF_NAME */
EXPORT_SPEC int UpnpLib_set_gIF_NAME(UpnpLib *p, const UpnpString *s);
/*! UpnpLib_get_gIF_NAME_Length */
EXPORT_SPEC size_t UpnpLib_get_gIF_NAME_Length(const UpnpLib *p);
/*! UpnpLib_get_gIF_NAME_cstr */
EXPORT_SPEC const char *UpnpLib_get_gIF_NAME_cstr(const UpnpLib *p);
/*! UpnpLib_strcpy_gIF_NAME */
EXPORT_SPEC int UpnpLib_strcpy_gIF_NAME(UpnpLib *p, const char *s);
/*! UpnpLib_strncpy_gIF_NAME */
EXPORT_SPEC int UpnpLib_strncpy_gIF_NAME(UpnpLib *p, const char *s, size_t n);
/*! UpnpLib_clear_gIF_NAME */
EXPORT_SPEC void UpnpLib_clear_gIF_NAME(UpnpLib *p);

/*! UpnpLib_get_gIF_IPV4 */
EXPORT_SPEC const UpnpString *UpnpLib_get_gIF_IPV4(const UpnpLib *p);
/*! UpnpLib_set_gIF_IPV4 */
EXPORT_SPEC int UpnpLib_set_gIF_IPV4(UpnpLib *p, const UpnpString *s);
/*! UpnpLib_get_gIF_IPV4_Length */
EXPORT_SPEC size_t UpnpLib_get_gIF_IPV4_Length(const UpnpLib *p);
/*! UpnpLib_get_gIF_IPV4_cstr */
EXPORT_SPEC const char *UpnpLib_get_gIF_IPV4_cstr(const UpnpLib *p);
/*! UpnpLib_strcpy_gIF_IPV4 */
EXPORT_SPEC int UpnpLib_strcpy_gIF_IPV4(UpnpLib *p, const char *s);
/*! UpnpLib_strncpy_gIF_IPV4 */
EXPORT_SPEC int UpnpLib_strncpy_gIF_IPV4(UpnpLib *p, const char *s, size_t n);
/*! UpnpLib_clear_gIF_IPV4 */
EXPORT_SPEC void UpnpLib_clear_gIF_IPV4(UpnpLib *p);

/*! UpnpLib_get_gIF_IPV4_NETMASK */
EXPORT_SPEC const UpnpString *UpnpLib_get_gIF_IPV4_NETMASK(const UpnpLib *p);
/*! UpnpLib_set_gIF_IPV4_NETMASK */
EXPORT_SPEC int UpnpLib_set_gIF_IPV4_NETMASK(UpnpLib *p, const UpnpString *s);
/*! UpnpLib_get_gIF_IPV4_NETMASK_Length */
EXPORT_SPEC size_t UpnpLib_get_gIF_IPV4_NETMASK_Length(const UpnpLib *p);
/*! UpnpLib_get_gIF_IPV4_NETMASK_cstr */
EXPORT_SPEC const char *UpnpLib_get_gIF_IPV4_NETMASK_cstr(const UpnpLib *p);
/*! UpnpLib_strcpy_gIF_IPV4_NETMASK */
EXPORT_SPEC int UpnpLib_strcpy_gIF_IPV4_NETMASK(UpnpLib *p, const char *s);
/*! UpnpLib_strncpy_gIF_IPV4_NETMASK */
EXPORT_SPEC int UpnpLib_strncpy_gIF_IPV4_NETMASK(
        UpnpLib *p, const char *s, size_t n);
/*! UpnpLib_clear_gIF_IPV4_NETMASK */
EXPORT_SPEC void UpnpLib_clear_gIF_IPV4_NETMASK(UpnpLib *p);

/*! UpnpLib_get_gIF_IPV6 */
EXPORT_SPEC const UpnpString *UpnpLib_get_gIF_IPV6(const UpnpLib *p);
/*! UpnpLib_set_gIF_IPV6 */
EXPORT_SPEC int UpnpLib_set_gIF_IPV6(UpnpLib *p, const UpnpString *s);
/*! UpnpLib_get_gIF_IPV6_Length */
EXPORT_SPEC size_t UpnpLib_get_gIF_IPV6_Length(const UpnpLib *p);
/*! UpnpLib_get_gIF_IPV6_cstr */
EXPORT_SPEC const char *UpnpLib_get_gIF_IPV6_cstr(const UpnpLib *p);
/*! UpnpLib_strcpy_gIF_IPV6 */
EXPORT_SPEC int UpnpLib_strcpy_gIF_IPV6(UpnpLib *p, const char *s);
/*! UpnpLib_strncpy_gIF_IPV6 */
EXPORT_SPEC int UpnpLib_strncpy_gIF_IPV6(UpnpLib *p, const char *s, size_t n);
/*! UpnpLib_clear_gIF_IPV6 */
EXPORT_SPEC void UpnpLib_clear_gIF_IPV6(UpnpLib *p);

/*! UpnpLib_get_gIF_IPV6_PREFIX_LENGTH */
EXPORT_SPEC unsigned UpnpLib_get_gIF_IPV6_PREFIX_LENGTH(const UpnpLib *p);
/*! UpnpLib_set_gIF_IPV6_PREFIX_LENGTH */
EXPORT_SPEC int UpnpLib_set_gIF_IPV6_PREFIX_LENGTH(UpnpLib *p, unsigned n);

/*! UpnpLib_get_gIF_IPV6_ULA_GUA */
EXPORT_SPEC const UpnpString *UpnpLib_get_gIF_IPV6_ULA_GUA(const UpnpLib *p);
/*! UpnpLib_set_gIF_IPV6_ULA_GUA */
EXPORT_SPEC int UpnpLib_set_gIF_IPV6_ULA_GUA(UpnpLib *p, const UpnpString *s);
/*! UpnpLib_get_gIF_IPV6_ULA_GUA_Length */
EXPORT_SPEC size_t UpnpLib_get_gIF_IPV6_ULA_GUA_Length(const UpnpLib *p);
/*! UpnpLib_get_gIF_IPV6_ULA_GUA_cstr */
EXPORT_SPEC const char *UpnpLib_get_gIF_IPV6_ULA_GUA_cstr(const UpnpLib *p);
/*! UpnpLib_strcpy_gIF_IPV6_ULA_GUA */
EXPORT_SPEC int UpnpLib_strcpy_gIF_IPV6_ULA_GUA(UpnpLib *p, const char *s);
/*! UpnpLib_strncpy_gIF_IPV6_ULA_GUA */
EXPORT_SPEC int UpnpLib_strncpy_gIF_IPV6_ULA_GUA(
        UpnpLib *p, const char *s, size_t n);
/*! UpnpLib_clear_gIF_IPV6_ULA_GUA */
EXPORT_SPEC void UpnpLib_clear_gIF_IPV6_ULA_GUA(UpnpLib *p);

/*! UpnpLib_get_gIF_IPV6_ULA_GUA_PREFIX_LENGTH */
EXPORT_SPEC unsigned UpnpLib_get_gIF_IPV6_ULA_GUA_PREFIX_LENGTH(
        const UpnpLib *p);
/*! UpnpLib_set_gIF_IPV6_ULA_GUA_PREFIX_LENGTH */
EXPORT_SPEC int UpnpLib_set_gIF_IPV6_ULA_GUA_PREFIX_LENGTH(
        UpnpLib *p, unsigned n);

/*! UpnpLib_get_gIF_INDEX */
EXPORT_SPEC unsigned UpnpLib_get_gIF_INDEX(const UpnpLib *p);
/*! UpnpLib_set_gIF_INDEX */
EXPORT_SPEC int UpnpLib_set_gIF_INDEX(UpnpLib *p, unsigned n);

/*! UpnpLib_get_LOCAL_PORT_V4 */
EXPORT_SPEC unsigned short UpnpLib_get_LOCAL_PORT_V4(const UpnpLib *p);
/*! UpnpLib_set_LOCAL_PORT_V4 */
EXPORT_SPEC int UpnpLib_set_LOCAL_PORT_V4(UpnpLib *p, unsigned short n);

/*! UpnpLib_get_LOCAL_PORT_V6 */
EXPORT_SPEC unsigned short UpnpLib_get_LOCAL_PORT_V6(const UpnpLib *p);
/*! UpnpLib_set_LOCAL_PORT_V6 */
EXPORT_SPEC int UpnpLib_set_LOCAL_PORT_V6(UpnpLib *p, unsigned short n);

/*! UpnpLib_get_LOCAL_PORT_V6_ULA_GUA */
EXPORT_SPEC unsigned short UpnpLib_get_LOCAL_PORT_V6_ULA_GUA(const UpnpLib *p);
/*! UpnpLib_set_LOCAL_PORT_V6_ULA_GUA */
EXPORT_SPEC int UpnpLib_set_LOCAL_PORT_V6_ULA_GUA(UpnpLib *p, unsigned short n);

/*! UpnpLib_get_HandleTable */
EXPORT_SPEC const handle_table_t *UpnpLib_get_HandleTable(const UpnpLib *p);
/*! UpnpLib_getnc_HandleTable */
EXPORT_SPEC handle_table_t *UpnpLib_getnc_HandleTable(UpnpLib *p);
/*! UpnpLib_get_HandleTable */
EXPORT_SPEC int UpnpLib_set_HandleTable(UpnpLib *p, const handle_table_t *buf);
/*! UpnpLib_get_HandleTable */
EXPORT_SPEC void UpnpLib_clear_HandleTable(UpnpLib *p);

/*! UpnpLib_get_gMediaTypeArray */
EXPORT_SPEC const doc_type_array_t *UpnpLib_get_gMediaTypeArray(
        const UpnpLib *p);
/*! UpnpLib_getnc_gMediaTypeArray */
EXPORT_SPEC doc_type_array_t *UpnpLib_getnc_gMediaTypeArray(UpnpLib *p);
/*! UpnpLib_get_gMediaTypeArray */
EXPORT_SPEC int UpnpLib_set_gMediaTypeArray(
        UpnpLib *p, const doc_type_array_t *buf);
/*! UpnpLib_get_gMediaTypeArray */
EXPORT_SPEC void UpnpLib_clear_gMediaTypeArray(UpnpLib *p);

/*! UpnpLib_get_gAliasDoc */
EXPORT_SPEC const xml_alias_t *UpnpLib_get_gAliasDoc(const UpnpLib *p);
/*! UpnpLib_getnc_gAliasDoc */
EXPORT_SPEC xml_alias_t *UpnpLib_getnc_gAliasDoc(UpnpLib *p);
/*! UpnpLib_get_gAliasDoc */
EXPORT_SPEC int UpnpLib_set_gAliasDoc(UpnpLib *p, const xml_alias_t *buf);
/*! UpnpLib_get_gAliasDoc */
EXPORT_SPEC void UpnpLib_clear_gAliasDoc(UpnpLib *p);

/*! UpnpLib_get_gWebMutex */
EXPORT_SPEC const ithread_mutex_t *UpnpLib_get_gWebMutex(const UpnpLib *p);
/*! UpnpLib_getnc_gWebMutex */
EXPORT_SPEC ithread_mutex_t *UpnpLib_getnc_gWebMutex(UpnpLib *p);
/*! UpnpLib_get_gWebMutex */
EXPORT_SPEC int UpnpLib_set_gWebMutex(UpnpLib *p, const ithread_mutex_t *buf);
/*! UpnpLib_get_gWebMutex */
EXPORT_SPEC void UpnpLib_clear_gWebMutex(UpnpLib *p);

/*! UpnpLib_get_gDocumentRootDir */
EXPORT_SPEC const membuffer *UpnpLib_get_gDocumentRootDir(const UpnpLib *p);
/*! UpnpLib_getnc_gDocumentRootDir */
EXPORT_SPEC membuffer *UpnpLib_getnc_gDocumentRootDir(UpnpLib *p);
/*! UpnpLib_get_gDocumentRootDir */
EXPORT_SPEC int UpnpLib_set_gDocumentRootDir(UpnpLib *p, const membuffer *buf);
/*! UpnpLib_get_gDocumentRootDir */
EXPORT_SPEC void UpnpLib_clear_gDocumentRootDir(UpnpLib *p);

/*! UpnpLib_get_g_maxContentLength */
EXPORT_SPEC size_t UpnpLib_get_g_maxContentLength(const UpnpLib *p);
/*! UpnpLib_set_g_maxContentLength */
EXPORT_SPEC int UpnpLib_set_g_maxContentLength(UpnpLib *p, size_t n);

/*! UpnpLib_get_g_UpnpSdkEQMaxLen */
EXPORT_SPEC int UpnpLib_get_g_UpnpSdkEQMaxLen(const UpnpLib *p);
/*! UpnpLib_set_g_UpnpSdkEQMaxLen */
EXPORT_SPEC int UpnpLib_set_g_UpnpSdkEQMaxLen(UpnpLib *p, int n);

/*! UpnpLib_get_g_UpnpSdkEQMaxAge */
EXPORT_SPEC int UpnpLib_get_g_UpnpSdkEQMaxAge(const UpnpLib *p);
/*! UpnpLib_set_g_UpnpSdkEQMaxAge */
EXPORT_SPEC int UpnpLib_set_g_UpnpSdkEQMaxAge(UpnpLib *p, int n);

/*! UpnpLib_get_UpnpSdkInit */
EXPORT_SPEC int UpnpLib_get_UpnpSdkInit(const UpnpLib *p);
/*! UpnpLib_set_UpnpSdkInit */
EXPORT_SPEC int UpnpLib_set_UpnpSdkInit(UpnpLib *p, int n);

/*! UpnpLib_get_UpnpSdkClientRegistered */
EXPORT_SPEC int UpnpLib_get_UpnpSdkClientRegistered(const UpnpLib *p);
/*! UpnpLib_set_UpnpSdkClientRegistered */
EXPORT_SPEC int UpnpLib_set_UpnpSdkClientRegistered(UpnpLib *p, int n);

/*! UpnpLib_get_UpnpSdkDeviceRegisteredV4 */
EXPORT_SPEC int UpnpLib_get_UpnpSdkDeviceRegisteredV4(const UpnpLib *p);
/*! UpnpLib_set_UpnpSdkDeviceRegisteredV4 */
EXPORT_SPEC int UpnpLib_set_UpnpSdkDeviceRegisteredV4(UpnpLib *p, int n);

/*! UpnpLib_get_UpnpSdkDeviceRegisteredV6 */
EXPORT_SPEC int UpnpLib_get_UpnpSdkDeviceRegisteredV6(const UpnpLib *p);
/*! UpnpLib_set_UpnpSdkDeviceRegisteredV6 */
EXPORT_SPEC int UpnpLib_set_UpnpSdkDeviceRegisteredV6(UpnpLib *p, int n);

/*! UpnpLib_get_gUpnpSdkNLSuuid */
EXPORT_SPEC const UpnpString *UpnpLib_get_gUpnpSdkNLSuuid(const UpnpLib *p);
/*! UpnpLib_set_gUpnpSdkNLSuuid */
EXPORT_SPEC int UpnpLib_set_gUpnpSdkNLSuuid(UpnpLib *p, const UpnpString *s);
/*! UpnpLib_get_gUpnpSdkNLSuuid_Length */
EXPORT_SPEC size_t UpnpLib_get_gUpnpSdkNLSuuid_Length(const UpnpLib *p);
/*! UpnpLib_get_gUpnpSdkNLSuuid_cstr */
EXPORT_SPEC const char *UpnpLib_get_gUpnpSdkNLSuuid_cstr(const UpnpLib *p);
/*! UpnpLib_strcpy_gUpnpSdkNLSuuid */
EXPORT_SPEC int UpnpLib_strcpy_gUpnpSdkNLSuuid(UpnpLib *p, const char *s);
/*! UpnpLib_strncpy_gUpnpSdkNLSuuid */
EXPORT_SPEC int UpnpLib_strncpy_gUpnpSdkNLSuuid(
        UpnpLib *p, const char *s, size_t n);
/*! UpnpLib_clear_gUpnpSdkNLSuuid */
EXPORT_SPEC void UpnpLib_clear_gUpnpSdkNLSuuid(UpnpLib *p);

#ifdef UPNP_ENABLE_OPEN_SSL
/*! UpnpLib_get_gSslCtx */
EXPORT_SPEC SSL_CTX *UpnpLib_get_gSslCtx(const UpnpLib *p);
/*! UpnpLib_set_gSslCtx */
EXPORT_SPEC int UpnpLib_set_gSslCtx(UpnpLib *p, SSL_CTX *n);

#endif
/*! UpnpLib_get_Log */
EXPORT_SPEC UpnpLog *UpnpLib_get_Log(const UpnpLib *p);
/*! UpnpLib_set_Log */
EXPORT_SPEC int UpnpLib_set_Log(UpnpLib *p, UpnpLog *n);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UPNPLIB_H */
