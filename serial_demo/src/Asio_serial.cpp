#include <string>
#include <vector>
#include "Asio_serial.h"

bool MySerialPort::init_port( const any_type port, const unsigned int char_size )
{
	//New not success
	if (!pSerialPort) return false;

    //Open Serial port object
    pSerialPort->open( port, ec );
	
	//Set port argument
	pSerialPort->set_option( serial_port::baud_rate( 9600 ), ec );
	pSerialPort->set_option( serial_port::flow_control( serial_port::flow_control::none ), ec );
	pSerialPort->set_option( serial_port::parity( serial_port::parity::none ), ec );
	pSerialPort->set_option( serial_port::stop_bits( serial_port::stop_bits::one ), ec);
	pSerialPort->set_option( serial_port::character_size( char_size ), ec);
 
	return true;
}

//Define wirte_to_serial to write data to serial
void MySerialPort::write_to_serial( const any_type data )
{
    size_t len = write( *pSerialPort, buffer( data ), ec );
    cout << len << "\t" << data << "\n";
}
 
void MySerialPort::handle_read( char buf[], boost::system::error_code ec,
	std::size_t bytes_transferred )
{
	cout << "\nhandle_read: ";
	cout.write(buf, bytes_transferred);
}

//Read data from the serial
void MySerialPort::read_from_serial()
{
    char v[10];
    async_read( *pSerialPort, buffer(v), boost::bind( &MySerialPort::handle_read, this, v, _1, _2) );
}