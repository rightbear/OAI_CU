/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_SL-PowerControl-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_sl_MaxTransPower_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -30 && value <= 33)) {
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
memb_NR_sl_P0_PSSCH_PSCCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_dl_P0_PSSCH_PSCCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
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
memb_NR_dl_P0_PSFCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_sl_Alpha_PSSCH_PSCCH_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_dl_Alpha_PSSCH_PSCCH_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_dl_Alpha_PSFCH_r16_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_MaxTransPower_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -30,  33 }	/* (-30..33) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_P0_PSSCH_PSCCH_r16_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_dl_P0_PSSCH_PSCCH_r16_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_dl_P0_PSFCH_r16_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_Alpha_PSSCH_PSCCH_r16_value2enum_3[] = {
	{ 0,	6,	"alpha0" },
	{ 1,	7,	"alpha04" },
	{ 2,	7,	"alpha05" },
	{ 3,	7,	"alpha06" },
	{ 4,	7,	"alpha07" },
	{ 5,	7,	"alpha08" },
	{ 6,	7,	"alpha09" },
	{ 7,	6,	"alpha1" }
};
static const unsigned int asn_MAP_NR_sl_Alpha_PSSCH_PSCCH_r16_enum2value_3[] = {
	0,	/* alpha0(0) */
	1,	/* alpha04(1) */
	2,	/* alpha05(2) */
	3,	/* alpha06(3) */
	4,	/* alpha07(4) */
	5,	/* alpha08(5) */
	6,	/* alpha09(6) */
	7	/* alpha1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_Alpha_PSSCH_PSCCH_r16_specs_3 = {
	asn_MAP_NR_sl_Alpha_PSSCH_PSCCH_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_Alpha_PSSCH_PSCCH_r16_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_3 = {
	"sl-Alpha-PSSCH-PSCCH-r16",
	"sl-Alpha-PSSCH-PSCCH-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3,
	sizeof(asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3)
		/sizeof(asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3)
		/sizeof(asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_Alpha_PSSCH_PSCCH_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_Alpha_PSSCH_PSCCH_r16_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_dl_Alpha_PSSCH_PSCCH_r16_value2enum_12[] = {
	{ 0,	6,	"alpha0" },
	{ 1,	7,	"alpha04" },
	{ 2,	7,	"alpha05" },
	{ 3,	7,	"alpha06" },
	{ 4,	7,	"alpha07" },
	{ 5,	7,	"alpha08" },
	{ 6,	7,	"alpha09" },
	{ 7,	6,	"alpha1" }
};
static const unsigned int asn_MAP_NR_dl_Alpha_PSSCH_PSCCH_r16_enum2value_12[] = {
	0,	/* alpha0(0) */
	1,	/* alpha04(1) */
	2,	/* alpha05(2) */
	3,	/* alpha06(3) */
	4,	/* alpha07(4) */
	5,	/* alpha08(5) */
	6,	/* alpha09(6) */
	7	/* alpha1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_dl_Alpha_PSSCH_PSCCH_r16_specs_12 = {
	asn_MAP_NR_dl_Alpha_PSSCH_PSCCH_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_dl_Alpha_PSSCH_PSCCH_r16_enum2value_12,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_12 = {
	"dl-Alpha-PSSCH-PSCCH-r16",
	"dl-Alpha-PSSCH-PSCCH-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12,
	sizeof(asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12)
		/sizeof(asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12)
		/sizeof(asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_dl_Alpha_PSSCH_PSCCH_r16_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_dl_Alpha_PSSCH_PSCCH_r16_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_dl_Alpha_PSFCH_r16_value2enum_23[] = {
	{ 0,	6,	"alpha0" },
	{ 1,	7,	"alpha04" },
	{ 2,	7,	"alpha05" },
	{ 3,	7,	"alpha06" },
	{ 4,	7,	"alpha07" },
	{ 5,	7,	"alpha08" },
	{ 6,	7,	"alpha09" },
	{ 7,	6,	"alpha1" }
};
static const unsigned int asn_MAP_NR_dl_Alpha_PSFCH_r16_enum2value_23[] = {
	0,	/* alpha0(0) */
	1,	/* alpha04(1) */
	2,	/* alpha05(2) */
	3,	/* alpha06(3) */
	4,	/* alpha07(4) */
	5,	/* alpha08(5) */
	6,	/* alpha09(6) */
	7	/* alpha1(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_dl_Alpha_PSFCH_r16_specs_23 = {
	asn_MAP_NR_dl_Alpha_PSFCH_r16_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_dl_Alpha_PSFCH_r16_enum2value_23,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_dl_Alpha_PSFCH_r16_23 = {
	"dl-Alpha-PSFCH-r16",
	"dl-Alpha-PSFCH-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23,
	sizeof(asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23)
		/sizeof(asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23[0]) - 1, /* 1 */
	asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23,	/* Same as above */
	sizeof(asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23)
		/sizeof(asn_DEF_NR_dl_Alpha_PSFCH_r16_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_NR_dl_Alpha_PSFCH_r16_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_dl_Alpha_PSFCH_r16_specs_23	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_PowerControl_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_PowerControl_r16, sl_MaxTransPower_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_MaxTransPower_r16_constr_2,  memb_NR_sl_MaxTransPower_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MaxTransPower-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_SL_PowerControl_r16, sl_Alpha_PSSCH_PSCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_Alpha_PSSCH_PSCCH_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-Alpha-PSSCH-PSCCH-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_SL_PowerControl_r16, dl_Alpha_PSSCH_PSCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_dl_Alpha_PSSCH_PSCCH_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-Alpha-PSSCH-PSCCH-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_SL_PowerControl_r16, sl_P0_PSSCH_PSCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_P0_PSSCH_PSCCH_r16_constr_21,  memb_NR_sl_P0_PSSCH_PSCCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-P0-PSSCH-PSCCH-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SL_PowerControl_r16, dl_P0_PSSCH_PSCCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_dl_P0_PSSCH_PSCCH_r16_constr_22,  memb_NR_dl_P0_PSSCH_PSCCH_r16_constraint_1 },
		0, 0, /* No default value */
		"dl-P0-PSSCH-PSCCH-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_PowerControl_r16, dl_Alpha_PSFCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_dl_Alpha_PSFCH_r16_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dl-Alpha-PSFCH-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_PowerControl_r16, dl_P0_PSFCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_dl_P0_PSFCH_r16_constr_32,  memb_NR_dl_P0_PSFCH_r16_constraint_1 },
		0, 0, /* No default value */
		"dl-P0-PSFCH-r16"
		},
};
static const int asn_MAP_NR_SL_PowerControl_r16_oms_1[] = { 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_NR_SL_PowerControl_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_PowerControl_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-MaxTransPower-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-Alpha-PSSCH-PSCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-Alpha-PSSCH-PSCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-P0-PSSCH-PSCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-P0-PSSCH-PSCCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-Alpha-PSFCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* dl-P0-PSFCH-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PowerControl_r16_specs_1 = {
	sizeof(struct NR_SL_PowerControl_r16),
	offsetof(struct NR_SL_PowerControl_r16, _asn_ctx),
	asn_MAP_NR_SL_PowerControl_r16_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_SL_PowerControl_r16_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_PowerControl_r16 = {
	"SL-PowerControl-r16",
	"SL-PowerControl-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_PowerControl_r16_tags_1,
	sizeof(asn_DEF_NR_SL_PowerControl_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_PowerControl_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_PowerControl_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_PowerControl_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_PowerControl_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_PowerControl_r16_1,
	7,	/* Elements count */
	&asn_SPC_NR_SL_PowerControl_r16_specs_1	/* Additional specs */
};
