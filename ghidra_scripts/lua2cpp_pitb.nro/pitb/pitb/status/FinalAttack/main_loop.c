
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPitb::status::FinalAttack_main_loop(L2CFighterPitb *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  Article *pAVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  L2CValue *this_00;
  Fighter *pFVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIT_GENERATE_ARTICLE_CHARIOT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  pvVar4 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar2);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack80,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,pvVar4);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  pAVar5 = (Article *)lib::L2CValue::as_pointer(aLStack80);
  uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar5);
  lib::L2CValue::L2CValue(aLStack96,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  pvVar4 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar4 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack112,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SYSTEM);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,pvVar4);
  }
  pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack112);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(pBVar6);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar7 = lib::L2CValue::operator__(aLStack128,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PIT_STATUS_FINAL_FLAG_ATTACK_ZOOM);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar7 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar7 & 1) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
      pFVar8 = (Fighter *)lib::L2CValue::as_pointer(this_00);
      app::FighterSpecializer_Pit::request_cut_in_chariotsight(pFVar8);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIT_STATUS_FINAL_FLAG_ATTACK_ZOOM);
      iVar2 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_PIT_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

