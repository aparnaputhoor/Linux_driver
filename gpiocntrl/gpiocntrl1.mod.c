#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb944b71, "gpiod_set_value" },
	{ 0x13929d91, "gpio_to_desc" },
	{ 0x2565c607, "gpiod_direction_output" },
	{ 0x54e5a03b, "gpiod_direction_input" },
	{ 0x6889c85f, "gpiod_get_value" },
	{ 0x122c3a7e, "_printk" },
	{ 0x39ff040a, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D323DD48C20ECA50A11DC6");
