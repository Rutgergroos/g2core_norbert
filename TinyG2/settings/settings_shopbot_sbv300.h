/*
 * settings_shapeoko375.h - Shopbot Test
 * This file is part of the TinyG project
 *
 * Copyright (c) 2015 Alden S. Hart, Jr.
 *
 * This file ("the software") is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2 as published by the
 * Free Software Foundation. You should have received a copy of the GNU General Public
 * License, version 2 along with the software.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, you may use this file as part of a software library without
 * restriction. Specifically, if other files instantiate templates or use macros or
 * inline functions from this file, or you compile this file and link it with  other
 * files to produce an executable, this file does not by itself cause the resulting
 * executable to be covered by the GNU General Public License. This exception does not
 * however invalidate any other reasons why the executable file might be covered by the
 * GNU General Public License.
 *
 * THE SOFTWARE IS DISTRIBUTED IN THE HOPE THAT IT WILL BE USEFUL, BUT WITHOUT ANY
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
/* Note: The values in this file are the default settings that are loaded
 * 		 into a virgin EEPROM, and can be changed using the config commands.
 *		 After initial load the EEPROM values (or changed values) are used.
 *
 *		 System and hardware settings that you shouldn't need to change
 *		 are in system.h  Application settings that also shouldn't need
 *		 to be changed are in tinyg.h
 */

/***********************************************************************/
/**** Shopbot Test profile ******************************************/
/***********************************************************************/
/*
 * NOTES:
 *  - This profile supports the Shopbot sbv300 board
 */

// ***> NOTE: The init message must be a single line with no CRs or LFs
#define INIT_MESSAGE "Initializing configs to Shopbot sbv300 profile"

//**** GLOBAL / GENERAL SETTINGS ******************************************************

#define JUNCTION_DEVIATION          0.1                     // default value, in mm - larger is faster
#define JUNCTION_ACCELERATION       (5000 * 25.4)           // centripetal acceleration around corners

#define CHORDAL_TOLERANCE           0.001					// chordal accuracy for arc drawing (in mm)
#define SOFT_LIMIT_ENABLE           0						// 0=off, 1=on
#define PAUSE_DWELL_TIME            0.0

#define MIN_ARC_SEGMENT_LEN         ((float)0.1)	        // default minimum arc segment length in mm

#define SWITCH_TYPE                 SW_TYPE_NORMALLY_CLOSED // SW_TYPE_NORMALLY_OPEN, SW_TYPE_NORMALLY_CLOSED

// Communications and reporting settings

#define COMM_MODE                   JSON_MODE               // one of: TEXT_MODE, JSON_MODE
#define COM_EXPAND_CR               false
#define COM_ENABLE_ECHO             false
#define COM_ENABLE_FLOW_CONTROL     FLOW_CONTROL_XON        // FLOW_CONTROL_OFF, FLOW_CONTROL_XON, FLOW_CONTROL_RTS
#define NETWORK_MODE                NETWORK_STANDALONE

#define TEXT_VERBOSITY              TV_VERBOSE              // one of: TV_SILENT, TV_VERBOSE

#define JSON_VERBOSITY              JV_MESSAGES             // one of: JV_SILENT, JV_FOOTER, JV_CONFIGS, JV_MESSAGES, JV_LINENUM, JV_VERBOSE
#define JSON_SYNTAX_MODE            JSON_SYNTAX_STRICT      // one of JSON_SYNTAX_RELAXED, JSON_SYNTAX_STRICT
#define JSON_FOOTER_STYLE           1                       // 1 = footer w/checksum, 2 = footer w/window slots
#define JSON_FOOTER_DEPTH           0                       // 0 = footer is child of R, 1 = footer is child of response object (deprecated)

#define QUEUE_REPORT_VERBOSITY		QR_TRIPLE		// one of: QR_OFF, QR_SINGLE, QR_TRIPLE

#define STATUS_REPORT_VERBOSITY     SR_FILTERED             // one of: SR_OFF, SR_FILTERED, SR_VERBOSE
#define STATUS_REPORT_MIN_MS        100                     // milliseconds - enforces a viable minimum
#define STATUS_REPORT_INTERVAL_MS   250                     // milliseconds - set $SV=0 to disable
#define STATUS_REPORT_DEFAULTS "posx","posy","posz","posa","posb","vel","stat","hold","line","coor"

