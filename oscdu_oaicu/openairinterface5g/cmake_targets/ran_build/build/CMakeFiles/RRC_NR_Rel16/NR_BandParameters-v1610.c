/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_BandParameters-v1610.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_supportedSRS_TxPortSwitch_v1610_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_supportedSRS_TxPortSwitch_v1610_value2enum_3[] = {
	{ 0,	9,	"t1r1-t1r2" },
	{ 1,	14,	"t1r1-t1r2-t1r4" },
	{ 2,	19,	"t1r1-t1r2-t2r2-t2r4" },
	{ 3,	24,	"t1r1-t1r2-t2r2-t1r4-t2r4" },
	{ 4,	9,	"t1r1-t2r2" },
	{ 5,	14,	"t1r1-t2r2-t4r4" }
};
static const unsigned int asn_MAP_NR_supportedSRS_TxPortSwitch_v1610_enum2value_3[] = {
	0,	/* t1r1-t1r2(0) */
	1,	/* t1r1-t1r2-t1r4(1) */
	3,	/* t1r1-t1r2-t2r2-t1r4-t2r4(3) */
	2,	/* t1r1-t1r2-t2r2-t2r4(2) */
	4,	/* t1r1-t2r2(4) */
	5	/* t1r1-t2r2-t4r4(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_supportedSRS_TxPortSwitch_v1610_specs_3 = {
	asn_MAP_NR_supportedSRS_TxPortSwitch_v1610_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_supportedSRS_TxPortSwitch_v1610_enum2value_3,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_3 = {
	"supportedSRS-TxPortSwitch-v1610",
	"supportedSRS-TxPortSwitch-v1610",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3,
	sizeof(asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3)
		/sizeof(asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3)
		/sizeof(asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_supportedSRS_TxPortSwitch_v1610_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_supportedSRS_TxPortSwitch_v1610_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_srs_TxSwitch_v1610_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BandParameters_v1610__srs_TxSwitch_v1610, supportedSRS_TxPortSwitch_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_supportedSRS_TxPortSwitch_v1610_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedSRS-TxPortSwitch-v1610"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_srs_TxSwitch_v1610_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_srs_TxSwitch_v1610_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* supportedSRS-TxPortSwitch-v1610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_srs_TxSwitch_v1610_specs_2 = {
	sizeof(struct NR_BandParameters_v1610__srs_TxSwitch_v1610),
	offsetof(struct NR_BandParameters_v1610__srs_TxSwitch_v1610, _asn_ctx),
	asn_MAP_NR_srs_TxSwitch_v1610_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_srs_TxSwitch_v1610_2 = {
	"srs-TxSwitch-v1610",
	"srs-TxSwitch-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_srs_TxSwitch_v1610_tags_2,
	sizeof(asn_DEF_NR_srs_TxSwitch_v1610_tags_2)
		/sizeof(asn_DEF_NR_srs_TxSwitch_v1610_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_srs_TxSwitch_v1610_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_srs_TxSwitch_v1610_tags_2)
		/sizeof(asn_DEF_NR_srs_TxSwitch_v1610_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_srs_TxSwitch_v1610_2,
	1,	/* Elements count */
	&asn_SPC_NR_srs_TxSwitch_v1610_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BandParameters_v1610_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_BandParameters_v1610, srs_TxSwitch_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_srs_TxSwitch_v1610_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srs-TxSwitch-v1610"
		},
};
static const int asn_MAP_NR_BandParameters_v1610_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_BandParameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BandParameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* srs-TxSwitch-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BandParameters_v1610_specs_1 = {
	sizeof(struct NR_BandParameters_v1610),
	offsetof(struct NR_BandParameters_v1610, _asn_ctx),
	asn_MAP_NR_BandParameters_v1610_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NR_BandParameters_v1610_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BandParameters_v1610 = {
	"BandParameters-v1610",
	"BandParameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BandParameters_v1610_tags_1,
	sizeof(asn_DEF_NR_BandParameters_v1610_tags_1)
		/sizeof(asn_DEF_NR_BandParameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_NR_BandParameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BandParameters_v1610_tags_1)
		/sizeof(asn_DEF_NR_BandParameters_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_BandParameters_v1610_1,
	1,	/* Elements count */
	&asn_SPC_NR_BandParameters_v1610_specs_1	/* Additional specs */
};
