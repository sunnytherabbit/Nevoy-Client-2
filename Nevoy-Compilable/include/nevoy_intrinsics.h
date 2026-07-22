// Nevoy intrinsics compatibility layer
// Auto-generated stub implementations for RetDec __asm_* pseudo-functions.
#pragma once

#include <stdint.h>
#include <stddef.h>
#include <string.h>

struct cpuid_t { int32_t e0; int32_t e1; int32_t e2; int32_t e3; };

static inline int64_t __asm_addpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_addsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_addsd_23(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_addss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_addss_34(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_andpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_andps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_blsr_73(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_comisd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_comiss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline struct cpuid_t __asm_cpuid(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_12(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_13(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_14(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_15(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_32(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_33(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_83(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_84(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline struct cpuid_t __asm_cpuid_85(int64_t leaf) { (void)leaf; struct cpuid_t r={0,0,0,0}; return r; }

static inline int64_t __asm_cvtdq2pd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtdq2ps(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtpd2ps(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtps2pd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtsd2ss(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtsd2ss_43(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtsi2sd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtsi2sd_68(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtsi2ss(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtsi2ss_37(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtss2sd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtss2sd_41(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvtss2si(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttpd2dq(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttsd2si(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttsd2si_47(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttss2si(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttss2si_39(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttss2si_40(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_cvttss2si_45(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_divsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_divsd_42(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_divss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_divss_38(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_fnclex(void) { return 0; }

static inline int64_t __asm_in(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_in_82(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_insd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_int(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_int3(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_int_80(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_ldmxcsr(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_lzcnt(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movapd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movaps(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movaps_19(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movd_48(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movd_60(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_movdqa(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_movdqa_11(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movdqu(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_movdqu_18(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movq(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movq_20(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movsd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movsd_17(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movsd_24(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_movss(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movss_31(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_movss_46(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_movups(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_movups_16(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_mulpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_mulsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_mulsd_22(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_mulss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_mulss_35(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_orpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_orps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_out(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_out_81(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_paddd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pand(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pblendvb(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pcmpeqb(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pcmpeqd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pcmpeqq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pcmpeqw(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pcmpestri(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_pcmpestrm(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_pcmpgtd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pcmpistri(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_pinsrb(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_pmaxsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pminud(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pmovmskb(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_por(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_prefetchw(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_pshufb(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pshufd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pshuflw(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_psrldq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_psrlq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_psubd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_psubq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_ptest(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_punpcklbw(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_punpckldq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_punpcklqdq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_punpcklwd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_pxor(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_rep_movsb_memcpy(void *dest, const void *src, size_t n) { if (n) memmove(dest, src, n); return 0; }

static inline int64_t __asm_rep_stosb_memset(void *dest, int c, size_t n) { if (n) memset(dest, c, n); return 0; }

static inline int64_t __asm_rep_stosd_memset(void *dest, int c, size_t n) { if (n) memset(dest, c, n); return 0; }

static inline int64_t __asm_rep_stosq_memset(void *dest, int c, size_t n) { if (n) memset(dest, c, n); return 0; }

static inline int64_t __asm_roundsd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_roundss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_rsqrtss(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_shlx(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_shrx(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_sqrtss(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_stmxcsr(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_subps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_subsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_subsd_21(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_subss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_subss_36(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_tzcnt(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_ucomisd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_ucomisd_67(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_ucomiss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_ucomiss_44(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_unpcklpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vaddpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vaddsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vaddsd_50(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vaddss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vaddss_57(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vandnpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vandpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vandps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vblendvpd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vcmpltsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vcomisd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vcomiss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vcvtdq2pd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vcvtdq2ps(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vcvtps2pd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vcvtsd2ss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vcvtsi2sd_78(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vcvtss2sd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vcvtss2si(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vcvttpd2dq(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vdivsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vdivss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vfmadd213sd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmadd213sd_51(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmadd213ss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmadd231sd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmadd231sd_28(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmadd231ss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmsub213ss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfmsub213ss_75(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfnmadd132sd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfnmadd213sd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfnmadd213ss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfnmadd231sd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfnmadd231sd_62(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vfnmadd231ss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vinsertf128(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vmovapd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovaps(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovaps_55(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovd_49(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovdqa(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovdqa_29(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovdqu(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovdqu32(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovdqu32_70(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovdqu_52(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovdqu_58(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovmskps(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovntdq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovq(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovq_30(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovsd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovsd_27(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovsd_77(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovss(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vmovss_54(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmovss_61(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmulpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmulsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmulsd_26(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmulss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vmulss_56(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vorpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vorps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpaddd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpand(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpand_59(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpandn(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpblendvb(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vpbroadcastb(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpbroadcastb_72(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpbroadcastw(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpcmpeqb(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpcmpeqd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpcmpeqq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpcmpeqq_69(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpcmpeqw(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpcmpgtd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpermd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpermq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpinsrd(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vpmaskmovd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpmaxsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpminud(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpmovmskb(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpmovsxdq(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpmovzxbd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpmovzxbq(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpmovzxwd(int64_t a) { (void)a; return 0; }

static inline int64_t __asm_vpor(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpor_64(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpshufb(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpshufd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpshufd_66(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsllq_63(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsllvd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsrld(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsrldq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsrlq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsubd_65(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpsubq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vptest(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpunpckldq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpunpcklqdq(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpunpcklwd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vpxor(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vroundss(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vshufps(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_vsqrtss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vsubsd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vsubsd_25(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vsubss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vsubss_74(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vucomisd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vucomisd_79(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vucomiss(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vucomiss_53(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vunpcklpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vxorpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vxorps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_vzeroupper(int64_t a, int64_t b, int64_t c) { (void)a; (void)b; (void)c; return 0; }

static inline int64_t __asm_wait(void) { return 0; }

static inline int64_t __asm_xgetbv(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_xorpd(int64_t a, int64_t b) { (void)a; (void)b; return 0; }

static inline int64_t __asm_xorps(int64_t a, int64_t b) { (void)a; (void)b; return 0; }
