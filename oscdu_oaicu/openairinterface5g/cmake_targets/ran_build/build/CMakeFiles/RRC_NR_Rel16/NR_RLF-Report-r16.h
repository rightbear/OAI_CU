/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "/home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/openair2/RRC/NR/MESSAGES/asn1c/ASN1_files/nr-rrc-16.4.1.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D /home/mwnl/cyctest/oscdu_oaicu/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/RRC_NR_Rel16`
 */

#ifndef	_NR_RLF_Report_r16_H_
#define	_NR_RLF_Report_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_MeasResultRLFNR-r16.h"
#include "NR_RNTI-Value.h"
#include "NR_TimeUntilReconnection-16.h"
#include <NativeInteger.h>
#include "NR_TimeSinceFailure-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "NR_PhysCellId.h"
#include "NR_ARFCN-ValueNR.h"
#include "NR_EUTRA-PhysCellId.h"
#include "NR_ARFCN-ValueEUTRA.h"
#include "NR_CGI-InfoEUTRALogging.h"
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RLF_Report_r16_PR {
	NR_RLF_Report_r16_PR_NOTHING,	/* No components present */
	NR_RLF_Report_r16_PR_nr_RLF_Report_r16,
	NR_RLF_Report_r16_PR_eutra_RLF_Report_r16
} NR_RLF_Report_r16_PR;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16_PR {
	NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16_PR_NOTHING,	/* No components present */
	NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16_PR_nrPreviousCell_r16,
	NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16_PR_eutraPreviousCell_r16
} NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16_PR;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16_PR {
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16_PR_NOTHING,	/* No components present */
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16_PR_nrFailedPCellId_r16,
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16_PR_eutraFailedPCellId_r16
} NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16_PR;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16_PR {
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16_PR_NOTHING,	/* No components present */
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16_PR_cellGlobalId_r16,
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16_PR_pci_arfcn_r16
} NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16_PR;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16_PR {
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16_PR_NOTHING,	/* No components present */
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16_PR_cellGlobalId_r16,
	NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16_PR_pci_arfcn_r16
} NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16_PR;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16_PR {
	NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16_PR_NOTHING,	/* No components present */
	NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16_PR_nrReconnectCellId_r16,
	NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16_PR_eutraReconnectCellId_r16
} NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16_PR;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__connectionFailureType_r16 {
	NR_RLF_Report_r16__nr_RLF_Report_r16__connectionFailureType_r16_rlf	= 0,
	NR_RLF_Report_r16__nr_RLF_Report_r16__connectionFailureType_r16_hof	= 1
} e_NR_RLF_Report_r16__nr_RLF_Report_r16__connectionFailureType_r16;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16 {
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_t310_Expiry	= 0,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_randomAccessProblem	= 1,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_rlc_MaxNumRetx	= 2,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_beamFailureRecoveryFailure	= 3,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_lbtFailure_r16	= 4,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_bh_rlfRecoveryFailure	= 5,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_spare2	= 6,
	NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16_spare1	= 7
} e_NR_RLF_Report_r16__nr_RLF_Report_r16__rlf_Cause_r16;
typedef enum NR_RLF_Report_r16__nr_RLF_Report_r16__noSuitableCellFound_r16 {
	NR_RLF_Report_r16__nr_RLF_Report_r16__noSuitableCellFound_r16_true	= 0
} e_NR_RLF_Report_r16__nr_RLF_Report_r16__noSuitableCellFound_r16;

/* Forward declarations */
struct NR_CGI_Info_Logging_r16;
struct NR_LocationInfo_r16;
struct NR_RA_InformationCommon_r16;
struct NR_MeasResultList2NR_r16;
struct NR_MeasResultList2EUTRA_r16;
struct NR_CGI_InfoEUTRALogging;

