/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "M3AP-IEs"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair3/M3AP/MESSAGES/ASN1/R14/m3ap-14.0.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/M3AP_R14`
 */

#include "M3AP_MBMS-Service-Area.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_M3AP_MBMS_Service_Area_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_M3AP_MBMS_Service_Area = {
	"MBMS-Service-Area",
	"MBMS-Service-Area",
	&asn_OP_OCTET_STRING,
	asn_DEF_M3AP_MBMS_Service_Area_tags_1,
	sizeof(asn_DEF_M3AP_MBMS_Service_Area_tags_1)
		/sizeof(asn_DEF_M3AP_MBMS_Service_Area_tags_1[0]), /* 1 */
	asn_DEF_M3AP_MBMS_Service_Area_tags_1,	/* Same as above */
	sizeof(asn_DEF_M3AP_MBMS_Service_Area_tags_1)
		/sizeof(asn_DEF_M3AP_MBMS_Service_Area_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};
