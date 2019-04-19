/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SIB_MappingInfo_MBMS_r14_H_
#define	_SIB_MappingInfo_MBMS_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type-MBMS-r14.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIB-MappingInfo-MBMS-r14 */
typedef struct SIB_MappingInfo_MBMS_r14 {
	A_SEQUENCE_OF(SIB_Type_MBMS_r14_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB_MappingInfo_MBMS_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIB_MappingInfo_MBMS_r14;
extern asn_SET_OF_specifics_t asn_SPC_SIB_MappingInfo_MBMS_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB_MappingInfo_MBMS_r14_1[1];
extern asn_per_constraints_t asn_PER_type_SIB_MappingInfo_MBMS_r14_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SIB_MappingInfo_MBMS_r14_H_ */
#include <asn_internal.h>