
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022200(undefined8 param_1,L2CValue *param_2,L2CValue *param_3,L2CValue *param_4)

{
  L2CValue *pLVar1;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  app::WeaponShizueFishingrodLinkEventReel::new_l2c_table();
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack64,0xb72ef0e37);
  lib::L2CValue::operator=(pLVar1,param_2);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack64,0xba18e8045);
  lib::L2CValue::operator=(pLVar1,param_2);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack64,0xc21b85cd4);
  lib::L2CValue::operator=(pLVar1,param_3);
  pLVar1 = (L2CValue *)lib::L2CValue::operator[](aLStack64,0x87e8fbda0);
  lib::L2CValue::operator=(pLVar1,param_4);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  FUN_71000226c0(aLStack80,param_1,aLStack96,aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

