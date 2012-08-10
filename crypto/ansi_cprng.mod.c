#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x3719bcd3, "module_layout" },
	{ 0x5620108b, "crypto_rng_type" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x71c90087, "memcmp" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xf4b31b1e, "crypto_alloc_base" },
	{ 0xc73dd955, "_raw_spin_unlock_bh" },
	{ 0x27e1a049, "printk" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
	{ 0x3b502f70, "_raw_spin_lock_bh" },
	{ 0xd7f38cc7, "crypto_register_alg" },
	{ 0x80052e56, "crypto_destroy_tfm" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa0b0962a, "crypto_unregister_alg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

