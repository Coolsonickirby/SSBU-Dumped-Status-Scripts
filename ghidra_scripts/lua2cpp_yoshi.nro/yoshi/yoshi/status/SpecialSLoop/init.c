
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialSLoop_init(L2CFighterYoshi *this,L2CValue *return_value)

{
  int iVar1;
  GroundCorrectKind GVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  KineticEnergyNormal *pKVar6;
  Hash40 HVar7;
  Hash40 HVar8;
  float fVar9;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  pvVar4 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,pvVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_YOSHI_SPECIAL_S_AIR);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_GROUND_CLIFF_STOP);
    GVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_YOSHI_SPECIAL_S_GROUND);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar1);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  pKVar6 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack96);
  app::lua_bind::KineticEnergyNormal__on_consider_ground_normal_impl(pKVar6);
  lib::L2CValue::L2CValue(aLStack80,0x4dba80bb2);
  lib::L2CValue::L2CValue(aLStack112,0x8c9ad94f5);
  HVar7 = lib::L2CValue::as_hash(aLStack80);
  HVar8 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::VisibilityModule__set_impl(this->moduleAccessor,HVar7,HVar8);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x75da53379);
  HVar7 = lib::L2CValue::as_hash(aLStack80);
  app::lua_bind::EffectModule__req_common_impl(this->moduleAccessor,HVar7,0.0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_STATUS_KIND_NONE);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_NEXT_STATUS);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_YOSHI_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_GROUND_ANGLE);
  fVar9 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar9,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

