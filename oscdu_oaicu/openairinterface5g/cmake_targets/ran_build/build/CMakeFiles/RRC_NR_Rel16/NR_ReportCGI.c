/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_ReportCGI.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_useAutonomousGaps_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_useAutonomousGaps_r16_value2enum_5[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_NR_useAutonomousGaps_r16_enum2value_5[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_useAutonomousGaps_r16_specs_5 = {
	asn_MAP_NR_useAutonomousGaps_r16_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_useAutonomousGaps_r16_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_useAutonomousGaps_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_useAutonomousGaps_r16_5 = {
	"useAutonomousGaps-r16",
	"useAutonomousGaps-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_useAutonomousGaps_r16_tags_5,
	sizeof(asn_DEF_NR_useAutonomousGaps_r16_tags_5)
		/sizeof(asn_DEF_NR_useAutonomousGaps_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_useAutonomousGaps_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_useAutonomousGaps_r16_tags_5)
		/sizeof(asn_DEF_NR_useAutonomousGaps_r16_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_NR_useAutonomousGaps_r16_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_useAutonomousGaps_r16_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_4[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_ReportCGI__ext1, useAutonomousGaps_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_useAutonomousGaps_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useAutonomousGaps-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_4[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* useAutonomousGaps-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_4 = {
	sizeof(struct NR_ReportCGI__ext1),
	offsetof(struct NR_ReportCGI__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_4,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_4,
	sizeof(asn_DEF_NR_ext1_tags_4)
		/sizeof(asn_DEF_NR_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_4)
		/sizeof(asn_DEF_NR_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_4,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_ReportCGI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_ReportCGI, cellForWhichToReportCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellForWhichToReportCGI"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_ReportCGI, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_ReportCGI_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_NR_ReportCGI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ReportCGI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellForWhichToReportCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_ReportCGI_specs_1 = {
	sizeof(struct NR_ReportCGI),
	offsetof(struct NR_ReportCGI, _asn_ctx),
	asn_MAP_NR_ReportCGI_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_ReportCGI_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_ReportCGI = {
	"ReportCGI",
	"ReportCGI",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ReportCGI_tags_1,
	sizeof(asn_DEF_NR_ReportCGI_tags_1)
		/sizeof(asn_DEF_NR_ReportCGI_tags_1[0]), /* 1 */
	asn_DEF_NR_ReportCGI_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_ReportCGI_tags_1)
		/sizeof(asn_DEF_NR_ReportCGI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ReportCGI_1,
	2,	/* Elements count */
	&asn_SPC_NR_ReportCGI_specs_1	/* Additional specs */
};
