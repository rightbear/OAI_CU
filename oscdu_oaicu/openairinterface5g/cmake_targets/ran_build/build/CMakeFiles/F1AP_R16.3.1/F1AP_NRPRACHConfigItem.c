/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#include "F1AP_NRPRACHConfigItem.h"

#include "F1AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_F1AP_prachFreqStartfromCarrier_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 274)) {
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
memb_F1AP_parchConfigIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_F1AP_zeroCorrelZoneConfig_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_F1AP_msg1FDM_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_F1AP_ssb_perRACH_Occasion_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_prachFreqStartfromCarrier_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  9,  9,  0,  274 }	/* (0..274,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_parchConfigIndex_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  8,  8,  0,  255 }	/* (0..255,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_F1AP_zeroCorrelZoneConfig_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_msg1FDM_value2enum_4[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" },
	{ 3,	5,	"eight" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_msg1FDM_enum2value_4[] = {
	3,	/* eight(3) */
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_msg1FDM_specs_4 = {
	asn_MAP_F1AP_msg1FDM_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_msg1FDM_enum2value_4,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_msg1FDM_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_msg1FDM_4 = {
	"msg1FDM",
	"msg1FDM",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_msg1FDM_tags_4,
	sizeof(asn_DEF_F1AP_msg1FDM_tags_4)
		/sizeof(asn_DEF_F1AP_msg1FDM_tags_4[0]) - 1, /* 1 */
	asn_DEF_F1AP_msg1FDM_tags_4,	/* Same as above */
	sizeof(asn_DEF_F1AP_msg1FDM_tags_4)
		/sizeof(asn_DEF_F1AP_msg1FDM_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_F1AP_msg1FDM_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_msg1FDM_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_F1AP_ssb_perRACH_Occasion_value2enum_11[] = {
	{ 0,	9,	"oneEighth" },
	{ 1,	9,	"oneFourth" },
	{ 2,	7,	"oneHalf" },
	{ 3,	3,	"one" },
	{ 4,	3,	"two" },
	{ 5,	4,	"four" },
	{ 6,	5,	"eight" },
	{ 7,	7,	"sixteen" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_ssb_perRACH_Occasion_enum2value_11[] = {
	6,	/* eight(6) */
	5,	/* four(5) */
	3,	/* one(3) */
	0,	/* oneEighth(0) */
	1,	/* oneFourth(1) */
	2,	/* oneHalf(2) */
	7,	/* sixteen(7) */
	4	/* two(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_F1AP_ssb_perRACH_Occasion_specs_11 = {
	asn_MAP_F1AP_ssb_perRACH_Occasion_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_ssb_perRACH_Occasion_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_ssb_perRACH_Occasion_11 = {
	"ssb-perRACH-Occasion",
	"ssb-perRACH-Occasion",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11,
	sizeof(asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11)
		/sizeof(asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11[0]) - 1, /* 1 */
	asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11,	/* Same as above */
	sizeof(asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11)
		/sizeof(asn_DEF_F1AP_ssb_perRACH_Occasion_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_F1AP_ssb_perRACH_Occasion_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_ssb_perRACH_Occasion_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_NRPRACHConfigItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, nRSCS),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_NRSCS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRSCS"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, prachFreqStartfromCarrier),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_prachFreqStartfromCarrier_constr_3,  memb_F1AP_prachFreqStartfromCarrier_constraint_1 },
		0, 0, /* No default value */
		"prachFreqStartfromCarrier"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, msg1FDM),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_msg1FDM_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1FDM"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, parchConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_parchConfigIndex_constr_10,  memb_F1AP_parchConfigIndex_constraint_1 },
		0, 0, /* No default value */
		"parchConfigIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, ssb_perRACH_Occasion),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ssb_perRACH_Occasion_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssb-perRACH-Occasion"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, freqDomainLength),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_F1AP_FreqDomainLength,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqDomainLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_NRPRACHConfigItem, zeroCorrelZoneConfig),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_F1AP_zeroCorrelZoneConfig_constr_22,  memb_F1AP_zeroCorrelZoneConfig_constraint_1 },
		0, 0, /* No default value */
		"zeroCorrelZoneConfig"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_NRPRACHConfigItem, iE_Extension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_154P171,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extension"
		},
};
static const int asn_MAP_F1AP_NRPRACHConfigItem_oms_1[] = { 7 };
static const ber_tlv_tag_t asn_DEF_F1AP_NRPRACHConfigItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_NRPRACHConfigItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRSCS */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prachFreqStartfromCarrier */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msg1FDM */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* parchConfigIndex */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ssb-perRACH-Occasion */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* freqDomainLength */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* zeroCorrelZoneConfig */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extension */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_NRPRACHConfigItem_specs_1 = {
	sizeof(struct F1AP_NRPRACHConfigItem),
	offsetof(struct F1AP_NRPRACHConfigItem, _asn_ctx),
	asn_MAP_F1AP_NRPRACHConfigItem_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_F1AP_NRPRACHConfigItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_NRPRACHConfigItem = {
	"NRPRACHConfigItem",
	"NRPRACHConfigItem",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_NRPRACHConfigItem_tags_1,
	sizeof(asn_DEF_F1AP_NRPRACHConfigItem_tags_1)
		/sizeof(asn_DEF_F1AP_NRPRACHConfigItem_tags_1[0]), /* 1 */
	asn_DEF_F1AP_NRPRACHConfigItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_NRPRACHConfigItem_tags_1)
		/sizeof(asn_DEF_F1AP_NRPRACHConfigItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_NRPRACHConfigItem_1,
	8,	/* Elements count */
	&asn_SPC_F1AP_NRPRACHConfigItem_specs_1	/* Additional specs */
};