// Gcode startup defaults
#define GCODE_DEFAULT_UNITS         INCHES                  // MILLIMETERS or INCHES
#define GCODE_DEFAULT_PLANE         CANON_PLANE_XY          // CANON_PLANE_XY, CANON_PLANE_XZ, or CANON_PLANE_YZ
#define GCODE_DEFAULT_COORD_SYSTEM  G55                     // G54, G55, G56, G57, G58 or G59
#define GCODE_DEFAULT_PATH_CONTROL  PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_MODE

// *** motor settings ************************************************************************************

#define MOTOR_POWER_MODE            MOTOR_POWERED_IN_CYCLE  // default motor power mode (see cmMotorPowerMode in stepper.h)
#define MOTOR_POWER_TIMEOUT         2.00                    // motor power timeout in seconds
#define MOTOR_POWER_LEVEL           0.375                   // default motor power level 0.00 - 1.00 (ARM only)

#define M1_MOTOR_MAP 			    AXIS_X				// 1ma
#define M1_STEP_ANGLE		    	1.8					// 1sa
#define M1_TRAVEL_PER_REV   		(0.5 * 25.4)		// 1tr
#define M1_MICROSTEPS		    	10					// 1mi		1,2,4,8
#define M1_POLARITY		    		0					// 1po		0=normal, 1=reversed
#define M1_POWER_MODE		    	MOTOR_POWER_MODE	// 1pm		TRUE=low power idle enabled
#define M1_POWER_LEVEL		    	MOTOR_POWER_LEVEL	// 1pl		Irrelevant to Shopbot sbv300

#define M2_MOTOR_MAP		    	AXIS_Y
#define M2_STEP_ANGLE		    	1.8
#define M2_TRAVEL_PER_REV	    	(0.5 * 25.4)
#define M2_MICROSTEPS		    	10
#define M2_POLARITY			    	0
#define M2_POWER_MODE		    	MOTOR_POWER_MODE
#define M2_POWER_LEVEL		    	MOTOR_POWER_LEVEL

#define M3_MOTOR_MAP		    	AXIS_Z
#define M3_STEP_ANGLE		    	1.8
#define M3_TRAVEL_PER_REV	    	(0.5 * 25.4)
#define M3_MICROSTEPS		    	10
#define M3_POLARITY			    	0
#define M3_POWER_MODE		    	MOTOR_POWER_MODE
#define M3_POWER_LEVEL		    	MOTOR_POWER_LEVEL

#define M4_MOTOR_MAP			    AXIS_A
#define M4_STEP_ANGLE		    	1.8
#define M4_TRAVEL_PER_REV	    	(0.5 * 25.4)
#define M4_MICROSTEPS		    	10
#define M4_POLARITY			    	0
#define M4_POWER_MODE		    	MOTOR_POWER_MODE
#define M4_POWER_LEVEL		    	MOTOR_POWER_LEVEL

#if (MOTORS >= 5)
#define M5_MOTOR_MAP	    		AXIS_B
#define M5_STEP_ANGLE	    		1.8
#define M5_TRAVEL_PER_REV   		(0.5 * 25.4)
#define M5_MICROSTEPS	    		10
#define M5_POLARITY		    		0
#define M5_POWER_MODE	    		MOTOR_POWER_MODE
#define M5_POWER_LEVEL	    		MOTOR_POWER_LEVEL

#define M6_MOTOR_MAP		    	AXIS_C
#define M6_STEP_ANGLE		    	1.8
#define M6_TRAVEL_PER_REV	    	(0.5 * 25.4)
#define M6_MICROSTEPS		    	10
#define M6_POLARITY			    	0
#define M6_POWER_MODE		    	MOTOR_POWER_MODE
#define M6_POWER_LEVEL		    	MOTOR_POWER_LEVEL
#endif

// *** axis settings ***

