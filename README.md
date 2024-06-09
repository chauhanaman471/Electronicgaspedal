# Electronic Gas Pedal - AUTOSAR RTE Concept

This project implements an Electronic Control Unit (ECU) following the AUTOSAR Runtime Environment (RTE) concept. The ECU controls an electronic gas pedal system with functionalities such as joystick reading, speed calculation, engine control, and brake light management. Additionally, the project includes timeout supervision and deadline monitoring for improved reliability and safety.

## Project Structure

- **Applications Software**: Contains user code runnables that communicate through RTE signal objects.
- **Basic Software (BSW)**: Includes drivers and OS, separated from application software by the RTE layer.
- **RTE Layer**: Facilitates message-based communication between runnables and manages events.

## Runnables

### `run_readJoystick`
- **Description**: Called every 10ms to update the joystick signal using `pullPort()`.
- **Behavior**: 
  - Fires an event upon joystick signal update.
  - Triggers `run_calcControl`.

### `run_calcControl`
- **Description**: Triggered by `run_readJoystick` update event.
- **Behavior**:
  - Checks the joystick signal (type `sint8_t`).
  - If the value > 0: Sets speed signal (`uint8_t`) to 2 x joystick value.
  - If the value ≤ 0: Sets engine value to 0.
  - Triggers `run_setBrakeLight`.

### `run_setEngine`
- **Description**: Called every 100ms to manage engine signal.
- **Behavior**:
  - Copies speed signal to engine signal if it is not too old, and calls the driver using `pushPort()`.
  - If the speed signal is too old, sets the engine value to 0.

### `run_setBrakeLight`
- **Description**: Triggered by speed signal update.
- **Behavior**:
  - Checks the speed value.
  - If speed = 0: Turns on the brakeLight signal.
  - If speed > 0: Turns off the brakeLight signal.
  - Sends brakeLight signal to the hardware.

## Supervision Concepts

### Timeout Supervision (Alive Monitoring)
- **Purpose**: To initiate a reboot in case the system halts (e.g., due to an endless loop or OS shutdown).
- **Implementation**: Monitors system activity and triggers a reboot if inactivity is detected beyond a specified timeout period.

### Deadline Monitoring
- **Purpose**: To supervise individual runnables and ensure they complete within their expected execution times.
- **Implementation**: Sets deadlines for each runnable and triggers error handling procedures if deadlines are missed.

