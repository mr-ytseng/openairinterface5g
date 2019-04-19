/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_P_C_AndCBSR_r13_H_
#define	_P_C_AndCBSR_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum P_C_AndCBSR_r13__cbsr_Selection_r13_PR {
	P_C_AndCBSR_r13__cbsr_Selection_r13_PR_NOTHING,	/* No components present */
	P_C_AndCBSR_r13__cbsr_Selection_r13_PR_nonPrecoded_r13,
	P_C_AndCBSR_r13__cbsr_Selection_r13_PR_beamformedK1a_r13,
	P_C_AndCBSR_r13__cbsr_Selection_r13_PR_beamformedKN_r13
} P_C_AndCBSR_r13__cbsr_Selection_r13_PR;

/* P-C-AndCBSR-r13 */
typedef struct P_C_AndCBSR_r13 {
	long	 p_C_r13;
	struct P_C_AndCBSR_r13__cbsr_Selection_r13 {
		P_C_AndCBSR_r13__cbsr_Selection_r13_PR present;
		union P_C_AndCBSR_r13__cbsr_Selection_r13_u {
			struct P_C_AndCBSR_r13__cbsr_Selection_r13__nonPrecoded_r13 {
				BIT_STRING_t	 codebookSubsetRestriction1_r13;
				BIT_STRING_t	 codebookSubsetRestriction2_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} nonPrecoded_r13;
			struct P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedK1a_r13 {
				BIT_STRING_t	 codebookSubsetRestriction3_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} beamformedK1a_r13;
			struct P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedKN_r13 {
				BIT_STRING_t	 codebookSubsetRestriction_r13;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} beamformedKN_r13;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cbsr_Selection_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} P_C_AndCBSR_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_P_C_AndCBSR_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_P_C_AndCBSR_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_P_C_AndCBSR_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _P_C_AndCBSR_r13_H_ */
#include <asn_internal.h>