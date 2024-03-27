import clr #package pythonnet, not clr
import time
import os
import serial

connection = serial.Serial('COM6',115200) # <- Change this to match your COM port!

CPU_List = [["Temperature", "CPU Package", 0.0, "C"],
            ["Fan",         "Fan #1",      0,   "RPM"],
            ["Fan",         "Fan #2",      0,   "RPM"],
            ["Load",        "CPU Total",   0,   "%"],
            ["Power",       "CPU Package", 0.0, "W"]]       
GPU_List = [["Temperature", "GPU Core",  0.0, "C"],
            ["Fan",         "GPU",       0,   "RPM"],
            ["Load",        "GPU Core",  0,   "%"],
            ["Power",       "GPU Power", 0.0, "W"]]
MEM_List = [["Load", "Memory",           0,    "%"],
            ["Data", "Used Memory",      0.00, "GB"],
            ["Data", "Available Memory", 0.00, "GB"]]

#hardware_types = ['Mainboard','SuperIO','CPU','RAM','GpuNvidia','GpuAti','TBalancer','Heatmaster','HDD']
#sensor_types = ['Voltage','Clock','Temperature','Load','Fan','Flow','Control','Level','Factor','Power','Data','SmallData']
openhardwaremonitor_sensortypes = ['Voltage','Clock','Temperature','Load','Fan','Flow','Control','Level','Factor','Power','Data','SmallData']

def initialize_openhardwaremonitor():
    file = 'OpenHardwareMonitorLib'
   
    clr.AddReference(file) 
   
    from OpenHardwareMonitor import Hardware

    handle = Hardware.Computer()
    handle.MainboardEnabled = True 
    handle.CPUEnabled = True
    handle.RAMEnabled = True
    handle.GPUEnabled = True
    handle.HDDEnabled = False

    handle.Open()
    return handle

def sendData():
    try:
        temp  = CPU_List[0][2]
        rpm1  = CPU_List[1][2]
        rpm2  = CPU_List[2][2]
        load  = CPU_List[3][2]
        power = CPU_List[4][2]
        #data  = str(temp) + ',' + str(rpm1) + ',' + str(rpm2) + ',' + str(load) + ',' + str(power) + '/'
        data  = "CPU" + "#" + str(temp) + '#' + str(rpm1) + '#' + str(rpm2) + '#' + str(load)+ '#' + str(power) + "#" + '\n'
        '''
        data = "CPU" 
        data = data + "#" + "TEMP" + "#" + str(temp)
        data = data + "#" + "FAN1" + "#" + str(rpm1)
        data = data + "#" + "FAN2" + "#" + str(rpm2)
        data = data + "#" + "LOAD" + "#" + str(load)
        data = data + "#" + "POWE" + "#" + str(power)
        data = data + "#" + '\n'
        ''' 
        connection.write(data.encode())
        print("Data written", data.encode())

        temp  = GPU_List[0][2]
        rpm1  = GPU_List[1][2]
        rpm2  = "0"
        load  = GPU_List[2][2]
        power = GPU_List[3][2]
        data  = "GPU" + "#" + str(temp) + '#' + str(rpm1) + '#' + str(rpm2) + '#' + str(load)+ '#' + str(power) + "#" + '\n'
        connection.write(data.encode())
        print("Data written", data.encode())


        connection.close  
    except Exception as e:
        print(e)


def fetch_stats(handle):
    for i in handle.Hardware:
        i.Update()
        for sensor in i.Sensors:
            parse_sensor(sensor)
           
        for j in i.SubHardware:
            j.Update()
            for subsensor in j.Sensors:
                parse_sensor(subsensor)


def parse_sensor(sensor):
    if sensor.Value is not None:
        for cpu in CPU_List:
            if str(sensor.SensorType) == cpu[0]:
                if str(sensor.Name) == cpu[1]:
                    cpu[2] = float("{:.1f}".format(sensor.Value))
        for gpu in GPU_List:
            if str(sensor.SensorType) == gpu[0]:
                if str(sensor.Name) == gpu[1]:
                    gpu[2] = float("{:.1f}".format(sensor.Value))
        for mem in MEM_List:
            if str(sensor.SensorType) == mem[0]:
                if str(sensor.Name) == mem[1]:
                    mem[2] = float("{:.1f}".format(sensor.Value))
            

def borrarPantalla():
    if os.name == "posix":
        os.system("clear")
    elif os.name == "ce" or os.name == "nt" or os.name == "dos":
        os.system("cls")


if __name__ == "__main__":
    while (True):
        borrarPantalla()
        print("OpenHardwareMonitor: \n")
        HardwareHandle = initialize_openhardwaremonitor()
        fetch_stats(HardwareHandle)
        print("CPU List") 
        for z in CPU_List:
            print(z[0],z[1],z[2],z[3])
        print("GPU List") 
        for z in GPU_List:
            print(z[0],z[1],z[2],z[3])
          
        '''
        print("MEM List") 
        for z in MEM_List:
            print(z[0],z[1],z[2],z[3])
        ''' 
        print()
        sendData()    
        time.sleep(5)