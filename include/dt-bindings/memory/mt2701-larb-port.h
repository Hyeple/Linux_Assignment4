/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2015 MediaTek Inc.
 * Author: Honghui Zhang <honghui.zhang@mediatek.com>
 */

#ifndef _MT2701_LARB_PORT_H_
#define _MT2701_LARB_PORT_H_

/*
 * Mediatek m4u generation 1 such as mt2701 has flat m4u port numbers,
 * the first port's id for larb[N] would be the last port's id of larb[N - 1]
 * plus one while larb[0]'s first port number is 0. The definition of
 * MT2701_M4U_ID_LARBx is following HW register spec.
 * But m4u generation 2 like mt8173 have different port number, it use fixed
 * offset for each larb, the first port's id for larb[N] would be (N * 32).
 */
#define LARB0_PORT_OFFSET		0
#define LARB1_PORT_OFFSET		11
#define LARB2_PORT_OFFSET		21
#define LARB3_PORT_OFFSET		44

#define MT2701_M4U_ID_LARB0(port)	((port) + LARB0_PORT_OFFSET)
#define MT2701_M4U_ID_LARB1(port)	((port) + LARB1_PORT_OFFSET)
#define MT2701_M4U_ID_LARB2(port)	((port) + LARB2_PORT_OFFSET)

/* Port define for larb0 */
#define MT2701_M4U_PORT_DISP_OVL_0		MT2701_M4U_ID_LARB0(0)
#define MT2701_M4U_PORT_DISP_RDMA1		MT2701_M4U_ID_LARB0(1)
#define MT2701_M4U_PORT_DISP_RDMA		MT2701_M4U_ID_LARB0(2)
#define MT2701_M4U_PORT_DISP_WDMA		MT2701_M4U_ID_LARB0(3)
#define MT2701_M4U_PORT_MM_CMDQ			MT2701_M4U_ID_LARB0(4)
#define MT2701_M4U_PORT_MDP_RDMA		MT2701_M4U_ID_LARB0(5)
#define MT2701_M4U_PORT_MDP_WDMA		MT2701_M4U_ID_LARB0(6)
#define MT2701_M4U_PORT_MDP_ROTO		MT2701_M4U_ID_LARB0(7)
#define MT2701_M4U_PORT_MDP_ROTCO		MT2701_M4U_ID_LARB0(8)
#define MT2701_M4U_PORT_MDP_ROTVO		MT2701_M4U_ID_LARB0(9)
#define MT2701_M4U_PORT_MDP_RDMA1		MT2701_M4U_ID_LARB0(10)

/* Port define for larb1 */
#define MT2701_M4U_PORT_VDEC_MC_EXT		MT2701_M4U_ID_LARB1(0)
#define MT2701_M4U_PORT_VDEC_PP_EXT		MT2701_M4U_ID_LARB1(1)
#define MT2701_M4U_PORT_VDEC_PPWRAP_EXT		MT2701_M4U_ID_LARB1(2)
#define MT2701_M4U_PORT_VDEC_AVC_MV_EXT		MT2701_M4U_ID_LARB1(3)
#define MT2701_M4U_PORT_VDEC_PRED_RD_EXT	MT2701_M4U_ID_LARB1(4)
#define MT2701_M4U_PORT_VDEC_PRED_WR_EXT	MT2701_M4U_ID_LARB1(5)
#define MT2701_M4U_PORT_VDEC_VLD_EXT		MT2701_M4U_ID_LARB1(6)
#define MT2701_M4U_PORT_VDEC_VLD2_EXT		MT2701_M4U_ID_LARB1(7)
#define MT2701_M4U_PORT_VDEC_TILE_EXT		MT2701_M4U_ID_LARB1(8)
#define MT2701_M4U_PORT_VDEC_IMG_RESZ_EXT	MT2701_M4U_ID_LARB1(9)

/* Port define for larb2 */
#define MT2701_M4U_PORT_VENC_RCPU		MT2701_M4U_ID_LARB2(0)
#define MT2701_M4U_PORT_VENC_REC_FRM		MT2701_M4U_ID_LARB2(1)
#define MT2701_M4U_PORT_VENC_BSDMA		MT2701_M4U_ID_LARB2(2)
#define MT2701_M4U_PORT_JPGENC_RDMA		MT2701_M4U_ID_LARB2(3)
#define MT2701_M4U_PORT_VENC_LT_RCPU		MT2701_M4U_ID_LARB2(4)
#define MT2701_M4U_PORT_VENC_LT_REC_FRM		MT2701_M4U_ID_LARB2(5)
#define MT2701_M4U_PORT_VENC_LT_BSDMA		MT2701_M4U_ID_LARB2(6)
#define MT2701_M4U_PORT_JPGDEC_BSDMA		MT2701_M4U_ID_LARB2(7)
#define MT2701_M4U_PORT_VENC_SV_COMV		MT2701_M4U_ID_LARB2(8)
#define MT2701_M4U_PORT_VENC_RD_COMV		MT2701_M4U_ID_LARB2(9)
#define MT2701_M4U_PORT_JPGENC_BSDMA		MT2701_M4U_ID_LARB2(10)
#define MT2701_M4U_PORT_VENC_CUR_LUMA		MT2701_M4U_ID_LARB2(11)
#define MT2701_M4U_PORT_VENC_CUR_CHROMA		MT2701_M4U_ID_LARB2(12)
#define MT2701_M4U_PORT_VENC_REF_LUMA		MT2701_M4U_ID_LARB2(13)
#define MT2701_M4U_PORT_VENC_REF_CHROMA		MT2701_M4U_ID_LARB2(14)
#define MT2701_M4U_PORT_IMG_RESZ		MT2701_M4U_ID_LARB2(15)
#define MT2701_M4U_PORT_VENC_LT_SV_COMV		MT2701_M4U_ID_LARB2(16)
#define MT2701_M4U_PORT_VENC_LT_RD_COMV		MT2701_M4U_ID_LARB2(17)
#define MT2701_M4U_PORT_VENC_LT_CUR_LUMA	MT2701_M4U_ID_LARB2(18)
#define MT2701_M4U_PORT_VENC_LT_CUR_CHROMA	MT2701_M4U_ID_LARB2(19)
#define MT2701_M4U_PORT_VENC_LT_REF_LUMA	MT2701_M4U_ID_LARB2(20)
#define MT2701_M4U_PORT_VENC_LT_REF_CHROMA	MT2701_M4U_ID_LARB2(21)
#define MT2701_M4U_PORT_JPGDEC_WDMA		MT2701_M4U_ID_LARB2(22)

#endif
