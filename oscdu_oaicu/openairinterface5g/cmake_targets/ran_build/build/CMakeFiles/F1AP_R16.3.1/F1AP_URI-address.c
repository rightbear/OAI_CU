/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/F1AP/MESSAGES/ASN1/R16.3.1/F1AP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/F1AP_R16.3.1`
 */

#include "F1AP_URI-address.h"

/*
 * This type is implemented using VisibleString,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_F1AP_URI_address_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  126 }	/* (32..126) */,
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER character map necessary */
};
static const ber_tlv_tag_t asn_DEF_F1AP_URI_address_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (26 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_URI_address = {
	"URI-address",
	"URI-address",
	&asn_OP_VisibleString,
	asn_DEF_F1AP_URI_address_tags_1,
	sizeof(asn_DEF_F1AP_URI_address_tags_1)
		/sizeof(asn_DEF_F1AP_URI_address_tags_1[0]), /* 1 */
	asn_DEF_F1AP_URI_address_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_URI_address_tags_1)
		/sizeof(asn_DEF_F1AP_URI_address_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_F1AP_URI_address_constr_1, VisibleString_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};
