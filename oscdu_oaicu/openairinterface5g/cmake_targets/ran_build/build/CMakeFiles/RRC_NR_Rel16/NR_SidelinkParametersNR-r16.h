/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_SidelinkParametersNR_r16_H_
#define	_NR_SidelinkParametersNR_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_RLC_ParametersSidelink_r16;
struct NR_MAC_ParametersSidelink_r16;
struct NR_UE_SidelinkCapabilityAddXDD_Mode_r16;
struct NR_BandSidelink_r16;

/* NR_SidelinkParametersNR-r16 */
typedef struct NR_SidelinkParametersNR_r16 {
	struct NR_RLC_ParametersSidelink_r16	*rlc_ParametersSidelink_r16;	/* OPTIONAL */
	struct NR_MAC_ParametersSidelink_r16	*mac_ParametersSidelink_r16;	/* OPTIONAL */
	struct NR_UE_SidelinkCapabilityAddXDD_Mode_r16	*fdd_Add_UE_Sidelink_Capabilities_r16;	/* OPTIONAL */
	struct NR_UE_SidelinkCapabilityAddXDD_Mode_r16	*tdd_Add_UE_Sidelink_Capabilities_r16;	/* OPTIONAL */
	struct NR_SidelinkParametersNR_r16__supportedBandListSidelink_r16 {
		A_SEQUENCE_OF(struct NR_BandSidelink_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *supportedBandListSidelink_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SidelinkParametersNR_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SidelinkParametersNR_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SidelinkParametersNR_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SidelinkParametersNR_r16_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RLC-ParametersSidelink-r16.h"
#include "NR_MAC-ParametersSidelink-r16.h"
#include "NR_UE-SidelinkCapabilityAddXDD-Mode-r16.h"
#include "NR_BandSidelink-r16.h"

#endif	/* _NR_SidelinkParametersNR_r16_H_ */
#include <asn_internal.h>