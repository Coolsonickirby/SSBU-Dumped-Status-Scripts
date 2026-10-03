
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000284d0(undefined8 param_1,L2CValue *param_2)

{
  L2CValue *this;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  app::WeaponShizueFishingrodLinkEventCliff::new_l2c_table();
  this = (L2CValue *)lib::L2CValue::operator[](aLStack48,0x690e0f93a);
  lib::L2CValue::operator=(this,param_2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_LINK_NO_CONSTRAINT);
  FUN_71000226c0(aLStack64,param_1,aLStack80,aLStack48);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack48);
  return;
}