#define X_AXIS_MODE		    		AXIS_STANDARD			// xam	see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX			    (360 * 25.4) 			// xvm	G0 max velocity in mm/min
#define X_FEEDRATE_MAX		    	X_VELOCITY_MAX			// xfr 	G1 max feed rate in mm/min
#define X_TRAVEL_MIN		    	0						// xtn	minimum travel for soft limits
#define X_TRAVEL_MAX		    	(25 * 25.4)				// xtm	travel between switches or crashes
#define X_JERK_MAX			    	(2 * 25.4)				// xjm	jerk is multipled by 1,000,000 internally
#define X_JERK_HIGH_SPEED		    10000					// xjh
#define X_JUNCTION_DEVIATION    	JUNCTION_DEVIATION		// xjd
#define X_SWITCH_MODE_MIN	    	SW_MODE_HOMING			// xsn	SW_MODE_DISABLED, SW_MODE_HOMING, SW_MODE_LIMIT, SW_MODE_HOMING_LIMIT
#define X_SWITCH_MODE_MAX 	    	SW_MODE_DISABLED		// xsx	SW_MODE_DISABLED, SW_MODE_HOMING, SW_MODE_LIMIT, SW_MODE_HOMING_LIMIT
#define X_SWITCH_TYPE_MIN           SW_TYPE_NORMALLY_CLOSED	// rsn	SW_TYPE_NORMALLY_OPEN, SW_TYPE_NORMALLY_CLOSED
#define X_SWITCH_TYPE_MAX           SW_TYPE_NORMALLY_CLOSED	// rsx  SW_TYPE_NORMALLY_OPEN, SW_TYPE_NORMALLY_CLOSED
#define X_SEARCH_VELOCITY	    	(60 * 25.4)				// xsv	minus means move to minimum switch
#define X_LATCH_VELOCITY	    	(30 * 25.4)				// xlv	mm/min
#define X_LATCH_BACKOFF		    	(0.125 * 25.4)			// xlb	mm
#define X_ZERO_BACKOFF		    	(0.375 * 25.4)			// xzb	mm

#define Y_AXIS_MODE			    	AXIS_STANDARD
#define Y_VELOCITY_MAX		    	(360 * 25.4)
#define Y_FEEDRATE_MAX		    	Y_VELOCITY_MAX
#define Y_TRAVEL_MIN		    	0
#define Y_TRAVEL_MAX		    	(19 * 25.4)
#define Y_JERK_MAX			    	(2 * 25.4)
#define Y_JERK_HIGH_SPEED		    10000
#define Y_JUNCTION_DEVIATION    	JUNCTION_DEVIATION
#define Y_SWITCH_MODE_MIN	    	SW_MODE_HOMING
#define Y_SWITCH_MODE_MAX		    SW_MODE_DISABLED
#define Y_SWITCH_TYPE_MIN           SW_TYPE_NORMALLY_CLOSED
#define Y_SWITCH_TYPE_MAX           SW_TYPE_NORMALLY_CLOSED
#define Y_SEARCH_VELOCITY	    	(60 * 25.4)
#define Y_LATCH_VELOCITY	    	(30 * 25.4)
#define Y_LATCH_BACKOFF		    	(0.125 * 25.4)
#define Y_ZERO_BACKOFF		    	(0.375 * 25.4)

#define Z_AXIS_MODE			       	AXIS_STANDARD
#define Z_VELOCITY_MAX		    	(360 * 25.4)
#define Z_FEEDRATE_MAX		    	Z_VELOCITY_MAX
#define Z_TRAVEL_MAX		    	(6.5 * 25.4)
#define Z_TRAVEL_MIN		    	0
#define Z_JERK_MAX			    	(2 * 25.4)
#define Z_JERK_HIGH_SPEED		    1000
#define Z_JUNCTION_DEVIATION    	0.05
#define Z_SWITCH_MODE_MIN	    	SW_MODE_DISABLED
#define Z_SWITCH_MODE_MAX	    	SW_MODE_HOMING
#define Z_SWITCH_TYPE_MIN           SW_TYPE_NORMALLY_CLOSED
#define Z_SWITCH_TYPE_MAX           SW_TYPE_NORMALLY_CLOSED
#define Z_SEARCH_VELOCITY	    	(60 * 25.4)
#define Z_LATCH_VELOCITY	    	(30 * 25.4)
#define Z_LATCH_BACKOFF		    	(0.125 * 25.4)
#define Z_ZERO_BACKOFF		    	(0.375 * 25.4)

