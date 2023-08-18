
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::FinalScene01_main_loop(L2CFighterEdge *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Vector4f VVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Fighter *pFVar7;
  ulong uVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::FighterManager__is_end_movie_impl(LUA_SCRIPT_LINE_STATUS_SHIFT);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710001145c:
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_FINAL_MODULE_SCENE_01_EXEC);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar6);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::FighterSpecializer_Edge::call_final_module(pFVar7,iVar3);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_FINAL_FLAG_CLEAR_COLOR);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      lib::L2CValue::L2CValue(aLStack80,5.0);
      uVar5 = lib::L2CValue::operator__(aLStack80,pLVar6);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) == 0) goto LAB_710001173c;
      lib::L2CValue::L2CValue(aLStack96,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack112,0x119508ddb7);
      uVar5 = lib::L2CValue::as_integer(aLStack96);
      uVar8 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack112,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack128,0x11f8d5395c);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      uVar8 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,0xb54dafbfb);
      lib::L2CValue::L2CValue(aLStack144,0x1188bfcdd3);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar8 = lib::L2CValue::as_integer(aLStack144);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar8);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,255.0);
      lib::L2CValue::as_number(aLStack80);
      lib::L2CValue::as_number(aLStack96);
      lib::L2CValue::as_number(aLStack112);
      VVar4 = lib::L2CValue::as_number(aLStack128);
      app::FighterUtil::renderer_set_clear_color(VVar4);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_EDGE_STATUS_FINAL_FLAG_CLEAR_COLOR);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      goto LAB_710001171c;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_EDGE_STATUS_FINAL_FLAG_SCENE01_SYNC);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) goto LAB_710001145c;
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_FINAL_END);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_710001171c:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar6 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar6);
LAB_710001173c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

