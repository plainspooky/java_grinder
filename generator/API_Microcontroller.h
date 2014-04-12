/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2014 by Michael Kohn
 *
 */

#ifndef _API_MICROCONTROLLER_H
#define _API_MICROCONTROLLER_H

class API_Microcontroller
{
public:
  // GPIO functions
  virtual int ioport_setPinsAsInput(int port) { return -1; }
  virtual int ioport_setPinsAsInput(int port, int const_val) { return -1; }
  virtual int ioport_setPinsAsOutput(int port) { return -1; }
  virtual int ioport_setPinsAsOutput(int port, int const_val) { return -1; }
  virtual int ioport_setPinsValue(int port) { return -1; }
  virtual int ioport_setPinsValue(int port, int const_val) { return -1; }
  virtual int ioport_setPinsHigh(int port) { return -1; }
  virtual int ioport_setPinsHigh(int port, int const_val) { return -1; }
  virtual int ioport_setPinsLow(int port) { return -1; }
  virtual int ioport_setPinsLow(int port, int const_val) { return -1; }
  virtual int ioport_setPinAsOutput(int port) { return -1; }
  virtual int ioport_setPinAsOutput(int port, int const_val) { return -1; }
  virtual int ioport_setPinAsInput(int port) { return -1; }
  virtual int ioport_setPinAsInput(int port, int const_val) { return -1; }
  virtual int ioport_setPinHigh(int port) { return -1; }
  virtual int ioport_setPinHigh(int port, int const_val) { return -1; }
  virtual int ioport_setPinLow(int port) { return -1; }
  virtual int ioport_setPinLow(int port, int const_val) { return -1; }
  virtual int ioport_isPinInputHigh(int port) { return -1; }
  virtual int ioport_getPortInputValue(int port) { return -1; }
  //virtual int ioport_setPortOutputValue(int port) { return -1; }

  // UART functions
  virtual int uart_init(int port) { return -1; }
  virtual int uart_send(int port) { return -1; }
  virtual int uart_read(int port) { return -1; }
  virtual int uart_isDataAvailable(int port) { return -1; }
  virtual int uart_isSendReady(int port) { return -1; }

  // SPI functions
  virtual int spi_init(int port) { return -1; }
  virtual int spi_init(int port, int clock_divisor, int mode) { return -1; }
  virtual int spi_send(int port) { return -1; }
  virtual int spi_read(int port) { return -1; }
  virtual int spi_isDataAvailable(int port) { return -1; }
  virtual int spi_isBusy(int port) { return -1; }
  virtual int spi_disable(int port) { return -1; }
  virtual int spi_enable(int port) { return -1; }

  // ADC functions
  virtual int adc_enable() { return -1; }
  virtual int adc_disable() { return -1; }
  virtual int adc_setChannel_I() { return -1; }
  virtual int adc_setChannel_I(int channel) { return -1; }
  virtual int adc_read() { return -1; }

  // CPU functions
  virtual int cpu_setClock16() { return -1; }
  virtual int cpu_nop() { return -1; }
};

#endif
