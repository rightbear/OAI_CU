/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#include "LTE_PRACH-Config-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_prach_HoppingOffset_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 94)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_initial_CE_level_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_fdd_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_tdd_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mpdcch_startSF_CSS_RA_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_prach_HoppingOffset_r13_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  94 }	/* (0..94) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_initial_CE_level_r13_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_fdd_r13_value2enum_4[] = {
	{ 0,	2,	"v1" },
	{ 1,	6,	"v1dot5" },
	{ 2,	2,	"v2" },
	{ 3,	6,	"v2dot5" },
	{ 4,	2,	"v4" },
	{ 5,	2,	"v5" },
	{ 6,	2,	"v8" },
	{ 7,	3,	"v10" }
};
static const unsigned int asn_MAP_LTE_fdd_r13_enum2value_4[] = {
	0,	/* v1(0) */
	7,	/* v10(7) */
	1,	/* v1dot5(1) */
	2,	/* v2(2) */
	3,	/* v2dot5(3) */
	4,	/* v4(4) */
	5,	/* v5(5) */
	6	/* v8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_fdd_r13_specs_4 = {
	asn_MAP_LTE_fdd_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_fdd_r13_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_fdd_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fdd_r13_4 = {
	"fdd-r13",
	"fdd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_fdd_r13_tags_4,
	sizeof(asn_DEF_LTE_fdd_r13_tags_4)
		/sizeof(asn_DEF_LTE_fdd_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_fdd_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_fdd_r13_tags_4)
		/sizeof(asn_DEF_LTE_fdd_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_fdd_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_fdd_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_tdd_r13_value2enum_13[] = {
	{ 0,	2,	"v1" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v5" },
	{ 4,	2,	"v8" },
	{ 5,	3,	"v10" },
	{ 6,	3,	"v20" },
	{ 7,	5,	"spare" }
};
static const unsigned int asn_MAP_LTE_tdd_r13_enum2value_13[] = {
	7,	/* spare(7) */
	0,	/* v1(0) */
	5,	/* v10(5) */
	1,	/* v2(1) */
	6,	/* v20(6) */
	2,	/* v4(2) */
	3,	/* v5(3) */
	4	/* v8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_tdd_r13_specs_13 = {
	asn_MAP_LTE_tdd_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_tdd_r13_enum2value_13,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_tdd_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tdd_r13_13 = {
	"tdd-r13",
	"tdd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_tdd_r13_tags_13,
	sizeof(asn_DEF_LTE_tdd_r13_tags_13)
		/sizeof(asn_DEF_LTE_tdd_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_tdd_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_tdd_r13_tags_13)
		/sizeof(asn_DEF_LTE_tdd_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_tdd_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_tdd_r13_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_mpdcch_startSF_CSS_RA_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, choice.fdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_fdd_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, choice.tdd_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_tdd_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mpdcch_startSF_CSS_RA_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_mpdcch_startSF_CSS_RA_r13_specs_3 = {
	sizeof(struct LTE_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13),
	offsetof(struct LTE_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, _asn_ctx),
	offsetof(struct LTE_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13, present),
	sizeof(((struct LTE_PRACH_Config_v1310__mpdcch_startSF_CSS_RA_r13 *)0)->present),
	asn_MAP_LTE_mpdcch_startSF_CSS_RA_r13_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_startSF_CSS_RA_r13_3 = {
	"mpdcch-startSF-CSS-RA-r13",
	"mpdcch-startSF-CSS-RA-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_mpdcch_startSF_CSS_RA_r13_constr_3, CHOICE_constraint },
	asn_MBR_LTE_mpdcch_startSF_CSS_RA_r13_3,
	2,	/* Elements count */
	&asn_SPC_LTE_mpdcch_startSF_CSS_RA_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PRACH_Config_v1310_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_PRACH_Config_v1310, rsrp_ThresholdsPrachInfoList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RSRP_ThresholdsPrachInfoList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrp-ThresholdsPrachInfoList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_PRACH_Config_v1310, mpdcch_startSF_CSS_RA_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_startSF_CSS_RA_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-startSF-CSS-RA-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_PRACH_Config_v1310, prach_HoppingOffset_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_prach_HoppingOffset_r13_constr_22,  memb_LTE_prach_HoppingOffset_r13_constraint_1 },
		0, 0, /* No default value */
		"prach-HoppingOffset-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_PRACH_Config_v1310, prach_ParametersListCE_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PRACH_ParametersListCE_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-ParametersListCE-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PRACH_Config_v1310, initial_CE_level_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_initial_CE_level_r13_constr_24,  memb_LTE_initial_CE_level_r13_constraint_1 },
		0, 0, /* No default value */
		"initial-CE-level-r13"
		},
};
static const int asn_MAP_LTE_PRACH_Config_v1310_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_PRACH_Config_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PRACH_Config_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrp-ThresholdsPrachInfoList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mpdcch-startSF-CSS-RA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* prach-HoppingOffset-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* prach-ParametersListCE-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* initial-CE-level-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PRACH_Config_v1310_specs_1 = {
	sizeof(struct LTE_PRACH_Config_v1310),
	offsetof(struct LTE_PRACH_Config_v1310, _asn_ctx),
	asn_MAP_LTE_PRACH_Config_v1310_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_PRACH_Config_v1310_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PRACH_Config_v1310 = {
	"PRACH-Config-v1310",
	"PRACH-Config-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PRACH_Config_v1310_tags_1,
	sizeof(asn_DEF_LTE_PRACH_Config_v1310_tags_1)
		/sizeof(asn_DEF_LTE_PRACH_Config_v1310_tags_1[0]), /* 1 */
	asn_DEF_LTE_PRACH_Config_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PRACH_Config_v1310_tags_1)
		/sizeof(asn_DEF_LTE_PRACH_Config_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PRACH_Config_v1310_1,
	5,	/* Elements count */
	&asn_SPC_LTE_PRACH_Config_v1310_specs_1	/* Additional specs */
};
