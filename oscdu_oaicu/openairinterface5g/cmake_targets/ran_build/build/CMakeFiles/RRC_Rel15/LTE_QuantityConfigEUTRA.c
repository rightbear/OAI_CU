/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#include "LTE_QuantityConfigEUTRA.h"

static int asn_DFL_2_cmp_4(const void *sptr) {
	const LTE_FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_2_set_4(void **sptr) {
	LTE_FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
static int asn_DFL_3_cmp_4(const void *sptr) {
	const LTE_FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_3_set_4(void **sptr) {
	LTE_FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
asn_TYPE_member_t asn_MBR_LTE_QuantityConfigEUTRA_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_QuantityConfigEUTRA, filterCoefficientRSRP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_2_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_2_set_4,	/* Set DEFAULT 4 */
		"filterCoefficientRSRP"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_QuantityConfigEUTRA, filterCoefficientRSRQ),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_3_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_3_set_4,	/* Set DEFAULT 4 */
		"filterCoefficientRSRQ"
		},
};
static const int asn_MAP_LTE_QuantityConfigEUTRA_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_QuantityConfigEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_QuantityConfigEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* filterCoefficientRSRP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* filterCoefficientRSRQ */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_QuantityConfigEUTRA_specs_1 = {
	sizeof(struct LTE_QuantityConfigEUTRA),
	offsetof(struct LTE_QuantityConfigEUTRA, _asn_ctx),
	asn_MAP_LTE_QuantityConfigEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_QuantityConfigEUTRA_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_QuantityConfigEUTRA = {
	"QuantityConfigEUTRA",
	"QuantityConfigEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_QuantityConfigEUTRA_tags_1,
	sizeof(asn_DEF_LTE_QuantityConfigEUTRA_tags_1)
		/sizeof(asn_DEF_LTE_QuantityConfigEUTRA_tags_1[0]), /* 1 */
	asn_DEF_LTE_QuantityConfigEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_QuantityConfigEUTRA_tags_1)
		/sizeof(asn_DEF_LTE_QuantityConfigEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_QuantityConfigEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_LTE_QuantityConfigEUTRA_specs_1	/* Additional specs */
};
