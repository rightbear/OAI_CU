/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#include "NR_PUCCH-ResourceGroup-r16.h"

static int
memb_NR_resourcePerGroupList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 128)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_resourcePerGroupList_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_resourcePerGroupList_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  128 }	/* (SIZE(1..128)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_resourcePerGroupList_r16_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NR_PUCCH_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_resourcePerGroupList_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_resourcePerGroupList_r16_specs_3 = {
	sizeof(struct NR_PUCCH_ResourceGroup_r16__resourcePerGroupList_r16),
	offsetof(struct NR_PUCCH_ResourceGroup_r16__resourcePerGroupList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_resourcePerGroupList_r16_3 = {
	"resourcePerGroupList-r16",
	"resourcePerGroupList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_resourcePerGroupList_r16_tags_3,
	sizeof(asn_DEF_NR_resourcePerGroupList_r16_tags_3)
		/sizeof(asn_DEF_NR_resourcePerGroupList_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_resourcePerGroupList_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_resourcePerGroupList_r16_tags_3)
		/sizeof(asn_DEF_NR_resourcePerGroupList_r16_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_resourcePerGroupList_r16_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_NR_resourcePerGroupList_r16_3,
	1,	/* Single element */
	&asn_SPC_NR_resourcePerGroupList_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_PUCCH_ResourceGroup_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PUCCH_ResourceGroup_r16, pucch_ResourceGroupId_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PUCCH_ResourceGroupId_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pucch-ResourceGroupId-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_PUCCH_ResourceGroup_r16, resourcePerGroupList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_resourcePerGroupList_r16_3,
		0,
		{ 0, &asn_PER_memb_NR_resourcePerGroupList_r16_constr_3,  memb_NR_resourcePerGroupList_r16_constraint_1 },
		0, 0, /* No default value */
		"resourcePerGroupList-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_PUCCH_ResourceGroup_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pucch-ResourceGroupId-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* resourcePerGroupList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_PUCCH_ResourceGroup_r16_specs_1 = {
	sizeof(struct NR_PUCCH_ResourceGroup_r16),
	offsetof(struct NR_PUCCH_ResourceGroup_r16, _asn_ctx),
	asn_MAP_NR_PUCCH_ResourceGroup_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_PUCCH_ResourceGroup_r16 = {
	"PUCCH-ResourceGroup-r16",
	"PUCCH-ResourceGroup-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1,
	sizeof(asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1)
		/sizeof(asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1)
		/sizeof(asn_DEF_NR_PUCCH_ResourceGroup_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_PUCCH_ResourceGroup_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_PUCCH_ResourceGroup_r16_specs_1	/* Additional specs */
};
