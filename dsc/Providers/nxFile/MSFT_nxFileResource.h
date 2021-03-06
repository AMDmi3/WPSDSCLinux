/*============================================================================
 * Copyright (c) Microsoft Corporation. All rights reserved. See license.txt for license information.
 *============================================================================
 */
/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_nxFileResource_h
#define _MSFT_nxFileResource_h

#include <MI.h>
#include "OMI_BaseResource.h"
#include "MSFT_nxFileResource.h"

/*
**==============================================================================
**
** MSFT_nxFileResource [MSFT_nxFileResource]
**
** Keys:
**    DestinationPath
**
**==============================================================================
*/

typedef struct _MSFT_nxFileResource /* extends OMI_BaseResource */
{
    MI_Instance __instance;
    /* OMI_BaseResource properties */
    /* MSFT_nxFileResource properties */
    /*KEY*/ MI_ConstStringField DestinationPath;
    MI_ConstStringField SourcePath;
    MI_ConstStringField Ensure;
    MI_ConstStringField Type;
    MI_ConstBooleanField Force;
    MI_ConstStringField Contents;
    MI_ConstStringField Checksum;
    MI_ConstBooleanField Recurse;
    MI_ConstStringField Links;
    MI_ConstStringField Group;
    MI_ConstStringField Mode;
    MI_ConstStringField Owner;
    MI_ConstDatetimeField ModifiedDate;
}
MSFT_nxFileResource;

