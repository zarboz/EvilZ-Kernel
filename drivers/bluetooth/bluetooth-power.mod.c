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
	{ 0x7de527af, "platform_driver_register" },
	{ 0xbff727a9, "rfkill_register" },
	{ 0x25d61f24, "rfkill_init_sw_state" },
	{ 0x2a8eb53c, "rfkill_alloc" },
	{ 0x8349d85f, "dev_err" },
	{ 0x3e4feab1, "dev_set_drvdata" },
	{ 0x5086e5e4, "rfkill_destroy" },
	{ 0x513feb95, "rfkill_unregister" },
	{ 0x4f796e11, "dev_get_drvdata" },
	{ 0x30b9d264, "dev_printk" },
	{ 0x8aeb1527, "platform_driver_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5135EFD2BE07BA9DA21C97E");
