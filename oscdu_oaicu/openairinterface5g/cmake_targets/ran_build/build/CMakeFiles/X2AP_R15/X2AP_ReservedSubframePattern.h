/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/X2AP_R15`
 */

#ifndef	_X2AP_ReservedSubframePattern_H_
#define	_X2AP_ReservedSubframePattern_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_SubframeType.h"
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_ReservedSubframePattern */
typedef struct X2AP_ReservedSubframePattern {
	X2AP_SubframeType_t	 subframeType;
	BIT_STRING_t	 reservedSubframePattern;
	long	 mBSFNControlRegionLength;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ReservedSubframePattern_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ReservedSubframePattern;
extern asn_SEQUENCE_specifics_t asn_SPC_X2AP_ReservedSubframePattern_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ReservedSubframePattern_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ReservedSubframePattern_H_ */
#include <asn_internal.h>