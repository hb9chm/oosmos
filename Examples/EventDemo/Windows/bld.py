
oosmos_dir = r'..\..\..'

import sys
sys.path.append(oosmos_dir)
import oosmos
import os

key_c    = oosmos_dir+r'\Classes\Windows\key.c'
pin_c    = oosmos_dir+r'\Classes\pin.c'
sw_c     = oosmos_dir+r'\Classes\sw.c'
oosmos_c = oosmos_dir+r'\Source\oosmos.c'

INCLUDE = os.path.normpath(oosmos_dir+r'\Classes\Windows')

os.system(oosmos_dir + r'\..\GenDev\bin\gen.exe EventDemo.json')
#os.system(r'..\..\..\Gen\gen.exe EventDemo.json')
oosmos.cWindows.Compile(oosmos_dir, ['main.c','control.c',pin_c,key_c,sw_c,'motor.c','pump.c',oosmos_c], '-Doosmos_ORTHO -I'+INCLUDE)