/* NR_RLF-Report-r16 */
typedef struct NR_RLF_Report_r16 {
	NR_RLF_Report_r16_PR present;
	union NR_RLF_Report_r16_u {
		struct NR_RLF_Report_r16__nr_RLF_Report_r16 {
			NR_MeasResultRLFNR_r16_t	 measResultLastServCell_r16;
			struct NR_RLF_Report_r16__nr_RLF_Report_r16__measResultNeighCells_r16 {
				struct NR_MeasResultList2NR_r16	*measResultListNR_r16;	/* OPTIONAL */
				struct NR_MeasResultList2EUTRA_r16	*measResultListEUTRA_r16;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *measResultNeighCells_r16;
			NR_RNTI_Value_t	 c_RNTI_r16;
			struct NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16 {
				NR_RLF_Report_r16__nr_RLF_Report_r16__previousPCellId_r16_PR present;
				union NR_RLF_Report_r16__NR_nr_RLF_Report_r16__NR_previousPCellId_r16_u {
					struct NR_CGI_Info_Logging_r16	*nrPreviousCell_r16;
					struct NR_CGI_InfoEUTRALogging	*eutraPreviousCell_r16;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *previousPCellId_r16;
			struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16 {
				NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16_PR present;
				union NR_RLF_Report_r16__NR_nr_RLF_Report_r16__NR_failedPCellId_r16_u {
					struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16 {
						NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16_PR present;
						union NR_RLF_Report_r16__NR_nr_RLF_Report_r16__NR_failedPCellId_r16__NR_nrFailedPCellId_r16_u {
							struct NR_CGI_Info_Logging_r16	*cellGlobalId_r16;
							struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__nrFailedPCellId_r16__pci_arfcn_r16 {
								NR_PhysCellId_t	 physCellId_r16;
								NR_ARFCN_ValueNR_t	 carrierFreq_r16;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *pci_arfcn_r16;
						} choice;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nrFailedPCellId_r16;
					struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16 {
						NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16_PR present;
						union NR_RLF_Report_r16__NR_nr_RLF_Report_r16__NR_failedPCellId_r16__NR_eutraFailedPCellId_r16_u {
							struct NR_CGI_InfoEUTRALogging	*cellGlobalId_r16;
							struct NR_RLF_Report_r16__nr_RLF_Report_r16__failedPCellId_r16__eutraFailedPCellId_r16__pci_arfcn_r16 {
								NR_EUTRA_PhysCellId_t	 physCellId_r16;
								NR_ARFCN_ValueEUTRA_t	 carrierFreq_r16;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *pci_arfcn_r16;
						} choice;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *eutraFailedPCellId_r16;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} failedPCellId_r16;
			struct NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16 {
				NR_RLF_Report_r16__nr_RLF_Report_r16__reconnectCellId_r16_PR present;
				union NR_RLF_Report_r16__NR_nr_RLF_Report_r16__NR_reconnectCellId_r16_u {
					struct NR_CGI_Info_Logging_r16	*nrReconnectCellId_r16;
					struct NR_CGI_InfoEUTRALogging	*eutraReconnectCellId_r16;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *reconnectCellId_r16;
			NR_TimeUntilReconnection_16_t	*timeUntilReconnection_16;	/* OPTIONAL */
			struct NR_CGI_Info_Logging_r16	*reestablishmentCellId_r16;	/* OPTIONAL */
			long	*timeConnFailure_r16;	/* OPTIONAL */
			NR_TimeSinceFailure_r16_t	 timeSinceFailure_r16;
			long	 connectionFailureType_r16;
			long	 rlf_Cause_r16;
			struct NR_LocationInfo_r16	*locationInfo_r16;	/* OPTIONAL */
			long	*noSuitableCellFound_r16;	/* OPTIONAL */
			struct NR_RA_InformationCommon_r16	*ra_InformationCommon_r16;	/* OPTIONAL */
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr_RLF_Report_r16;
		struct NR_RLF_Report_r16__eutra_RLF_Report_r16 {
			NR_CGI_InfoEUTRALogging_t	 failedPCellId_EUTRA;
			OCTET_STRING_t	 measResult_RLF_Report_EUTRA_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *eutra_RLF_Report_r16;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RLF_Report_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_connectionFailureType_r16_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rlf_Cause_r16_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_noSuitableCellFound_r16_42;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RLF_Report_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_RLF_Report_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RLF_Report_r16_1[2];
extern asn_per_constraints_t asn_PER_type_NR_RLF_Report_r16_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CGI-Info-Logging-r16.h"
#include "NR_LocationInfo-r16.h"
#include "NR_RA-InformationCommon-r16.h"
#include "NR_MeasResultList2NR-r16.h"
#include "NR_MeasResultList2EUTRA-r16.h"
#include "NR_CGI-InfoEUTRALogging.h"

#endif	/* _NR_RLF_Report_r16_H_ */
#include <asn_internal.h>