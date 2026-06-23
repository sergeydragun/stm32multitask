//
// Created by sergey on 6/23/26.
//

#include "tasks.h"


#define led_blinking_task_size 256U

static TaskHandle_t task_led_blinking_handle;

static void task_led_blinking(void *pvParameters);

static void task_temperature(void *pvParameters);

int32_t app_sync_tasks_init()
{
    BaseType_t task_status;

    task_status = xTaskCreate(task_led_blinking, "task_led_blinking",
        led_blinking_task_size, (void*)NULL, 1, &task_led_blinking_handle);
}