typedef struct _MSFT_nxFileResource_Ref
{
    MSFT_nxFileResource* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxFileResource_Ref;

typedef struct _MSFT_nxFileResource_ConstRef
{
    MI_CONST MSFT_nxFileResource* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxFileResource_ConstRef;

typedef struct _MSFT_nxFileResource_Array
{
    struct _MSFT_nxFileResource** data;
    MI_Uint32 size;
}
MSFT_nxFileResource_Array;

typedef struct _MSFT_nxFileResource_ConstArray
{
    struct _MSFT_nxFileResource MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_nxFileResource_ConstArray;

typedef struct _MSFT_nxFileResource_ArrayRef
{
    MSFT_nxFileResource_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxFileResource_ArrayRef;

typedef struct _MSFT_nxFileResource_ConstArrayRef
{
    MSFT_nxFileResource_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_nxFileResource_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_nxFileResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Construct(
    _Out_ MSFT_nxFileResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructInstance(context, &MSFT_nxFileResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clone(
    _In_ const MSFT_nxFileResource* self,
    _Outptr_ MSFT_nxFileResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_nxFileResource_IsA(
    _In_ const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_nxFileResource_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Destruct(_Inout_ MSFT_nxFileResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Delete(_Inout_ MSFT_nxFileResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Post(
    _In_ const MSFT_nxFileResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_DestinationPath(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_DestinationPath(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_DestinationPath(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_SourcePath(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_SourcePath(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_SourcePath(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Ensure(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Ensure(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Ensure(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Type(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Type(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Type(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Force(
    _Inout_ MSFT_nxFileResource* self,
    _In_ MI_Boolean x)
{
    ((MI_BooleanField*)&self->Force)->value = x;
    ((MI_BooleanField*)&self->Force)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Force(
    _Inout_ MSFT_nxFileResource* self)
{
    memset((void*)&self->Force, 0, sizeof(self->Force));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Contents(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Contents(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Contents(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Checksum(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Checksum(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Checksum(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Recurse(
    _Inout_ MSFT_nxFileResource* self,
    _In_ MI_Boolean x)
{
    ((MI_BooleanField*)&self->Recurse)->value = x;
    ((MI_BooleanField*)&self->Recurse)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Recurse(
    _Inout_ MSFT_nxFileResource* self)
{
    memset((void*)&self->Recurse, 0, sizeof(self->Recurse));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Links(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Links(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Links(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Group(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Group(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Group(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Mode(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Mode(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Mode(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_Owner(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetPtr_Owner(
    _Inout_ MSFT_nxFileResource* self,
    _In_z_ const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        11,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_Owner(
    _Inout_ MSFT_nxFileResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        11);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Set_ModifiedDate(
    _Inout_ MSFT_nxFileResource* self,
    _In_ MI_Datetime x)
{
    ((MI_DatetimeField*)&self->ModifiedDate)->value = x;
    ((MI_DatetimeField*)&self->ModifiedDate)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_Clear_ModifiedDate(
    _Inout_ MSFT_nxFileResource* self)
{
    memset((void*)&self->ModifiedDate, 0, sizeof(self->ModifiedDate));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_nxFileResource.GetTargetResource()
**
**==============================================================================
*/

typedef struct _MSFT_nxFileResource_GetTargetResource
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MSFT_nxFileResource_ConstRef InputResource;
    /*IN*/ MI_ConstUint32Field Flags;
    /*OUT*/ MSFT_nxFileResource_ConstRef OutputResource;
}
MSFT_nxFileResource_GetTargetResource;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_nxFileResource_GetTargetResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Construct(
    _Out_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructParameters(context, &MSFT_nxFileResource_GetTargetResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Clone(
    _In_ const MSFT_nxFileResource_GetTargetResource* self,
    _Outptr_ MSFT_nxFileResource_GetTargetResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Destruct(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Delete(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Post(
    _In_ const MSFT_nxFileResource_GetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Set_MIReturn(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Clear_MIReturn(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Set_InputResource(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_SetPtr_InputResource(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Clear_InputResource(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Set_Flags(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Flags)->value = x;
    ((MI_Uint32Field*)&self->Flags)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Clear_Flags(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self)
{
    memset((void*)&self->Flags, 0, sizeof(self->Flags));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Set_OutputResource(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_SetPtr_OutputResource(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_GetTargetResource_Clear_OutputResource(
    _Inout_ MSFT_nxFileResource_GetTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_nxFileResource.TestTargetResource()
**
**==============================================================================
*/

typedef struct _MSFT_nxFileResource_TestTargetResource
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MSFT_nxFileResource_ConstRef InputResource;
    /*IN*/ MI_ConstUint32Field Flags;
    /*OUT*/ MI_ConstBooleanField Result;
    /*OUT*/ MI_ConstUint64Field ProviderContext;
}
MSFT_nxFileResource_TestTargetResource;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_nxFileResource_TestTargetResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Construct(
    _Out_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructParameters(context, &MSFT_nxFileResource_TestTargetResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Clone(
    _In_ const MSFT_nxFileResource_TestTargetResource* self,
    _Outptr_ MSFT_nxFileResource_TestTargetResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Destruct(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Delete(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Post(
    _In_ const MSFT_nxFileResource_TestTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Set_MIReturn(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Clear_MIReturn(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Set_InputResource(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_SetPtr_InputResource(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Clear_InputResource(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Set_Flags(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Flags)->value = x;
    ((MI_Uint32Field*)&self->Flags)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Clear_Flags(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    memset((void*)&self->Flags, 0, sizeof(self->Flags));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Set_Result(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ MI_Boolean x)
{
    ((MI_BooleanField*)&self->Result)->value = x;
    ((MI_BooleanField*)&self->Result)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Clear_Result(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    memset((void*)&self->Result, 0, sizeof(self->Result));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Set_ProviderContext(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self,
    _In_ MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ProviderContext)->value = x;
    ((MI_Uint64Field*)&self->ProviderContext)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_TestTargetResource_Clear_ProviderContext(
    _Inout_ MSFT_nxFileResource_TestTargetResource* self)
{
    memset((void*)&self->ProviderContext, 0, sizeof(self->ProviderContext));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_nxFileResource.SetTargetResource()
**
**==============================================================================
*/

typedef struct _MSFT_nxFileResource_SetTargetResource
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MSFT_nxFileResource_ConstRef InputResource;
    /*IN*/ MI_ConstUint64Field ProviderContext;
    /*IN*/ MI_ConstUint32Field Flags;
}
MSFT_nxFileResource_SetTargetResource;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_nxFileResource_SetTargetResource_rtti;

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Construct(
    _Out_ MSFT_nxFileResource_SetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_ConstructParameters(context, &MSFT_nxFileResource_SetTargetResource_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Clone(
    _In_ const MSFT_nxFileResource_SetTargetResource* self,
    _Outptr_ MSFT_nxFileResource_SetTargetResource** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Destruct(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Delete(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Post(
    _In_ const MSFT_nxFileResource_SetTargetResource* self,
    _In_ MI_Context* context)
{
    return MI_Context_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Set_MIReturn(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Clear_MIReturn(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Set_InputResource(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_SetPtr_InputResource(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self,
    _In_ const MSFT_nxFileResource* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Clear_InputResource(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Set_ProviderContext(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self,
    _In_ MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ProviderContext)->value = x;
    ((MI_Uint64Field*)&self->ProviderContext)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Clear_ProviderContext(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self)
{
    memset((void*)&self->ProviderContext, 0, sizeof(self->ProviderContext));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Set_Flags(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self,
    _In_ MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Flags)->value = x;
    ((MI_Uint32Field*)&self->Flags)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_nxFileResource_SetTargetResource_Clear_Flags(
    _Inout_ MSFT_nxFileResource_SetTargetResource* self)
{
    memset((void*)&self->Flags, 0, sizeof(self->Flags));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_nxFileResource provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_nxFileResource_Self MSFT_nxFileResource_Self;

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_Load(
    _Outptr_result_maybenull_ MSFT_nxFileResource_Self** self,
    _In_opt_ MI_Module_Self* selfModule,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_Unload(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_EnumerateInstances(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_ const MI_PropertySet* propertySet,
    _In_ MI_Boolean keysOnly,
    _In_opt_ const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_GetInstance(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxFileResource* instanceName,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_CreateInstance(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxFileResource* newInstance);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_ModifyInstance(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxFileResource* modifiedInstance,
    _In_opt_ const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_DeleteInstance(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_ const MSFT_nxFileResource* instanceName);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_Invoke_GetTargetResource(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_z_ const MI_Char* methodName,
    _In_ const MSFT_nxFileResource* instanceName,
    _In_opt_ const MSFT_nxFileResource_GetTargetResource* in);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_Invoke_TestTargetResource(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_z_ const MI_Char* methodName,
    _In_ const MSFT_nxFileResource* instanceName,
    _In_opt_ const MSFT_nxFileResource_TestTargetResource* in);

MI_EXTERN_C void MI_CALL MSFT_nxFileResource_Invoke_SetTargetResource(
    _In_opt_ MSFT_nxFileResource_Self* self,
    _In_ MI_Context* context,
    _In_opt_z_ const MI_Char* nameSpace,
    _In_opt_z_ const MI_Char* className,
    _In_opt_z_ const MI_Char* methodName,
    _In_ const MSFT_nxFileResource* instanceName,
    _In_opt_ const MSFT_nxFileResource_SetTargetResource* in);


#endif /* _MSFT_nxFileResource_h */
