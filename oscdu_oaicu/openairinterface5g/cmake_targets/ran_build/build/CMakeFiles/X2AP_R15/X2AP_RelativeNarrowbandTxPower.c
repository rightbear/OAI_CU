/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R15/x2ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/X2AP_R15`
 */

#include "X2AP_RelativeNarrowbandTxPower.h"

#include "X2AP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_X2AP_rNTP_PerPRB_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 6 && size <= 110)) {
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
memb_X2AP_p_B_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_X2AP_pDCCH_InterferenceImpact_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_X2AP_numberOfCellSpecificAntennaPorts_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_rNTP_PerPRB_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  7,  7,  6,  110 }	/* (SIZE(6..110,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_p_B_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_pDCCH_InterferenceImpact_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_value2enum_4[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_enum2value_4[] = {
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_X2AP_numberOfCellSpecificAntennaPorts_specs_4 = {
	asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_numberOfCellSpecificAntennaPorts_enum2value_4,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_4 = {
	"numberOfCellSpecificAntennaPorts",
	"numberOfCellSpecificAntennaPorts",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4,
	sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4)
		/sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4[0]) - 1, /* 1 */
	asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4,	/* Same as above */
	sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4)
		/sizeof(asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_X2AP_numberOfCellSpecificAntennaPorts_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_numberOfCellSpecificAntennaPorts_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_RelativeNarrowbandTxPower_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RelativeNarrowbandTxPower, rNTP_PerPRB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_X2AP_rNTP_PerPRB_constr_2,  memb_X2AP_rNTP_PerPRB_constraint_1 },
		0, 0, /* No default value */
		"rNTP-PerPRB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RelativeNarrowbandTxPower, rNTP_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_RNTP_Threshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rNTP-Threshold"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RelativeNarrowbandTxPower, numberOfCellSpecificAntennaPorts),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_numberOfCellSpecificAntennaPorts_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfCellSpecificAntennaPorts"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RelativeNarrowbandTxPower, p_B),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_p_B_constr_9,  memb_X2AP_p_B_constraint_1 },
		0, 0, /* No default value */
		"p-B"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_RelativeNarrowbandTxPower, pDCCH_InterferenceImpact),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_pDCCH_InterferenceImpact_constr_10,  memb_X2AP_pDCCH_InterferenceImpact_constraint_1 },
		0, 0, /* No default value */
		"pDCCH-InterferenceImpact"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_RelativeNarrowbandTxPower, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_8421P186,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_RelativeNarrowbandTxPower_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_RelativeNarrowbandTxPower_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rNTP-PerPRB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rNTP-Threshold */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* numberOfCellSpecificAntennaPorts */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p-B */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pDCCH-InterferenceImpact */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_RelativeNarrowbandTxPower_specs_1 = {
	sizeof(struct X2AP_RelativeNarrowbandTxPower),
	offsetof(struct X2AP_RelativeNarrowbandTxPower, _asn_ctx),
	asn_MAP_X2AP_RelativeNarrowbandTxPower_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_X2AP_RelativeNarrowbandTxPower_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_RelativeNarrowbandTxPower = {
	"RelativeNarrowbandTxPower",
	"RelativeNarrowbandTxPower",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1,
	sizeof(asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1)
		/sizeof(asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1[0]), /* 1 */
	asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1)
		/sizeof(asn_DEF_X2AP_RelativeNarrowbandTxPower_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_RelativeNarrowbandTxPower_1,
	6,	/* Elements count */
	&asn_SPC_X2AP_RelativeNarrowbandTxPower_specs_1	/* Additional specs */
};
