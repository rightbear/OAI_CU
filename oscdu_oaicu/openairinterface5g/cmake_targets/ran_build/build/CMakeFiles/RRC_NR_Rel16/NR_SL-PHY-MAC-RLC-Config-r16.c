/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_SL-PHY-MAC-RLC-Config-r16.h"

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
memb_NR_sl_FreqInfoToReleaseList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_sl_FreqInfoToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_sl_RLC_BearerToReleaseList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 512)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_sl_RLC_BearerToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 512)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_sl_SSB_PriorityNR_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_sl_FreqInfoToReleaseList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_FreqInfoToAddModList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_RLC_BearerToReleaseList_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_RLC_BearerToAddModList_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_MaxNumConsecutiveDTX_r16_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_CSI_Acquisition_r16_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_networkControlledSyncTx_r16_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_FreqInfoToReleaseList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_FreqInfoToAddModList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_RLC_BearerToReleaseList_r16_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_RLC_BearerToAddModList_r16_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_SSB_PriorityNR_r16_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_sl_FreqInfoToReleaseList_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_SL_Freq_Id_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_FreqInfoToReleaseList_r16_specs_4 = {
	sizeof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_FreqInfoToReleaseList_r16),
	offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_FreqInfoToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_FreqInfoToReleaseList_r16_4 = {
	"sl-FreqInfoToReleaseList-r16",
	"sl-FreqInfoToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4,
	sizeof(asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4)
		/sizeof(asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4)
		/sizeof(asn_DEF_NR_sl_FreqInfoToReleaseList_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_FreqInfoToReleaseList_r16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_sl_FreqInfoToReleaseList_r16_4,
	1,	/* Single element */
	&asn_SPC_NR_sl_FreqInfoToReleaseList_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_FreqInfoToAddModList_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SL_FreqConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_FreqInfoToAddModList_r16_specs_6 = {
	sizeof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_FreqInfoToAddModList_r16),
	offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_FreqInfoToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_FreqInfoToAddModList_r16_6 = {
	"sl-FreqInfoToAddModList-r16",
	"sl-FreqInfoToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6,
	sizeof(asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6)
		/sizeof(asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6)
		/sizeof(asn_DEF_NR_sl_FreqInfoToAddModList_r16_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_FreqInfoToAddModList_r16_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_NR_sl_FreqInfoToAddModList_r16_6,
	1,	/* Single element */
	&asn_SPC_NR_sl_FreqInfoToAddModList_r16_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_RLC_BearerToReleaseList_r16_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_SL_RLC_BearerConfigIndex_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_RLC_BearerToReleaseList_r16_specs_8 = {
	sizeof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_RLC_BearerToReleaseList_r16),
	offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_RLC_BearerToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_8 = {
	"sl-RLC-BearerToReleaseList-r16",
	"sl-RLC-BearerToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8,
	sizeof(asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8)
		/sizeof(asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8[0]) - 1, /* 1 */
	asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8,	/* Same as above */
	sizeof(asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8)
		/sizeof(asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_RLC_BearerToReleaseList_r16_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_NR_sl_RLC_BearerToReleaseList_r16_8,
	1,	/* Single element */
	&asn_SPC_NR_sl_RLC_BearerToReleaseList_r16_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_RLC_BearerToAddModList_r16_10[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SL_RLC_BearerConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_RLC_BearerToAddModList_r16_specs_10 = {
	sizeof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_RLC_BearerToAddModList_r16),
	offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16__sl_RLC_BearerToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_RLC_BearerToAddModList_r16_10 = {
	"sl-RLC-BearerToAddModList-r16",
	"sl-RLC-BearerToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10,
	sizeof(asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10)
		/sizeof(asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10[0]) - 1, /* 1 */
	asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10,	/* Same as above */
	sizeof(asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10)
		/sizeof(asn_DEF_NR_sl_RLC_BearerToAddModList_r16_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_RLC_BearerToAddModList_r16_constr_10, SEQUENCE_OF_constraint },
	asn_MBR_NR_sl_RLC_BearerToAddModList_r16_10,
	1,	/* Single element */
	&asn_SPC_NR_sl_RLC_BearerToAddModList_r16_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_MaxNumConsecutiveDTX_r16_value2enum_12[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n16" },
	{ 7,	3,	"n32" }
};
static const unsigned int asn_MAP_NR_sl_MaxNumConsecutiveDTX_r16_enum2value_12[] = {
	0,	/* n1(0) */
	6,	/* n16(6) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	7,	/* n32(7) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_MaxNumConsecutiveDTX_r16_specs_12 = {
	asn_MAP_NR_sl_MaxNumConsecutiveDTX_r16_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_MaxNumConsecutiveDTX_r16_enum2value_12,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_12 = {
	"sl-MaxNumConsecutiveDTX-r16",
	"sl-MaxNumConsecutiveDTX-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12,
	sizeof(asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12)
		/sizeof(asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12[0]) - 1, /* 1 */
	asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12,	/* Same as above */
	sizeof(asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12)
		/sizeof(asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_tags_12[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_MaxNumConsecutiveDTX_r16_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_MaxNumConsecutiveDTX_r16_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_CSI_Acquisition_r16_value2enum_21[] = {
	{ 0,	7,	"enabled" }
};
static const unsigned int asn_MAP_NR_sl_CSI_Acquisition_r16_enum2value_21[] = {
	0	/* enabled(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_CSI_Acquisition_r16_specs_21 = {
	asn_MAP_NR_sl_CSI_Acquisition_r16_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_CSI_Acquisition_r16_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_CSI_Acquisition_r16_21 = {
	"sl-CSI-Acquisition-r16",
	"sl-CSI-Acquisition-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21,
	sizeof(asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21)
		/sizeof(asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21)
		/sizeof(asn_DEF_NR_sl_CSI_Acquisition_r16_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_CSI_Acquisition_r16_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_CSI_Acquisition_r16_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_networkControlledSyncTx_r16_value2enum_25[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_NR_networkControlledSyncTx_r16_enum2value_25[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_networkControlledSyncTx_r16_specs_25 = {
	asn_MAP_NR_networkControlledSyncTx_r16_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_networkControlledSyncTx_r16_enum2value_25,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_networkControlledSyncTx_r16_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_networkControlledSyncTx_r16_25 = {
	"networkControlledSyncTx-r16",
	"networkControlledSyncTx-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_networkControlledSyncTx_r16_tags_25,
	sizeof(asn_DEF_NR_networkControlledSyncTx_r16_tags_25)
		/sizeof(asn_DEF_NR_networkControlledSyncTx_r16_tags_25[0]) - 1, /* 1 */
	asn_DEF_NR_networkControlledSyncTx_r16_tags_25,	/* Same as above */
	sizeof(asn_DEF_NR_networkControlledSyncTx_r16_tags_25)
		/sizeof(asn_DEF_NR_networkControlledSyncTx_r16_tags_25[0]), /* 2 */
	{ 0, &asn_PER_type_NR_networkControlledSyncTx_r16_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_networkControlledSyncTx_r16_specs_25	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_PHY_MAC_RLC_Config_r16_1[] = {
	{ ATF_POINTER, 11, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_ScheduledConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_ScheduledConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ScheduledConfig-r16"
		},
	{ ATF_POINTER, 10, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_UE_SelectedConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SL_UE_SelectedConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-UE-SelectedConfig-r16"
		},
	{ ATF_POINTER, 9, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_FreqInfoToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_sl_FreqInfoToReleaseList_r16_4,
		0,
		{ 0, &asn_PER_memb_NR_sl_FreqInfoToReleaseList_r16_constr_4,  memb_NR_sl_FreqInfoToReleaseList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-FreqInfoToReleaseList-r16"
		},
	{ ATF_POINTER, 8, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_FreqInfoToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_sl_FreqInfoToAddModList_r16_6,
		0,
		{ 0, &asn_PER_memb_NR_sl_FreqInfoToAddModList_r16_constr_6,  memb_NR_sl_FreqInfoToAddModList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-FreqInfoToAddModList-r16"
		},
	{ ATF_POINTER, 7, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_RLC_BearerToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_NR_sl_RLC_BearerToReleaseList_r16_8,
		0,
		{ 0, &asn_PER_memb_NR_sl_RLC_BearerToReleaseList_r16_constr_8,  memb_NR_sl_RLC_BearerToReleaseList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-RLC-BearerToReleaseList-r16"
		},
	{ ATF_POINTER, 6, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_RLC_BearerToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_NR_sl_RLC_BearerToAddModList_r16_10,
		0,
		{ 0, &asn_PER_memb_NR_sl_RLC_BearerToAddModList_r16_constr_10,  memb_NR_sl_RLC_BearerToAddModList_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-RLC-BearerToAddModList-r16"
		},
	{ ATF_POINTER, 5, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_MaxNumConsecutiveDTX_r16),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_MaxNumConsecutiveDTX_r16_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-MaxNumConsecutiveDTX-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_CSI_Acquisition_r16),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_CSI_Acquisition_r16_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CSI-Acquisition-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_CSI_SchedulingRequestId_r16),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_SchedulingRequestId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-CSI-SchedulingRequestId-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, sl_SSB_PriorityNR_r16),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_SSB_PriorityNR_r16_constr_24,  memb_NR_sl_SSB_PriorityNR_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-SSB-PriorityNR-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, networkControlledSyncTx_r16),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_networkControlledSyncTx_r16_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"networkControlledSyncTx-r16"
		},
};
static const int asn_MAP_NR_SL_PHY_MAC_RLC_Config_r16_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_PHY_MAC_RLC_Config_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-ScheduledConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-UE-SelectedConfig-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sl-FreqInfoToReleaseList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sl-FreqInfoToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sl-RLC-BearerToReleaseList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sl-RLC-BearerToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sl-MaxNumConsecutiveDTX-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sl-CSI-Acquisition-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sl-CSI-SchedulingRequestId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sl-SSB-PriorityNR-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* networkControlledSyncTx-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PHY_MAC_RLC_Config_r16_specs_1 = {
	sizeof(struct NR_SL_PHY_MAC_RLC_Config_r16),
	offsetof(struct NR_SL_PHY_MAC_RLC_Config_r16, _asn_ctx),
	asn_MAP_NR_SL_PHY_MAC_RLC_Config_r16_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_NR_SL_PHY_MAC_RLC_Config_r16_oms_1,	/* Optional members */
	11, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16 = {
	"SL-PHY-MAC-RLC-Config-r16",
	"SL-PHY-MAC-RLC-Config-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1,
	sizeof(asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_PHY_MAC_RLC_Config_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_PHY_MAC_RLC_Config_r16_1,
	11,	/* Elements count */
	&asn_SPC_NR_SL_PHY_MAC_RLC_Config_r16_specs_1	/* Additional specs */
};
