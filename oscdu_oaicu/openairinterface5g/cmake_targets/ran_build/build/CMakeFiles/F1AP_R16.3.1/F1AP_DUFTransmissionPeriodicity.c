/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#include "F1AP_DUFTransmissionPeriodicity.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_DUFTransmissionPeriodicity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_DUFTransmissionPeriodicity_value2enum_1[] = {
	{ 0,	5,	"ms0p5" },
	{ 1,	7,	"ms0p625" },
	{ 2,	3,	"ms1" },
	{ 3,	6,	"ms1p25" },
	{ 4,	3,	"ms2" },
	{ 5,	5,	"ms2p5" },
	{ 6,	3,	"ms5" },
	{ 7,	4,	"ms10" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_DUFTransmissionPeriodicity_enum2value_1[] = {
	0,	/* ms0p5(0) */
	1,	/* ms0p625(1) */
	2,	/* ms1(2) */
	7,	/* ms10(7) */
	3,	/* ms1p25(3) */
	4,	/* ms2(4) */
	5,	/* ms2p5(5) */
	6	/* ms5(6) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_DUFTransmissionPeriodicity_specs_1 = {
	asn_MAP_F1AP_DUFTransmissionPeriodicity_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_DUFTransmissionPeriodicity_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_DUFTransmissionPeriodicity = {
	"DUFTransmissionPeriodicity",
	"DUFTransmissionPeriodicity",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1,
	sizeof(asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1)
		/sizeof(asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1[0]), /* 1 */
	asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1)
		/sizeof(asn_DEF_F1AP_DUFTransmissionPeriodicity_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_DUFTransmissionPeriodicity_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_DUFTransmissionPeriodicity_specs_1	/* Additional specs */
};
