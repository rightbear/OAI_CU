/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_Rel15`
 */

#include "LTE_HandoverPreparationInformation-r8-IEs.h"

asn_TYPE_member_t asn_MBR_LTE_HandoverPreparationInformation_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_HandoverPreparationInformation_r8_IEs, ue_RadioAccessCapabilityInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_UE_CapabilityRAT_ContainerList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-RadioAccessCapabilityInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_HandoverPreparationInformation_r8_IEs, as_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"as-Config"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_HandoverPreparationInformation_r8_IEs, rrm_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRM_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrm-Config"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_HandoverPreparationInformation_r8_IEs, as_Context),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AS_Context,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"as-Context"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_HandoverPreparationInformation_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_HandoverPreparationInformation_v920_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_HandoverPreparationInformation_r8_IEs_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_HandoverPreparationInformation_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-RadioAccessCapabilityInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* as-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrm-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* as-Context */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_HandoverPreparationInformation_r8_IEs_specs_1 = {
	sizeof(struct LTE_HandoverPreparationInformation_r8_IEs),
	offsetof(struct LTE_HandoverPreparationInformation_r8_IEs, _asn_ctx),
	asn_MAP_LTE_HandoverPreparationInformation_r8_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_HandoverPreparationInformation_r8_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_HandoverPreparationInformation_r8_IEs = {
	"HandoverPreparationInformation-r8-IEs",
	"HandoverPreparationInformation-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1,
	sizeof(asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1)
		/sizeof(asn_DEF_LTE_HandoverPreparationInformation_r8_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_HandoverPreparationInformation_r8_IEs_1,
	5,	/* Elements count */
	&asn_SPC_LTE_HandoverPreparationInformation_r8_IEs_specs_1	/* Additional specs */
};
