/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_RLC_Parameters_H_
#define	_NR_RLC_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RLC_Parameters__am_WithShortSN {
	NR_RLC_Parameters__am_WithShortSN_supported	= 0
} e_NR_RLC_Parameters__am_WithShortSN;
typedef enum NR_RLC_Parameters__um_WithShortSN {
	NR_RLC_Parameters__um_WithShortSN_supported	= 0
} e_NR_RLC_Parameters__um_WithShortSN;
typedef enum NR_RLC_Parameters__um_WithLongSN {
	NR_RLC_Parameters__um_WithLongSN_supported	= 0
} e_NR_RLC_Parameters__um_WithLongSN;
typedef enum NR_RLC_Parameters__ext1__extendedT_PollRetransmit_r16 {
	NR_RLC_Parameters__ext1__extendedT_PollRetransmit_r16_supported	= 0
} e_NR_RLC_Parameters__ext1__extendedT_PollRetransmit_r16;
typedef enum NR_RLC_Parameters__ext1__extendedT_StatusProhibit_r16 {
	NR_RLC_Parameters__ext1__extendedT_StatusProhibit_r16_supported	= 0
} e_NR_RLC_Parameters__ext1__extendedT_StatusProhibit_r16;

/* NR_RLC-Parameters */
typedef struct NR_RLC_Parameters {
	long	*am_WithShortSN;	/* OPTIONAL */
	long	*um_WithShortSN;	/* OPTIONAL */
	long	*um_WithLongSN;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_RLC_Parameters__ext1 {
		long	*extendedT_PollRetransmit_r16;	/* OPTIONAL */
		long	*extendedT_StatusProhibit_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RLC_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_am_WithShortSN_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_um_WithShortSN_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_um_WithLongSN_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedT_PollRetransmit_r16_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_extendedT_StatusProhibit_r16_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RLC_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RLC_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RLC_Parameters_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RLC_Parameters_H_ */
#include <asn_internal.h>