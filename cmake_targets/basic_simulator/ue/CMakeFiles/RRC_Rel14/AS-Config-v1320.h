/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_AS_Config_v1320_H_
#define	_AS_Config_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SCellToAddModListExt_r13;
struct RCLWI_Configuration_r13;

/* AS-Config-v1320 */
typedef struct AS_Config_v1320 {
	struct SCellToAddModListExt_r13	*sourceSCellConfigList_r13;	/* OPTIONAL */
	struct RCLWI_Configuration_r13	*sourceRCLWI_Configuration_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Config_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Config_v1320;
extern asn_SEQUENCE_specifics_t asn_SPC_AS_Config_v1320_specs_1;
extern asn_TYPE_member_t asn_MBR_AS_Config_v1320_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SCellToAddModListExt-r13.h"
#include "RCLWI-Configuration-r13.h"

#endif	/* _AS_Config_v1320_H_ */
#include <asn_internal.h>