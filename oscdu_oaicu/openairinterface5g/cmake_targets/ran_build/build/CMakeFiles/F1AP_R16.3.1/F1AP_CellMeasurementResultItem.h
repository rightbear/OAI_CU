/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#ifndef	_F1AP_CellMeasurementResultItem_H_
#define	_F1AP_CellMeasurementResultItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_NRCGI.h"
#include "F1AP_NumberofActiveUEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_RadioResourceStatus;
struct F1AP_CompositeAvailableCapacityGroup;
struct F1AP_SliceAvailableCapacity;
struct F1AP_ProtocolExtensionContainer;

/* F1AP_CellMeasurementResultItem */
typedef struct F1AP_CellMeasurementResultItem {
	F1AP_NRCGI_t	 cellID;
	struct F1AP_RadioResourceStatus	*radioResourceStatus;	/* OPTIONAL */
	struct F1AP_CompositeAvailableCapacityGroup	*compositeAvailableCapacityGroup;	/* OPTIONAL */
	struct F1AP_SliceAvailableCapacity	*sliceAvailableCapacity;	/* OPTIONAL */
	F1AP_NumberofActiveUEs_t	*numberofActiveUEs;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_CellMeasurementResultItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_CellMeasurementResultItem;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_CellMeasurementResultItem_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_CellMeasurementResultItem_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_CellMeasurementResultItem_H_ */
#include <asn_internal.h>