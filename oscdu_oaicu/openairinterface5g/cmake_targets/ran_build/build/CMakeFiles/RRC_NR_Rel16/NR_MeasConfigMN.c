/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_MeasConfigMN.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_measuredFrequenciesMN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_measuredFrequenciesMN_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_gapPurpose_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_measuredFrequenciesMN_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_measuredFrequenciesMN_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_NR_FreqInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_measuredFrequenciesMN_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_measuredFrequenciesMN_specs_2 = {
	sizeof(struct NR_MeasConfigMN__measuredFrequenciesMN),
	offsetof(struct NR_MeasConfigMN__measuredFrequenciesMN, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measuredFrequenciesMN_2 = {
	"measuredFrequenciesMN",
	"measuredFrequenciesMN",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_measuredFrequenciesMN_tags_2,
	sizeof(asn_DEF_NR_measuredFrequenciesMN_tags_2)
		/sizeof(asn_DEF_NR_measuredFrequenciesMN_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_measuredFrequenciesMN_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_measuredFrequenciesMN_tags_2)
		/sizeof(asn_DEF_NR_measuredFrequenciesMN_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_measuredFrequenciesMN_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_measuredFrequenciesMN_2,
	1,	/* Single element */
	&asn_SPC_NR_measuredFrequenciesMN_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_gapPurpose_value2enum_5[] = {
	{ 0,	5,	"perUE" },
	{ 1,	6,	"perFR1" }
};
static const unsigned int asn_MAP_NR_gapPurpose_enum2value_5[] = {
	1,	/* perFR1(1) */
	0	/* perUE(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_gapPurpose_specs_5 = {
	asn_MAP_NR_gapPurpose_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_gapPurpose_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_gapPurpose_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_gapPurpose_5 = {
	"gapPurpose",
	"gapPurpose",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_gapPurpose_tags_5,
	sizeof(asn_DEF_NR_gapPurpose_tags_5)
		/sizeof(asn_DEF_NR_gapPurpose_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_gapPurpose_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_gapPurpose_tags_5)
		/sizeof(asn_DEF_NR_gapPurpose_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_NR_gapPurpose_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_gapPurpose_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_9[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_MeasConfigMN__ext1, measGapConfigFR2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfigFR2"
		},
};
static const int asn_MAP_NR_ext1_oms_9[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measGapConfigFR2 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_9 = {
	sizeof(struct NR_MeasConfigMN__ext1),
	offsetof(struct NR_MeasConfigMN__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_9,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_9,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_9 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_9,
	sizeof(asn_DEF_NR_ext1_tags_9)
		/sizeof(asn_DEF_NR_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_9)
		/sizeof(asn_DEF_NR_ext1_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_9,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MeasConfigMN_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_MeasConfigMN, measuredFrequenciesMN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_measuredFrequenciesMN_2,
		0,
		{ 0, &asn_PER_memb_NR_measuredFrequenciesMN_constr_2,  memb_NR_measuredFrequenciesMN_constraint_1 },
		0, 0, /* No default value */
		"measuredFrequenciesMN"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_MeasConfigMN, measGapConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_GapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_MeasConfigMN, gapPurpose),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_gapPurpose_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gapPurpose"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MeasConfigMN, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_ext1_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_MeasConfigMN_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_MeasConfigMN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MeasConfigMN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measuredFrequenciesMN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measGapConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gapPurpose */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasConfigMN_specs_1 = {
	sizeof(struct NR_MeasConfigMN),
	offsetof(struct NR_MeasConfigMN, _asn_ctx),
	asn_MAP_NR_MeasConfigMN_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_MeasConfigMN_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasConfigMN = {
	"MeasConfigMN",
	"MeasConfigMN",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MeasConfigMN_tags_1,
	sizeof(asn_DEF_NR_MeasConfigMN_tags_1)
		/sizeof(asn_DEF_NR_MeasConfigMN_tags_1[0]), /* 1 */
	asn_DEF_NR_MeasConfigMN_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MeasConfigMN_tags_1)
		/sizeof(asn_DEF_NR_MeasConfigMN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MeasConfigMN_1,
	4,	/* Elements count */
	&asn_SPC_NR_MeasConfigMN_specs_1	/* Additional specs */
};
