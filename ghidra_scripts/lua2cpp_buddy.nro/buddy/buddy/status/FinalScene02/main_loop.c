
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::FinalScene02_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  BattleObjectModuleAccessor *pBVar7;
  Hash40 HVar8;
  L2CValue *this_00;
  Fighter *pFVar9;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_FINAL_WORK_INT_BIGBIRD_OBJECT_ID_01);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x50000000);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack80);
    pvVar6 = (void *)app::sv_battle_object::module_accessor(uVar4);
    if (pvVar6 == (void *)0x0) {
      lib::L2CValue::L2CValue(aLStack64,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,pvVar6);
    }
    pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack64);
    bVar1 = app::lua_bind::MotionModule__is_end_impl(pBVar7);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack64);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_FINAL_MODULE_SCENE_02_EXEC_FIX_POS);
      pFVar9 = (Fighter *)lib::L2CValue::as_pointer(this_00);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      app::FighterSpecializer_Buddy::call_final_module(pFVar9,iVar3);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue(aLStack112,0x191799251a);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      HVar8 = lib::L2CValue::as_hash(aLStack112);
      app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar8,0);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_KIND_FINAL_SCENE03);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_FINAL_SCENE03);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

