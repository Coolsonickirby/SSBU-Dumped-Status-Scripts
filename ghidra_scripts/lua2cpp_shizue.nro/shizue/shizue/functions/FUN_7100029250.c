
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100029250(undefined8 param_1,L2CValue *param_2,L2CValue *param_3)

{
  ulong uVar1;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_SPECIAL_N_TRAIT_HAVE_LIGHT);
  uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_SPECIAL_N_TRAIT_HAVE_HEAVY);
    uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_SPECIAL_N_TRAIT_USE);
      uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar1 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MURABITO_SPECIAL_N_TRAIT_EQUIP);
        uVar1 = lib::L2CValue::operator==(param_3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar1 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,0xe41920ee8);
          lib::L2CValue::operator=(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack80,0x1203c0fb27);
          lib::L2CValue::operator=(aLStack112,aLStack80);
          goto LAB_7100029470;
        }
      }
      lib::L2CValue::L2CValue(aLStack80,0xdb4809add);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x1154ed39f4);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xf9061776c);
      lib::L2CValue::operator=(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0x139bf8fab8);
      lib::L2CValue::operator=(aLStack112,aLStack80);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xe2e91695c);
    lib::L2CValue::operator=(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x126cc39c93);
    lib::L2CValue::operator=(aLStack112,aLStack80);
  }
LAB_7100029470:
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,param_2);
  lib::L2CValue::L2CValue(aLStack160,aLStack96);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_FALL);
  lib::L2CValue::L2CValue(aLStack224,_GROUND_CORRECT_KIND_GROUND_CLIFF_STOP_ATTACK);
  lib::L2CValue::L2CValue(aLStack240,GROUND_CORRECT_KIND_AIR);
  FUN_710001a8d0(aLStack128,param_1,aLStack144,aLStack160,aLStack176,aLStack192,aLStack208,
                 aLStack224,aLStack240);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack240);
  lib::L2CValue::~L2CValue(aLStack224);
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

