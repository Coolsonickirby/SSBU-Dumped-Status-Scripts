
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShulk::status::SpecialLwAttack_end(L2CFighterShulk *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  void *pvVar7;
  BattleObjectModuleAccessor *pBVar8;
  L2CValue *this_00;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  this_00 = aLStack80;
  lib::L2CValue::L2CValue(aLStack48,0xc0f87c4c3);
  HVar5 = lib::L2CValue::as_hash(aLStack48);
  app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar5);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,_FIGHTER_SHULK_INSTANCE_WORK_ID_INT_SPECIAL_LW_TARGET_OBJECT_ID)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack48);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,iVar3);
  lib::L2CValue::_L2CValue(aLStack48);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = app::sv_battle_object::is_null(uVar4);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack48,false);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  if ((uVar6 & 1) != 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    bVar1 = app::sv_battle_object::is_active(uVar4);
    lib::L2CValue::L2CValue(aLStack48,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack48);
    lib::L2CValue::_L2CValue(aLStack48);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_710000dae8;
    uVar4 = lib::L2CValue::as_integer(aLStack64);
    pvVar7 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack48,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack48,pvVar7);
    }
    lib::L2CValue::L2CValue(aLStack80,0x1544b37f76);
    HVar5 = lib::L2CValue::as_hash(aLStack80);
    pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack48);
    app::lua_bind::EffectModule__remove_common_impl(pBVar8,HVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack48;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_710000dae8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

