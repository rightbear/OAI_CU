/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_SL-PSSCH-TxParameters-r16.h"

static int
memb_NR_sl_MinMCS_PSSCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 27)) {
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
memb_NR_sl_MaxMCS_PSSCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
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
memb_NR_sl_MinSubChannelNumPSSCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 27)) {
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
memb_NR_sl_MaxSubchannelNumPSSCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 27)) {
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
memb_NR_sl_MaxTxTransNumPSSCH_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_sl_MinMCS_PSSCH_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  27 }	/* (0..27) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_MaxMCS_PSSCH_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_MinSubChannelNumPSSCH_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  27 }	/* (1..27) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_MaxSubchannelNumPSSCH_r16_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  27 }	/* (1..27) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_MaxTxTransNumPSSCH_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NR_SL_PSSCH_TxParameters_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_PSSCH_TxParameters_r16, sl_MinMCS_PSSCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_MinMCS_PSSCH_r16_constr_2,  memb_NR_sl_MinMCS_PSSCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MinMCS-PSSCH-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_PSSCH_TxParameters_r16, sl_MaxMCS_PSSCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_MaxMCS_PSSCH_r16_constr_3,  memb_NR_sl_MaxMCS_PSSCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MaxMCS-PSSCH-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_PSSCH_TxParameters_r16, sl_MinSubChannelNumPSSCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_MinSubChannelNumPSSCH_r16_constr_4,  memb_NR_sl_MinSubChannelNumPSSCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MinSubChannelNumPSSCH-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_PSSCH_TxParameters_r16, sl_MaxSubchannelNumPSSCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_MaxSubchannelNumPSSCH_r16_constr_5,  memb_NR_sl_MaxSubchannelNumPSSCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MaxSubchannelNumPSSCH-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_PSSCH_TxParameters_r16, sl_MaxTxTransNumPSSCH_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_MaxTxTransNumPSSCH_r16_constr_6,  memb_NR_sl_MaxTxTransNumPSSCH_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-MaxTxTransNumPSSCH-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_PSSCH_TxParameters_r16, sl_MaxTxPower_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SL_TxPower_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MaxTxPower-r16"
		},
};
static const int asn_MAP_NR_SL_PSSCH_TxParameters_r16_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_PSSCH_TxParameters_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-MinMCS-PSSCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-MaxMCS-PSSCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-MinSubChannelNumPSSCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-MaxSubchannelNumPSSCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-MaxTxTransNumPSSCH-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* sl-MaxTxPower-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PSSCH_TxParameters_r16_specs_1 = {
	sizeof(struct NR_SL_PSSCH_TxParameters_r16),
	offsetof(struct NR_SL_PSSCH_TxParameters_r16, _asn_ctx),
	asn_MAP_NR_SL_PSSCH_TxParameters_r16_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NR_SL_PSSCH_TxParameters_r16_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_PSSCH_TxParameters_r16 = {
	"SL-PSSCH-TxParameters-r16",
	"SL-PSSCH-TxParameters-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1,
	sizeof(asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_PSSCH_TxParameters_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_PSSCH_TxParameters_r16_1,
	6,	/* Elements count */
	&asn_SPC_NR_SL_PSSCH_TxParameters_r16_specs_1	/* Additional specs */
};
