//******************************************************************
//
// Copyright 2015 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef OXM_JUST_WORKS_H_
#define OXM_JUST_WORKS_H_

#include "ocstack.h"
#include "experimental/securevirtualresourcetypes.h"
#include "ownershiptransfermanager.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

//
//Declaration of default callback functions for just works OxM.
//

/**
 * In case of just works OxM, no need to implement.
 *
 * @return ::OC_STACK_OK in case of success and other value otherwise.
 */
OCStackResult LoadSecretJustWorksCallback(OTMContext_t* UNUSED_PARAM);

/**
 * To establish a secure channel with anonymous cipher suite
 *
 * @param otmCtx Context of OTM, It includes current device information.
 *
 * @return ::OC_STACK_OK in case of success and other value otherwise.
 */
OCStackResult CreateSecureSessionJustWorksCallback(OTMContext_t* otmCtx);

/**
 * Generate payload for select OxM request.
 *
 * @param otmCtx Context of OTM, It includes current device information.
 * @param cborPayload is the DOXM CBOR payload including the selected OxM.
 * @note Returned memory should be deallocated by caller.
 * @param cborSize is the size of the cborPayload.
 *
 * @return ::OC_STACK_OK in case of success and other value otherwise.
 */
OCStackResult CreateJustWorksSelectOxmPayload(OTMContext_t *otmCtx, uint8_t **cborPayload,
                                             size_t *cborSize);

/**
 * Generate payload for owner transfer request.
 *
 * @param otmCtx Context of OTM, It includes current device information.
 * @param cborPayload is the DOXM CBOR payload including the owner information.
 * @note Returned memory should be deallocated by caller.
 * @param cborSize is the size of the cborPayload.
 *
 * @return ::OC_STACK_OK in case of success and other value otherwise.
 */
OCStackResult CreateJustWorksOwnerTransferPayload(OTMContext_t *otmCtx, uint8_t **cborPayload,
                                                  size_t *cborSize);

/**
 * Generate payload for select OxM request for Mutual Verified Just-Works.
 *
 * @param otmCtx Context of OTM, It includes current device information.
 * @param cborPayload is the DOXM CBOR payload including the selected OxM.
 * @note Returned memory should be deallocated by caller.
 * @param cborSize is the size of the cborPayload.
 *
 * @return ::OC_STACK_OK in case of success and other value otherwise.
 */
OCStackResult CreateMVJustWorksSelectOxmPayload(OTMContext_t *otmCtx, uint8_t **cborPayload,
                                             size_t *cborSize);

#ifdef __cplusplus
}
#endif
#endif //OXM_JUST_WORKS_H_
