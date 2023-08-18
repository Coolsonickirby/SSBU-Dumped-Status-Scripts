
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRobotHominglaser::status::Fly_end(L2CWeaponRobotHominglaser *this,L2CValue *return_value)

{
  int iVar1;
  uint uVar2;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  app::WeaponRobotHominglaserLinkEventBurst::new_l2c_table();
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_INDEX);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack64,0x65e51e019);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_LINK_NO_CONSTRAINT);
  FUN_7100023af0(aLStack80,this,aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0xf);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::EffectModule__detach_all_impl(this->moduleAccessor,uVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

