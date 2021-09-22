#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa11440c8, "module_layout" },
	{ 0x54a9396e, "i2c_del_driver" },
	{ 0x638e63d8, "i2c_register_driver" },
	{ 0x47d9df7f, "devm_kfree" },
	{ 0x887ed69f, "sysfs_create_bin_file" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbed00335, "kmem_cache_alloc_trace" },
	{ 0x55f8e9c0, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xade12dec, "devm_kmalloc" },
	{ 0xb1cf61ec, "i2c_smbus_write_byte_data" },
	{ 0xd3a48348, "i2c_smbus_read_byte" },
	{ 0x9d669763, "memcpy" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x10c2f8f5, "i2c_transfer_buffer_flags" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x332aed89, "i2c_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf4e33be1, "sysfs_remove_bin_file" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc5850110, "printk" },
	{ 0x4aa15572, "i2c_new_dummy_device" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5BA6AF28E06D9C1168608A");
