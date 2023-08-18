
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchOctopus::status::End_main(L2CWeaponGamewatchOctopus *this,L2CValue *return_value)

{
  byte bVar1;
  HitStatus HVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
  HVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,false);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLAG_MOT_CHANGE);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x5dc16a790);
  lib::L2CValue::L2CValue(aLStack80,true);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x5451ff62a);
  lib::L2CValue::L2CValue(aLStack80,true);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x53218c6bc);
  lib::L2CValue::L2CValue(aLStack80,true);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x5ac7c531f);
  lib::L2CValue::L2CValue(aLStack80,true);
  HVar4 = lib::L2CValue::as_hash(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar4,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100038770(this);
  lib::L2CValue::L2CValue(aLStack64,End_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

