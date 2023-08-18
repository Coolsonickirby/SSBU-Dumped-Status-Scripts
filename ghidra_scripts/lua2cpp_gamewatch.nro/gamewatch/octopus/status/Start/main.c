
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponGamewatchOctopus::status::Start_main
          (L2CWeaponGamewatchOctopus *this,L2CValue *return_value)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  Hash40 HVar5;
  int iVar6;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0x5dc16a790);
  lib::L2CValue::L2CValue(aLStack112,true);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar5,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x5451ff62a);
  lib::L2CValue::L2CValue(aLStack112,true);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar5,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x53218c6bc);
  lib::L2CValue::L2CValue(aLStack112,true);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar5,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x5ac7c531f);
  lib::L2CValue::L2CValue(aLStack112,true);
  HVar5 = lib::L2CValue::as_hash(aLStack96);
  bVar2 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::VisibilityModule__set_material_anim_priority_impl
            (this->moduleAccessor,HVar5,(bool)(bVar2 & 1));
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  app::lua_bind::KineticModule__unable_energy_all_impl(this->moduleAccessor);
  iVar1 = _WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE;
  if (0 < _WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE) {
    iVar6 = 0;
    do {
      lib::L2CValue::L2CValue(aLStack96,0x50000000);
      lib::L2CValue::L2CValue
                (aLStack112,
                 iVar6 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_OBJECT_ID_LEG_A);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  FUN_710003d510(this);
  lib::L2CValue::L2CValue(aLStack96,Start_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

