
#ifndef __LED_96BOARD_H__
#define __LED_96BOARD_H__


#include <linux/wakelock.h>

#include <linux/miscdevice.h>
#include <linux/platform_device.h>

#include <linux/slab.h>
#include <linux/module.h>
//#include <linux/earlysuspend.h>

//dangchaobing add

//#include <mach/mt_gpio.h>

#include <linux/timer.h>
#include <linux/jiffies.h>
#include  <linux/delay.h>


//end

#define COPTER_TAG					"<COPTER> "
#define COPTER_FUN(f)				printk(COPTER_TAG"%s\n", __func__)
#define COPTER_ERR(fmt, args...)	printk(COPTER_TAG"%s %d : "fmt, __func__, __LINE__, ##args)
#define COPTER_LOG(fmt, args...)	printk(COPTER_TAG fmt, ##args)
#define COPTER_VER(fmt, args...)   	printk(COPTER_TAG"%s: "fmt, __func__, ##args) //((void)0)


struct led_96board_context
{
	struct miscdevice   mdev;
	struct work_struct  report;
	struct mutex led_96board_op_mutex;
	
    int   led0;
	int   led1;
	int   led2;
	int   led3;
	int   led4;
	int   led5;
	int   leds;
};

#endif
