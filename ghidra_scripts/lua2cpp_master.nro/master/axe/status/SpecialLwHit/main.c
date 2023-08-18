
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMasterAxe::status::SpecialLwHit_main(L2CWeaponMasterAxe *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_MASTER_AXE_INSTANCE_WORK_ID_FLAG_SET_BASE_ATTACK);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_AXE_INSTANCE_WORK_ID_FLOAT_BASE_ATTACK_X);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_AXE_INSTANCE_WORK_ID_FLOAT_BASE_ATTACK_Y);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_MASTER_AXE_INSTANCE_WORK_ID_FLOAT_BASE_ATTACK_Z);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialLwHit_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

