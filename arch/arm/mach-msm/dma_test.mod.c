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
	{ 0xb9c96961, "misc_register" },
	{ 0xd53cd7b5, "membank0_size" },
	{ 0x46ce1a07, "membank1_start" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0xdf397353, "msm_dmov_exec_cmd" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x82ead7b4, "up" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x37877f94, "down" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x24be0f0b, "kmalloc_caches" },
	{ 0x5f754e5a, "memset" },
	{ 0x9c1ddc53, "kmem_cache_alloc_trace" },
	{ 0x449f0a9a, "misc_deregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9C80854EE50AF7E8572E891");