#define A_AXIS_MODE			    	AXIS_STANDARD
#define A_VELOCITY_MAX		    	(360 * 25.4)
#define A_FEEDRATE_MAX		    	48000
#define A_TRAVEL_MIN		    	-1					// degrees
#define A_TRAVEL_MAX 		    	-1					// same value means infinite, no limit
#define A_JERK_MAX			    	(2 * 25.4)
#define A_JERK_HIGH_SPEED		    A_JERK_MAX
#define A_JUNCTION_DEVIATION    	0.1
#define A_RADIUS			    	1.0
#define A_SWITCH_MODE_MIN	    	SW_MODE_DISABLED
#define A_SWITCH_MODE_MAX	    	SW_MODE_DISABLED
#define A_SWITCH_TYPE_MIN           SW_TYPE_NORMALLY_CLOSED
#define A_SWITCH_TYPE_MAX           SW_TYPE_NORMALLY_CLOSED
#define A_SEARCH_VELOCITY	    	(60 * 25.4)
#define A_LATCH_VELOCITY	    	(30 * 25.4)
#define A_LATCH_BACKOFF		    	(0.125 * 25.4)
#define A_ZERO_BACKOFF		    	(0.375 * 25.4)

#define B_AXIS_MODE			    	AXIS_DISABLED
#define B_VELOCITY_MAX		    	(360 * 25.4)
#define B_FEEDRATE_MAX		    	B_VELOCITY_MAX
#define B_TRAVEL_MAX		    	-1
#define B_TRAVEL_MIN		    	-1
#define B_JERK_MAX			    	(2 * 25.4)
#define B_JERK_HIGH_SPEED		    	B_JERK_MAX
#define B_JUNCTION_DEVIATION    	JUNCTION_DEVIATION
#define B_RADIUS			    	1
#define B_SWITCH_MODE_MIN	    	SW_MODE_DISABLED
#define B_SWITCH_MODE_MAX	    	SW_MODE_DISABLED
#define B_SWITCH_TYPE_MIN           SW_TYPE_NORMALLY_CLOSED
#define B_SWITCH_TYPE_MAX           SW_TYPE_NORMALLY_CLOSED
#define B_SEARCH_VELOCITY	    	(60 * 25.4)
#define B_LATCH_VELOCITY	    	(30 * 25.4)
#define B_LATCH_BACKOFF		    	(0.125 * 25.4)
#define B_ZERO_BACKOFF		    	(0.375 * 25.4)

#define C_AXIS_MODE			    	AXIS_DISABLED
#define C_VELOCITY_MAX		    	(360 * 25.4)
#define C_FEEDRATE_MAX		    	C_VELOCITY_MAX
#define C_TRAVEL_MAX		    	-1
#define C_TRAVEL_MIN		    	-1
#define C_JERK_MAX			    	(2 * 25.4)
#define C_JERK_HIGH_SPEED		    	C_JERK_MAX
#define C_JUNCTION_DEVIATION    	JUNCTION_DEVIATION
#define C_RADIUS			    	1
#define C_SWITCH_MODE_MIN	    	SW_MODE_DISABLED
#define C_SWITCH_MODE_MAX	    	SW_MODE_DISABLED
#define C_SWITCH_TYPE_MIN           SW_TYPE_NORMALLY_CLOSED
#define C_SWITCH_TYPE_MAX           SW_TYPE_NORMALLY_CLOSED
#define C_SEARCH_VELOCITY	    	(60 * 25.4)
#define C_LATCH_VELOCITY	    	(30 * 25.4)
#define C_LATCH_BACKOFF		    	(0.125 * 25.4)
#define C_ZERO_BACKOFF		    	(0.375 * 25.4)

//*** Input / output settings ***

#define DEFAULT_MODE                NORMALLY_CLOSED
#define DEFAULT_ACTION              IO_ACTION_NONE
#define DEFAULT_FUNCTION            IO_FUNCTION_NONE

#define DI1_MODE                    DEFAULT_MODE
#define DI1_ACTION                  DEFAULT_ACTION
#define DI1_FUNCTION                DEFAULT_FUNCTION

#define DI2_MODE                    DEFAULT_MODE
#define DI2_ACTION                  DEFAULT_ACTION
#define DI2_FUNCTION                DEFAULT_FUNCTION

