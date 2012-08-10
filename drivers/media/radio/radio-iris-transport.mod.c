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
	{ 0xbc7f6622, "smd_read_avail" },
	{ 0x602376d, "smd_read" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xdb778733, "kfree_skb" },
	{ 0x44708bab, "smd_write" },
	{ 0xc135495b, "radio_hci_unregister_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f1cf294, "radio_hci_recv_frame" },
	{ 0x9d669763, "memcpy" },
	{ 0x5aa43f9d, "skb_put" },
	{ 0xe188190b, "__alloc_skb" },
	{ 0x8949858b, "schedule_work" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x24be0f0b, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x20e0fb20, "radio_hci_register_dev" },
	{ 0x881e63b, "smd_disable_read_intr" },
	{ 0x308e855f, "smd_named_open_on_edge" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9c1ddc53, "kmem_cache_alloc_trace" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe831cfe8, "smd_close" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

