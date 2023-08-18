
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialLwGround_end(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  HitStatus HVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,LINK_NO_CAPTURE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::LinkModule__is_linked_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,LINK_NO_CAPTURE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    uVar4 = app::lua_bind::LinkModule__get_node_object_id_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,uVar4);
    lib::L2CValue::_L2CValue(aLStack64);
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack96,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,pvVar6);
    }
    lib::L2CValue::L2CValue(aLStack128,0);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
    iVar3 = app::lua_bind::HitModule__get_whole_impl(pBVar7,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_INVINCIBLE);
    uVar8 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_NORMAL);
      lib::L2CValue::L2CValue(aLStack112,0);
      HVar5 = lib::L2CValue::as_integer(aLStack64);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack96);
      app::lua_bind::HitModule__set_whole_impl(pBVar7,HVar5,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue
            (aLStack64,(L2CValue *)&FIGHTER_STATUS_BOSS_DEAD_WORK_INT_SITUATION_KIND_PREVIOUS);
  FUN_710001f3f0(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

