#ifndef POKEHEARTGOLD_NITROCRYPTO_H
#define POKEHEARTGOLD_NITROCRYPTO_H

#include <global.h>

// RC4 encryption functions
void CRYPTO_RC4Encrypt(void *rc4State, const void *input, void *output, int length);

// Signature verification functions  
int CRYPTO_VerifySignature(const void *signature, int sigLen, const void *data, int dataLen);
int CRYPTO_VerifySignatureWithHash(const void *signature, int sigLen, const void *data, int dataLen, const void *hash);

// ASN.1 parsing functions
void ParseSignHash(void *buffer, int param1, int param2);
int SkipPadding(const void *data, int dataLen);
int ASN1Skip(const void *data, int dataLen, int tagType);

// RSA cryptographic functions
void CRYPTOi_RSA(void *rsaCtx, void *output, const void *input, int inputLen);

// Big number arithmetic functions
void BN_mod_exp_mont(void *result, const void *base, const void *exp, const void *mod, void *montCtx);
void BN_mod_exp_recp(void *result, const void *base, const void *exp, const void *mod, void *recpCtx);
int bn_div_words(int hi, int lo, int divisor);
void BN_reciprocal(void *result, const void *mod, int bits);
void BN_div_recp(void *result, const void *num, void *recpCtx);
void BN_mod_mul_reciprocal(void *result, const void *a, const void *b, const void *mod, void *recpCtx);
void BN_RECP_CTX_set(void *recpCtx, const void *mod, int bits);
void BN_RECP_CTX_free(void *recpCtx);
void BN_RECP_CTX_init(void *recpCtx);

// Montgomery context functions
void BN_MONT_CTX_free(void *montCtx);
void BN_MONT_CTX_init(void *montCtx);
void *BN_MONT_CTX_new(void);
void BN_MONT_CTX_set_word(void *montCtx, int word);

// Big number exponentiation
void BN_gen_exp_string(void *result, const void *base, const void *exp, const void *mod);
void BN_gen_exp_bits(void *result, const void *base, int expBits, const void *mod);
int BN_mod_inverse_word(int a, int m);
void bn_from_montgomery_words(void *result, const void *words, int numWords, void *montCtx);

// Square functions
void bn_sqr_normal(void *result, const void *input, int numWords);
void BN_sqr(void *result, const void *input, int numWords);

// Modular exponentiation
void BN_mod_exp(void *result, const void *base, const void *exp, const void *mod, void *ctx);
void BN_mod(void *result, const void *num, const void *mod);
void BN_div(void *quotient, void *remainder, const void *dividend, const void *divisor);

// Multiplication functions
void bn_mul_normal(void *result, const void *a, const void *b, int numWords);
void BN_mul(void *result, const void *a, const void *b, int numWords);

// Addition/subtraction functions
void BN_sub(void *result, const void *a, const void *b, int numWords);
void BN_usub(void *result, const void *a, const void *b, int numWords);
void BN_uadd(void *result, const void *a, const void *b, int numWords);
void BN_add(void *result, const void *a, const void *b, int numWords);
void BN_sub_word(void *bn, int word);
void BN_add_word(void *bn, int word);

// Shift functions
void BN_rshift(void *result, const void *a, int shift);
void BN_lshift(void *result, const void *a, int shift);

// Word-level operations
void bn_sub_words(void *result, const void *a, const void *b, int numWords);
void bn_add_words(void *result, const void *a, const void *b, int numWords);
void bn_sqr_words(void *result, const void *a, int numWords);
void bn_mul_words(void *result, const void *a, int multiplier, int numWords);
void bn_mul_add_words(void *result, const void *a, int multiplier, int numWords);

// Bit operations
int BN_is_bit_set(const void *bn, int bit);
void BN_set_bit(void *bn, int bit);
int BN_ucmp(const void *a, const void *b);

// Conversion functions
void BN_bn2bin(const void *bn, void *output);
void BN_bin2bn(const void *input, int len, void *bn);
void BN_set_word(void *bn, int word);
void BN_clear(void *bn);
void BN_copy(void *dest, const void *src);
void *bn_expand2(void *bn, int numWords);

// Context functions
void BN_CTX_free(void *ctx);
void BN_CTX_init(void *ctx);
void *BN_CTX_new(void);
void *BN_new(void);
void BN_init(void *bn);
void bn_fix_top(void *bn);
void *bn_zexpand(void *bn, int numWords);
void BN_free(void *bn);
void BN_clear_free(void *bn);
int BN_num_bits(const void *bn);
int BN_num_bits_word(int word);

// Memory allocation
void CRYPTO_SetAllocator(void *(*alloc)(int), void (*free)(void *));
void CRYPTOi_MyFree(void *ptr);
void *CRYPTOi_MyAlloc(int size);

#endif // POKEHEARTGOLD_NITROCRYPTO_H