#define DI3_MODE                    DEFAULT_MODE
#define DI3_ACTION                  DEFAULT_ACTION
#define DI3_FUNCTION                DEFAULT_FUNCTION

#define DI4_MODE                    DEFAULT_MODE
#define DI4_ACTION                  DEFAULT_ACTION
#define DI4_FUNCTION                DEFAULT_FUNCTION

#define DI5_MODE                    DEFAULT_MODE
#define DI5_ACTION                  DEFAULT_ACTION
#define DI5_FUNCTION                DEFAULT_FUNCTION

#define DI6_MODE                    DEFAULT_MODE
#define DI6_ACTION                  DEFAULT_ACTION
#define DI6_FUNCTION                DEFAULT_FUNCTION

#define DI7_MODE                    DEFAULT_MODE
#define DI7_ACTION                  DEFAULT_ACTION
#define DI7_FUNCTION                DEFAULT_FUNCTION

#define DI8_MODE                    DEFAULT_MODE
#define DI8_ACTION                  DEFAULT_ACTION
#define DI8_FUNCTION                DEFAULT_FUNCTION

#define DI9_MODE                    DEFAULT_MODE
#define DI9_ACTION                  DEFAULT_ACTION
#define DI9_FUNCTION                DEFAULT_FUNCTION

/*** Handle optional modules that may not be in every machine ***/

// If PWM_1 is not defined fill it with default values
#ifndef	P1_PWM_FREQUENCY

#define P1_PWM_FREQUENCY            100                     // in Hz
#define P1_CW_SPEED_LO              1000                    // in RPM (arbitrary units)
#define P1_CW_SPEED_HI              2000
#define P1_CW_PHASE_LO              0.125                   // phase [0..1]
#define P1_CW_PHASE_HI              0.2
#define P1_CCW_SPEED_LO             1000
#define P1_CCW_SPEED_HI             2000
#define P1_CCW_PHASE_LO             0.125
#define P1_CCW_PHASE_HI             0.2
#define P1_PWM_PHASE_OFF            0.1
#endif //P1_PWM_FREQUENCY

// *** DEFAULT COORDINATE SYSTEM OFFSETS ***
// Our convention is:
//	- leave G54 in machine coordinates to act as a persistent absolute coordinate system
//	- set G55 to be a zero in the middle of the table
//	- no action for the others

#define G54_X_OFFSET 0			// G54 is traditionally set to all zeros
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0
#define G54_A_OFFSET 0
#define G54_B_OFFSET 0
#define G54_C_OFFSET 0

#define G55_X_OFFSET 0
#define G55_Y_OFFSET 0
#define G55_Z_OFFSET 0
#define G55_A_OFFSET 0
#define G55_B_OFFSET 0
#define G55_C_OFFSET 0

#define G56_X_OFFSET 0
#define G56_Y_OFFSET 0
#define G56_Z_OFFSET 0
#define G56_A_OFFSET 0
#define G56_B_OFFSET 0
#define G56_C_OFFSET 0

#define G57_X_OFFSET 0
#define G57_Y_OFFSET 0
#define G57_Z_OFFSET 0
#define G57_A_OFFSET 0
#define G57_B_OFFSET 0
#define G57_C_OFFSET 0

#define G58_X_OFFSET 0
#define G58_Y_OFFSET 0
#define G58_Z_OFFSET 0
#define G58_A_OFFSET 0
#define G58_B_OFFSET 0
#define G58_C_OFFSET 0

#define G59_X_OFFSET 0
#define G59_Y_OFFSET 0
#define G59_Z_OFFSET 0
#define G59_A_OFFSET 0
#define G59_B_OFFSET 0
#define G59_C_OFFSET 0

/*** User-Defined Data Defaults ***/

#define USER_DATA_A0 0
#define USER_DATA_A1 0
#define USER_DATA_A2 0
#define USER_DATA_A3 0
#define USER_DATA_B0 0
#define USER_DATA_B1 0
#define USER_DATA_B2 0
#define USER_DATA_B3 0
#define USER_DATA_C0 0
#define USER_DATA_C1 0
#define USER_DATA_C2 0
#define USER_DATA_C3 0
#define USER_DATA_D0 0
#define USER_DATA_D1 0
#define USER_DATA_D2 0
#define USER_DATA_D3 0


