
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::FinalWait_main(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  Hash40 HVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,false);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_LINK_NO_GEKKOUGAS);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_LINK_NO_GEKKOUGAS);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::LinkModule__unlink_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_LINK_NO_GEKKOUGAS);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_GEKKOUGA_STATUS_FINAL_WORK_INT_GEKKOUGAS_ID);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::LinkModule__link_impl(this->moduleAccessor,iVar3,uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GEKKOUGA_LINK_NO_GEKKOUGAS);
    lib::L2CValue::L2CValue(aLStack112,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack128,0x31ed91fca);
    lib::L2CValue::L2CValue(aLStack144,_CONSTRAINT_FLAG_ORIENTATION | CONSTRAINT_FLAG_POSITION);
    lib::L2CValue::L2CValue(aLStack160,false);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(aLStack112);
    HVar6 = lib::L2CValue::as_hash(aLStack128);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::LinkModule__set_model_constraint_pos_ort_impl
              (this->moduleAccessor,iVar3,HVar5,HVar6,uVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_GROUND_MOVEMENT);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,FinalWait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

