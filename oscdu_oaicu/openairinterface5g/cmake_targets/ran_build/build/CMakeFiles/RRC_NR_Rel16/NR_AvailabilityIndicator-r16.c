/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_AvailabilityIndicator-r16.h"

static int
memb_NR_dci_PayloadSizeAI_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 128)) {
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
memb_NR_availableCombToAddModList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_NR_availableCombToReleaseList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_NR_availableCombToAddModList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_availableCombToReleaseList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_dci_PayloadSizeAI_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (1..128) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_availableCombToAddModList_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_availableCombToReleaseList_r16_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 9,  9,  1,  512 }	/* (SIZE(1..512)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_availableCombToAddModList_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_AvailabilityCombinationsPerCell_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_availableCombToAddModList_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_availableCombToAddModList_r16_specs_4 = {
	sizeof(struct NR_AvailabilityIndicator_r16__availableCombToAddModList_r16),
	offsetof(struct NR_AvailabilityIndicator_r16__availableCombToAddModList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_availableCombToAddModList_r16_4 = {
	"availableCombToAddModList-r16",
	"availableCombToAddModList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_availableCombToAddModList_r16_tags_4,
	sizeof(asn_DEF_NR_availableCombToAddModList_r16_tags_4)
		/sizeof(asn_DEF_NR_availableCombToAddModList_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_availableCombToAddModList_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_availableCombToAddModList_r16_tags_4)
		/sizeof(asn_DEF_NR_availableCombToAddModList_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_availableCombToAddModList_r16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_availableCombToAddModList_r16_4,
	1,	/* Single element */
	&asn_SPC_NR_availableCombToAddModList_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_availableCombToReleaseList_r16_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_AvailabilityCombinationsPerCellIndex_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_availableCombToReleaseList_r16_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_availableCombToReleaseList_r16_specs_6 = {
	sizeof(struct NR_AvailabilityIndicator_r16__availableCombToReleaseList_r16),
	offsetof(struct NR_AvailabilityIndicator_r16__availableCombToReleaseList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_availableCombToReleaseList_r16_6 = {
	"availableCombToReleaseList-r16",
	"availableCombToReleaseList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_availableCombToReleaseList_r16_tags_6,
	sizeof(asn_DEF_NR_availableCombToReleaseList_r16_tags_6)
		/sizeof(asn_DEF_NR_availableCombToReleaseList_r16_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_availableCombToReleaseList_r16_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_availableCombToReleaseList_r16_tags_6)
		/sizeof(asn_DEF_NR_availableCombToReleaseList_r16_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_availableCombToReleaseList_r16_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_NR_availableCombToReleaseList_r16_6,
	1,	/* Single element */
	&asn_SPC_NR_availableCombToReleaseList_r16_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_AvailabilityIndicator_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_AvailabilityIndicator_r16, ai_RNTI_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_AI_RNTI_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ai-RNTI-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_AvailabilityIndicator_r16, dci_PayloadSizeAI_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_dci_PayloadSizeAI_r16_constr_3,  memb_NR_dci_PayloadSizeAI_r16_constraint_1 },
		0, 0, /* No default value */
		"dci-PayloadSizeAI-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_AvailabilityIndicator_r16, availableCombToAddModList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_availableCombToAddModList_r16_4,
		0,
		{ 0, &asn_PER_memb_NR_availableCombToAddModList_r16_constr_4,  memb_NR_availableCombToAddModList_r16_constraint_1 },
		0, 0, /* No default value */
		"availableCombToAddModList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_AvailabilityIndicator_r16, availableCombToReleaseList_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_availableCombToReleaseList_r16_6,
		0,
		{ 0, &asn_PER_memb_NR_availableCombToReleaseList_r16_constr_6,  memb_NR_availableCombToReleaseList_r16_constraint_1 },
		0, 0, /* No default value */
		"availableCombToReleaseList-r16"
		},
};
static const int asn_MAP_NR_AvailabilityIndicator_r16_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_AvailabilityIndicator_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_AvailabilityIndicator_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ai-RNTI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dci-PayloadSizeAI-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* availableCombToAddModList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* availableCombToReleaseList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_AvailabilityIndicator_r16_specs_1 = {
	sizeof(struct NR_AvailabilityIndicator_r16),
	offsetof(struct NR_AvailabilityIndicator_r16, _asn_ctx),
	asn_MAP_NR_AvailabilityIndicator_r16_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_AvailabilityIndicator_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_AvailabilityIndicator_r16 = {
	"AvailabilityIndicator-r16",
	"AvailabilityIndicator-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_AvailabilityIndicator_r16_tags_1,
	sizeof(asn_DEF_NR_AvailabilityIndicator_r16_tags_1)
		/sizeof(asn_DEF_NR_AvailabilityIndicator_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_AvailabilityIndicator_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_AvailabilityIndicator_r16_tags_1)
		/sizeof(asn_DEF_NR_AvailabilityIndicator_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_AvailabilityIndicator_r16_1,
	4,	/* Elements count */
	&asn_SPC_NR_AvailabilityIndicator_r16_specs_1	/* Additional specs */
};
