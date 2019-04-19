/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_BandCombinationParameters_v1320_H_
#define	_BandCombinationParameters_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BandCombinationParameters_v1320__additionalRx_Tx_PerformanceReq_r13 {
	BandCombinationParameters_v1320__additionalRx_Tx_PerformanceReq_r13_supported	= 0
} e_BandCombinationParameters_v1320__additionalRx_Tx_PerformanceReq_r13;

/* Forward declarations */
struct BandParameters_v1320;

/* BandCombinationParameters-v1320 */
typedef struct BandCombinationParameters_v1320 {
	struct BandCombinationParameters_v1320__bandParameterList_v1320 {
		A_SEQUENCE_OF(struct BandParameters_v1320) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *bandParameterList_v1320;
	long	*additionalRx_Tx_PerformanceReq_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BandCombinationParameters_v1320_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_additionalRx_Tx_PerformanceReq_r13_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1320_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BandParameters-v1320.h"

#endif	/* _BandCombinationParameters_v1320_H_ */
#include <asn_internal.h>