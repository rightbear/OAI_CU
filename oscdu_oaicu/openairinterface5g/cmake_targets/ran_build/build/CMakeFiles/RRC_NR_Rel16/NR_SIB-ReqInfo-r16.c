/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_SIB-ReqInfo-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NR_SIB_ReqInfo_r16_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_SIB_ReqInfo_r16_value2enum_1[] = {
	{ 0,	5,	"sib12" },
	{ 1,	5,	"sib13" },
	{ 2,	5,	"sib14" },
	{ 3,	6,	"spare5" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_SIB_ReqInfo_r16_enum2value_1[] = {
	0,	/* sib12(0) */
	1,	/* sib13(1) */
	2,	/* sib14(2) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3	/* spare5(3) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_SIB_ReqInfo_r16_specs_1 = {
	asn_MAP_NR_SIB_ReqInfo_r16_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_SIB_ReqInfo_r16_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_SIB_ReqInfo_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB_ReqInfo_r16 = {
	"SIB-ReqInfo-r16",
	"SIB-ReqInfo-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_SIB_ReqInfo_r16_tags_1,
	sizeof(asn_DEF_NR_SIB_ReqInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_SIB_ReqInfo_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB_ReqInfo_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB_ReqInfo_r16_tags_1)
		/sizeof(asn_DEF_NR_SIB_ReqInfo_r16_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_SIB_ReqInfo_r16_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_SIB_ReqInfo_r16_specs_1	/* Additional specs */
};
