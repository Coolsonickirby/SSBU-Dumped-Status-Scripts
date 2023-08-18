
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShulk::status::SpecialLwHit_end(L2CFighterShulk *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *this_00;
  ulong uVar5;
  Hash40 HVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *this_01;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_01 = aLStack96;
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHULK_STATUS_KIND_SPECIAL_LW_N);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) != 0) goto LAB_710000c3f0;
  lib::L2CValue::L2CValue(aLStack64,0xc0f87c4c3);
  HVar6 = lib::L2CValue::as_hash(aLStack64);
  app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar6);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_LW_TARGET_OBJECT_ID)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  uVar4 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
LAB_710000c394:
    lib::L2CValue::_L2CValue(this_01);
  }
  else {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      uVar4 = lib::L2CValue::as_integer(aLStack80);
      pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
      if (pvVar7 == (void *)0x0) {
        lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,pvVar7);
      }
      lib::L2CValue::L2CValue(aLStack96,0x1544b37f76);
      HVar6 = lib::L2CValue::as_hash(aLStack96);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
      app::lua_bind::EffectModule__remove_common_impl(pBVar8,HVar6);
      lib::L2CValue::_L2CValue(aLStack96);
      this_01 = aLStack64;
      goto LAB_710000c394;
    }
  }
  lib::L2CValue::L2CValue(aLStack64,2);
  lib::L2CValue::L2CValue(aLStack96,true);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::EffectModule__remove_post_effect_line_impl
            (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710000c3f0:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

