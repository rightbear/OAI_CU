/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_SSB_MTC2_H_
#define	_NR_SSB_MTC2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "NR_PhysCellId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SSB_MTC2__periodicity {
	NR_SSB_MTC2__periodicity_sf5	= 0,
	NR_SSB_MTC2__periodicity_sf10	= 1,
	NR_SSB_MTC2__periodicity_sf20	= 2,
	NR_SSB_MTC2__periodicity_sf40	= 3,
	NR_SSB_MTC2__periodicity_sf80	= 4,
	NR_SSB_MTC2__periodicity_spare3	= 5,
	NR_SSB_MTC2__periodicity_spare2	= 6,
	NR_SSB_MTC2__periodicity_spare1	= 7
} e_NR_SSB_MTC2__periodicity;

/* NR_SSB-MTC2 */
typedef struct NR_SSB_MTC2 {
	struct NR_SSB_MTC2__pci_List {
		A_SEQUENCE_OF(NR_PhysCellId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pci_List;
	long	 periodicity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SSB_MTC2_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_periodicity_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SSB_MTC2;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SSB_MTC2_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SSB_MTC2_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SSB_MTC2_H_ */
#include <asn_internal.h>