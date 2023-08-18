
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelFishingrod::status::Shoot_exec
          (L2CWeaponPickelFishingrod *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *this_00;
  float fVar2;
  undefined8 uVar3;
  float in_register_00005008;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = app::lua_bind::PhysicsModule__get_2nd_node_num_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack160,1);
  lib::L2CValue::operator_(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  uVar3 = app::lua_bind::PhysicsModule__get_2nd_speed_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack160,(float)uVar3);
  lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar3 >> 0x20));
  lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
  FUN_7100009760(aLStack112,this,aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_FISHINGROD_INSTANCE_WORK_ID_FLOAT_FLOAT_SPEED_Y);
  fVar2 = (float)lib::L2CValue::as_number(aLStack176);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

