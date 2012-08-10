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
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xb992e103, "no_llseek" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x8e4bc2f2, "spi_new_device" },
	{ 0xd785ed8f, "spi_busnum_to_master" },
	{ 0x9d669763, "memcpy" },
	{ 0x645398e5, "spi_register_driver" },
	{ 0x173e3df6, "__class_create" },
	{ 0xc8e4b965, "__register_chrdev" },
	{ 0xeef7e544, "put_device" },
	{ 0x8579b823, "spi_setup" },
	{ 0xcfd107be, "get_device" },
	{ 0xad998077, "complete" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x2f4ea1ac, "wait_for_completion" },
	{ 0x464ab222, "spi_async" },
	{ 0x5f754e5a, "memset" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xd7ed4622, "nonseekable_open" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa8e11f3, "class_destroy" },
	{ 0xcd441ba9, "driver_unregister" },
	{ 0x364dcef4, "device_unregister" },
	{ 0x24be0f0b, "kmalloc_caches" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x30b9d264, "dev_printk" },
	{ 0x6da77257, "device_create" },
	{ 0xd3dbfbc4, "_find_first_zero_bit_le" },
	{ 0x36480d96, "__mutex_init" },
	{ 0x9c1ddc53, "kmem_cache_alloc_trace" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x1ea53469, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9ddf60fb, "device_destroy" },
	{ 0x8189a585, "mutex_lock" },
	{ 0xaea99e9d, "_raw_spin_unlock_irq" },
	{ 0x3e4feab1, "dev_set_drvdata" },
	{ 0xe551272c, "_raw_spin_lock_irq" },
	{ 0x4f796e11, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

